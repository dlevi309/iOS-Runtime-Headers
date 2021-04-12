/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/

#import <AppSSOCore/AppSSOCore-Structs.h>
#import <libobjc.A.dylib/SOServiceProtocol.h>

@class SOServiceConnection, NSString;

@interface SOClient : NSObject <SOServiceProtocol> {

	SOServiceConnection* _serviceConnection;

}

@property (retain) SOServiceConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_queue;
-(id)init;
-(void)realmsWithCompletion:(/*^block*/id)arg1 ;
-(void)configurationWithCompletion:(/*^block*/id)arg1 ;
-(void)performAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)debugHintsWithCompletion:(/*^block*/id)arg1 ;
-(SOServiceConnection *)serviceConnection;
-(void)setServiceConnection:(SOServiceConnection *)arg1 ;
-(void)isExtensionProcessWithAuditToken:(SCD_Struct_SO0)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

