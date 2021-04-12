/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSServiceLoader.h>
#import <IDSFoundation/IDSKeychainAdapter.h>
#import <IDSFoundation/IDSPushAdapter.h>
#import <IDSFoundation/IDSXPCAdapter.h>

@class NSMutableDictionary, NSString;

@interface IDSDependencyProvider : NSObject <IDSServiceLoader, IDSKeychainAdapter, IDSPushAdapter, IDSXPCAdapter> {

	NSMutableDictionary* _registeredAdapters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userDefaults;
+(id)sharedProvider;
+(id)pushAdapter;
+(id)registeredObjectForProtocol:(id)arg1 ;
+(void)registerObject:(id)arg1 forProtocol:(id)arg2 ;
+(id)serviceLoader;
+(id)XPCAdapter;
+(id)keychainAdapter;
+(id)systemMonitorAdapter;
-(id)placeholderMachPort;
-(id)apsConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(BOOL)arg3 queue:(id)arg4 ;
-(id)registeredObjectForProtocol:(id)arg1 ;
-(id)loadServiceDictionaries;
-(id)createServiceConnectionWithServiceName:(const char*)arg1 invalidationHandler:(/*^block*/id)arg2 terminationHandler:(/*^block*/id)arg3 peerEventHandler:(/*^block*/id)arg4 peerQueue:(id)arg5 ;
-(BOOL)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(BOOL)arg5 error:(int*)arg6 ;
-(BOOL)getKeychainData:(id*)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int*)arg5 ;
-(BOOL)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int*)arg3 ;
-(void)registerObject:(id)arg1 forProtocol:(id)arg2 ;
@end

