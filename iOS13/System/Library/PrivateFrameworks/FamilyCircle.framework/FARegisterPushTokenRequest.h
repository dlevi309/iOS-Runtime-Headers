/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest {

	NSData* _pushToken;

}

@property (copy,readonly) NSData * pushToken;              //@synthesize pushToken=_pushToken - In the implementation block
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)pushToken;
-(id)initWithPushToken:(id)arg1 ;
@end

