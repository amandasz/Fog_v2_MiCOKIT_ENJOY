#ifndef __FOG_V2_CONFIG_H_
#define __FOG_V2_CONFIG_H_

#define FOG_ENABLE  (1)
#define FOG_DISABLE (0)

//ѡ�����Ӳ���ͺ�
#define EMW_3165                            FOG_ENABLE
#define EMW_3166                            FOG_DISABLE
#define EMW_3239                            FOG_DISABLE
#define EMW_3031                            FOG_DISABLE
#define NUCLEO_F411                         FOG_DISABLE

#if (EMW_3165 == FOG_ENABLE)
    #define FOG_V2_PRODUCT_ID               ("3c800be4-8612-11e6-9d95-00163e103941")    //�ƶ˽�����Ʒ�õ��� ��ƷID
    #define FOG_V2_REPORT_VER               ("FOG_V2_EMW3165@")     //�̼����汾��
    #define FOG_V2_REPORT_VER_NUM           ("001")                 //�̼��ΰ汾��
    #define FOG_V2_MODULE_TYPE              ("EMW3165")             //ģ���ͺ�
#elif (EMW_3166 == FOG_ENABLE)
    #define FOG_V2_PRODUCT_ID               ("5719ac44-8612-11e6-9d95-00163e103941")    //�ƶ˽�����Ʒ�õ��� ��ƷID
    #define FOG_V2_REPORT_VER               ("FOG_V2_EMW3166@")     //�̼����汾��
    #define FOG_V2_REPORT_VER_NUM           ("001")                 //�̼��ΰ汾��
    #define FOG_V2_MODULE_TYPE              ("EMW3166")             //ģ���ͺ�
#elif(EMW_3239 == FOG_ENABLE)
    #define FOG_V2_PRODUCT_ID               ("712d8ee8-8612-11e6-9d95-00163e103941")    //�ƶ˽�����Ʒ�õ��� ��ƷID
    #define FOG_V2_REPORT_VER               ("FOG_V2_EMW3239@")     //�̼����汾��
    #define FOG_V2_REPORT_VER_NUM           ("001")                 //�̼��ΰ汾��
    #define FOG_V2_MODULE_TYPE              ("EMW3239")             //ģ���ͺ�
#elif (EMW_3031 == FOG_ENABLE)
    #define FOG_V2_PRODUCT_ID               ("b4754452-8612-11e6-9d95-00163e103941")    //�ƶ˽�����Ʒ�õ��� ��ƷID
    #define FOG_V2_REPORT_VER               ("FOG_V2_EMW3031@")     //�̼����汾��
    #define FOG_V2_REPORT_VER_NUM           ("001")                 //�̼��ΰ汾��
    #define FOG_V2_MODULE_TYPE              ("EMW3031")             //ģ���ͺ�
#elif (NUCLEO_F411 == FOG_ENABLE)
    #define FOG_V2_PRODUCT_ID               ("bd538076-87dd-11e6-9d95-00163e103941")    //�ƶ˽�����Ʒ�õ��� ��ƷID
    #define FOG_V2_REPORT_VER               ("FOG_V2_NUCLEO_F411@") //�̼����汾��
    #define FOG_V2_REPORT_VER_NUM           ("001")                 //�̼��ΰ汾��
    #define FOG_V2_MODULE_TYPE              ("EMW1062")             //ģ���ͺ�
#endif

#define FOG_V2_DEVICE_SN                ("MXCHIP")                  //оƬSN Ĭ��ΪMXCHIP

#define FOG_V2_HTTP_DOMAIN_NAME         ("v2.fogcloud.io")          //HTTP��������ַ
#define FOG_V2_HTTP_PORT_SSL            (443)   //fog v2 http SSL�˿�
#define HTTP_REQ_LOG                    (0)     //1:enable 0:disable

#define FOG_V2_MQTT_DOMAIN_NAME         ("mqtt.fogcloud.io")  //MQTT��������ַ
#define FOG_V2_MQTT_PORT_SLL            (8443)  //fog v2 MQTT SSL�˿�
#define FOG_V2_MQTT_PORT_NOSLL          (1883)  //fog v2 MQTT ��SSL�˿�
#define MQTT_CLIENT_SSL_ENABLE          (0)      //1:enable 0:disable (EMW3165��ROM��С ��������Ϊ0)
#define FOG_MQTT_DEBUG                  (1)      //MQTT��ӡ��Ϣ����

#define FOG_BONJOUR_SERVICE_NAME        ("_easylink._tcp.local.")  //MDNS service name
#define FOG_BONJOUR_SERVICE_TTL         (2)     //bonjour��ttlʱ��

#define FOG_V2_TCP_SERVER_PORT          (8002)   //APP���豸�ı���ͨ�Ŷ˿�

#define FOG_V2_OTA_ENABLE               (1)      //1:enable 0:disable  �򿪺���fog��ʼ���л��鵱ǰ�汾,������µİ汾���Զ�����Ȼ������

#define FOG_V2_USE_SUB_DEVICE           (1)      //1:enable 0:disable  �Ƿ�ʹ�����豸�ӿ�,ֻ��EMW3239�Ż�ʹ�õ�

#include "fog_v2_include.h"                      //����ṩ��ͷ�ļ�

#endif
