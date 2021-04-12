/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(id)messageBody;
-(void)setWantsDeliveryStatus:(NSNumber *)arg1 ;
-(void)setWantsCertifiedDelivery:(BOOL)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(BOOL)_shouldUseJSONForEncoding;
-(NSNumber *)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(BOOL)wantsCertifiedDelivery;
-(id)_objectForKeyFromMadridBag:(id)arg1 ;
-(id)_madridServerBag;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsHTTPHeaders;
-(id)userAgentHeaderString;
-(BOOL)wantsUserAgentInHeaders;
@end

