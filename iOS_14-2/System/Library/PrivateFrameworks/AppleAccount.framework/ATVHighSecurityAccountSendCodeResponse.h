/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface ATVHighSecurityAccountSendCodeResponse : AAResponse

@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSDictionary * userDisplayStrings; 
@property (nonatomic,readonly) NSString * errorTitle; 
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) long long errorCode; 
-(BOOL)success;
-(long long)errorCode;
-(NSString *)errorMessage;
-(NSString *)errorTitle;
-(NSDictionary *)userDisplayStrings;
@end

