/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSDictionary;

@interface FADispatchFamilyPushRequest : FAFamilyCircleRequest {

	NSDictionary* _payload;

}

@property (copy,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(id)initWithPayload:(id)arg1 ;
-(NSDictionary *)payload;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

