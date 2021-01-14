/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/

#import <libobjc.A.dylib/SFAutoFillHelperProtocol.h>

@class NSXPCConnection, NSString;

@interface SFAutoFillHelperProxy : NSObject <SFAutoFillHelperProtocol> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg1 confirmPasswordRules:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)dealloc;
-(void)getRemoteAutoFillAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
@end

