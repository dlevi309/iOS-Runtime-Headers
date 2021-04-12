/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/

#import <SharedUtils/BaseManagedService.h>
#import <libobjc.A.dylib/ServiceManager.h>
#import <libobjc.A.dylib/ServiceProvider.h>

@class NSMutableDictionary, NSString;

@interface DefaultServiceManager : BaseManagedService <ServiceManager, ServiceProvider> {

	NSMutableDictionary* _sessions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(id)init;
-(void)bootstrapSessionServiceType:(id)arg1 serviceClientID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)bootstrapSessionServiceType:(id)arg1 serviceClientID:(id)arg2 serviceClientConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)shutdownSessionsWithServiceClientID:(id)arg1 ;
-(BOOL)allowsMultipleClientsForServiceType:(id)arg1 ;
-(void)_shutdownSessionsWithServiceType:(id)arg1 ;
-(void)bootstrapServiceWithType:(id)arg1 serviceClientConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

