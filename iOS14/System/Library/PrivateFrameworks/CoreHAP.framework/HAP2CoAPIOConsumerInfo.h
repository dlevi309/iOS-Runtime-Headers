/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAP2CoAPIOConsumerWeakHolder.h>

@interface HAP2CoAPIOConsumerInfo : HAP2CoAPIOConsumerWeakHolder {

	coap_session_t* _session;

}

@property (assign,nonatomic) coap_session_t* session;              //@synthesize session=_session - In the implementation block
-(coap_session_t*)session;
-(void)setSession:(coap_session_t*)arg1 ;
-(id)initWithConsumer:(id)arg1 ;
@end

