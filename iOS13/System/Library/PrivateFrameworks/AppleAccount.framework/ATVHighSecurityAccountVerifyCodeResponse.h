/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse

@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSString * errorTitle; 
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) long long errorCode; 
-(BOOL)success;
-(NSString *)errorMessage;
-(long long)errorCode;
-(NSString *)errorTitle;
@end

