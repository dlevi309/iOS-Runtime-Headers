/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <libobjc.A.dylib/CDPAuthProviderInternal.h>

@protocol CDPAuthProvider;
@class NSString;

@interface CDPAuthProviderProxy : NSObject <CDPAuthProviderInternal> {

	id<CDPAuthProvider> _authProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyWithAuthProvider:(id)arg1 ;
-(void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(/*^block*/id)arg2 ;
@end

