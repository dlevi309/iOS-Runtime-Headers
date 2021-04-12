/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFUserPromptOperation.h>
#import <libobjc.A.dylib/WFCredentialsProvider.h>

@class NSString;

@interface WFEnterpriseJoinPromptOperation : WFUserPromptOperation <WFCredentialsProvider> {

	NSString* password;
	NSString* username;
	SecIdentityRef TLSIdentity;

}

@property (nonatomic,readonly) BOOL wantsModalPresentation; 
@property (nonatomic,readonly) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * password; 
+(id)enterpriseJoinPromptOperationWithDeviceCapability:(long long)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(SecIdentityRef)TLSIdentity;
@end

