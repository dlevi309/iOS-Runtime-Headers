/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest {

	NSDictionary* _payload;

}

@property (readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(id)initWithPayload:(id)arg1 ;
-(NSDictionary *)payload;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

