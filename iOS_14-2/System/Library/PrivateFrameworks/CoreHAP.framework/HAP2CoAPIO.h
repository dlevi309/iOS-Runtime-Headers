/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


#import <CoreHAP/CoreHAP-Structs.h>
@interface HAP2CoAPIO : NSObject
+(id)new;
+(id)thread;
+(id)lock;
+(id)consumers;
+(void)registerConsumer:(id)arg1 ;
+(void)unregisterConsumer:(id)arg1 ;
+(BOOL)isRunning;
+(void)setThread:(id)arg1 ;
+(BOOL)setCoapAddressFromString:(id)arg1 port:(unsigned short)arg2 coapAddress:(coap_address_t*)arg3 ;
+(void)queueSessionBlockForConsumer:(id)arg1 sessionBlock:(/*^block*/id)arg2 ;
+(void)setConsumers:(id)arg1 ;
-(id)init;
@end

