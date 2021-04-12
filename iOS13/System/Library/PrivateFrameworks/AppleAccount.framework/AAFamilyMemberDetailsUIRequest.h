/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, NSString;

@interface AAFamilyMemberDetailsUIRequest : AAFamilyRequest {

	NSNumber* _memberDSID;
	NSString* _memberEmail;

}

@property (nonatomic,copy) NSNumber * memberDSID;               //@synthesize memberDSID=_memberDSID - In the implementation block
@property (nonatomic,copy) NSString * memberEmail;              //@synthesize memberEmail=_memberEmail - In the implementation block
-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)urlString;
-(NSNumber *)memberDSID;
-(void)setMemberDSID:(NSNumber *)arg1 ;
-(NSString *)memberEmail;
-(void)setMemberEmail:(NSString *)arg1 ;
@end

