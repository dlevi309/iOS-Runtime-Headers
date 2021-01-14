/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserId:(NSNumber *)arg1 ;
-(void)setResult:(NSNumber *)arg1 ;
-(NSNumber *)userId;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSNumber *)result;
-(NSString *)userEmail;
@end

