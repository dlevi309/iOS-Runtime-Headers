/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isValid;
-(NSString *)password;
-(id)localizedName;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
@end

