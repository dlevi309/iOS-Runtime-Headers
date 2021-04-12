/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFUserPromptOperation.h>
#import <libobjc.A.dylib/WFCredentialsProvider.h>

@protocol WFCredentialsProviderContext;
@class NSString;

@interface WFPasswordPromptOperation : WFUserPromptOperation <WFCredentialsProvider> {

	NSString* password;
	SecIdentityRef TLSIdentity;
	NSString* username;
	id<WFCredentialsProviderContext> _credentialsProviderContext;

}

@property (nonatomic,retain) id<WFCredentialsProviderContext> credentialsProviderContext;              //@synthesize credentialsProviderContext=_credentialsProviderContext - In the implementation block
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,readonly) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
+(id)passwordPromptOperationWithCredentialsContext:(id)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(SecIdentityRef)TLSIdentity;
-(void)setCredentialsProviderContext:(id<WFCredentialsProviderContext>)arg1 ;
-(id<WFCredentialsProviderContext>)credentialsProviderContext;
@end

