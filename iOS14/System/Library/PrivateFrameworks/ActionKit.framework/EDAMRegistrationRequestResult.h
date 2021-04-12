/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(NSNumber *)arg1 ;
-(NSString *)refreshToken;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)result;
-(NSString *)userEmail;
-(void)setName:(NSString *)arg1 ;
-(void)setRefreshToken:(NSString *)arg1 ;
@end

