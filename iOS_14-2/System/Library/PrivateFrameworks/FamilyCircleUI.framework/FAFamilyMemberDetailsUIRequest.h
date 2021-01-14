/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FAFamilyRequest.h>

@class NSNumber, NSString;

@interface FAFamilyMemberDetailsUIRequest : FAFamilyRequest {

	NSNumber* _memberDSID;
	NSString* _memberEmail;

}

@property (nonatomic,copy) NSNumber * memberDSID;               //@synthesize memberDSID=_memberDSID - In the implementation block
@property (nonatomic,copy) NSString * memberEmail;              //@synthesize memberEmail=_memberEmail - In the implementation block
-(NSNumber *)memberDSID;
-(BOOL)isUserInitiated;
-(id)_queryString;
-(id)_endpoint;
-(void)setMemberDSID:(NSNumber *)arg1 ;
-(void)URLRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)setMemberEmail:(NSString *)arg1 ;
-(NSString *)memberEmail;
@end

