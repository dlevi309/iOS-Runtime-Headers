/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CCSRemoteServiceServerProtocol.h>

@class CCSModuleRepository, CCSModuleSettingsProvider, NSXPCListener, NSHashTable, NSString;

@interface CCSRemoteServiceProvider : NSObject <NSXPCListenerDelegate, CCSRemoteServiceServerProtocol> {

	CCSModuleRepository* _moduleRepository;
	CCSModuleSettingsProvider* _settingsProvider;
	NSXPCListener* _listener;
	NSHashTable* _presentationEndpoints;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedInstance;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)invalidate;
-(id)_init;
-(void)resume;
-(void)dealloc;
-(void)registerEndpoint:(id)arg1 ;
-(void)setVisibility:(BOOL)arg1 forModuleWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enumerateEndpointsUsingBlock:(/*^block*/id)arg1 ;
-(void)requestAvailableModuleIdentifiersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestEnableModuleWithIdentifier:(id)arg1 force:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestDisableModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

