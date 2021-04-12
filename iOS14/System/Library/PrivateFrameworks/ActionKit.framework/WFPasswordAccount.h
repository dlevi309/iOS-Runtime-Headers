/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFAccount.h>

@class NSString;

@interface WFPasswordAccount : WFAccount {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)accountWithUsername:(id)arg1 password:(id)arg2 ;
-(id)localizedName;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(BOOL)isValid;
-(void)setPassword:(NSString *)arg1 ;
@end

