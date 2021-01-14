/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
*/

#import <Foundation/_NSExtensionContextVendor.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/EXExtensionContextVending.h>

@class NSMutableDictionary, NSString;

@interface EXConcreteExtensionContextVendor : _NSExtensionContextVendor <NSXPCListenerDelegate, EXExtensionContextVending> {

	NSMutableDictionary* __extensionServiceConnections;
	NSMutableDictionary* __extensionContexts;
	NSMutableDictionary* __extensionPrincipalObjects;

}

@property (setter=_setExtensionServiceConnections:,nonatomic,retain) NSMutableDictionary * _extensionServiceConnections;              //@synthesize _extensionServiceConnections=__extensionServiceConnections - In the implementation block
@property (setter=_setExtensionContexts:,nonatomic,retain) NSMutableDictionary * _extensionContexts;                                  //@synthesize _extensionContexts=__extensionContexts - In the implementation block
@property (setter=_setExtensionPrincipalObjects:,nonatomic,retain) NSMutableDictionary * _extensionPrincipalObjects;                  //@synthesize _extensionPrincipalObjects=__extensionPrincipalObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_extensionPrincipalClass;
+(id)_extensionDictionary;
+(id)_extensionMainStoryboard;
+(void)_startListening;
+(id)_expirationConcurrentQueue;
+(void)_startListening:(BOOL)arg1 ;
+(Class)_extensionContextClass;
+(id)_completionConcurrentQueue;
-(void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(void)_hostDidEnterBackgroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hostWillResignActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setExtensionPrincipalObjects:(id)arg1 ;
-(NSMutableDictionary *)_extensionPrincipalObjects;
-(void)_setExtensionContexts:(id)arg1 ;
-(void)_onGlobalStateQueueOnly_setPrincipalObject:(id)arg1 forUUID:(id)arg2 ;
-(void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_setExtensionServiceConnections:(id)arg1 ;
-(NSMutableDictionary *)_extensionServiceConnections;
-(BOOL)_shouldCreatePrincipalObject;
-(NSMutableDictionary *)_extensionContexts;
-(void)_hostDidBecomeActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_extensionContextForUUID:(id)arg1 ;
-(void)_tearDownContextWithUUID:(id)arg1 ;
-(void)dealloc;
-(void)_hostWillEnterForegroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

