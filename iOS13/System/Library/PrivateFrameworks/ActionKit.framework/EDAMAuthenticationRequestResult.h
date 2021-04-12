/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMAuthenticationRequestResult : FATObject {

	NSNumber* _userId;
	NSString* _userEmail;
	NSNumber* _result;

}

@property (nonatomic,retain) NSNumber * userId;                 //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * userEmail;              //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,retain) NSNumber * result;                 //@synthesize result=_result - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)result;
-(void)setResult:(NSNumber *)arg1 ;
-(NSString *)userEmail;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
@end

