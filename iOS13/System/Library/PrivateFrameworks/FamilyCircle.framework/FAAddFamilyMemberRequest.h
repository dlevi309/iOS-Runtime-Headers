/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSString;

@interface FAAddFamilyMemberRequest : FAFamilyCircleRequest {

	BOOL _memberIsUnder13;
	NSString* _memberAppleID;
	NSString* _memberPassword;

}

@property (copy,readonly) NSString * memberAppleID;               //@synthesize memberAppleID=_memberAppleID - In the implementation block
@property (copy,readonly) NSString * memberPassword;              //@synthesize memberPassword=_memberPassword - In the implementation block
@property (readonly) BOOL memberIsUnder13;                        //@synthesize memberIsUnder13=_memberIsUnder13 - In the implementation block
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)memberAppleID;
-(NSString *)memberPassword;
-(BOOL)memberIsUnder13;
-(id)initWithFamilyMemberAppleID:(id)arg1 password:(id)arg2 isUnder13:(BOOL)arg3 ;
@end

