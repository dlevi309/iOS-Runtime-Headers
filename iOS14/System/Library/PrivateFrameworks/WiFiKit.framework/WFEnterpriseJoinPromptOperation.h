/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
+(id)enterpriseJoinPromptOperationWithDeviceCapability:(long long)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(SecIdentityRef)TLSIdentity;
@end

