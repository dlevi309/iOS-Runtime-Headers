/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying> {

	NSNumber* _wantsDeliveryStatus;
	NSNumber* _version;
	NSDictionary* _deliveryStatusContext;
	BOOL _wantsCertifiedDelivery;

}

@property (copy) NSNumber * wantsDeliveryStatus;                    //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (assign) BOOL wantsCertifiedDelivery;                     //@synthesize wantsCertifiedDelivery=_wantsCertifiedDelivery - In the implementation block
@property (copy) NSDictionary * deliveryStatusContext;              //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (copy) NSNumber * version;                                //@synthesize version=_version - In the implementation block
-(BOOL)_shouldUseJSONForEncoding;
-(NSNumber *)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(BOOL)wantsCertifiedDelivery;
-(id)_madridServerBag;
-(id)init;
-(id)_objectForKeyFromMadridBag:(id)arg1 ;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsHTTPHeaders;
-(id)userAgentHeaderString;
-(BOOL)wantsUserAgentInHeaders;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWantsDeliveryStatus:(NSNumber *)arg1 ;
-(void)setWantsCertifiedDelivery:(BOOL)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(id)messageBody;
@end

