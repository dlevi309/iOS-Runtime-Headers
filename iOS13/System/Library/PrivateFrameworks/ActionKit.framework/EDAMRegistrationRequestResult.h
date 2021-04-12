/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMRegistrationRequestResult : FATObject {

	NSString* _refreshToken;
	NSString* _userEmail;
	NSNumber* _result;
	NSString* _name;

}

@property (nonatomic,retain) NSString * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,retain) NSString * userEmail;                 //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,retain) NSNumber * result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)result;
-(void)setResult:(NSNumber *)arg1 ;
-(NSString *)userEmail;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(void)setRefreshToken:(NSString *)arg1 ;
@end

