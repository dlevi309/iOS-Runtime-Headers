/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)registerObject:(id)arg1 forProtocol:(id)arg2 ;
+(id)pushAdapter;
+(id)userDefaults;
+(id)systemMonitorAdapter;
+(id)XPCAdapter;
+(id)registeredObjectForProtocol:(id)arg1 ;
+(id)serviceLoader;
+(id)keychainAdapter;
+(id)sharedProvider;
-(void)registerObject:(id)arg1 forProtocol:(id)arg2 ;
-(id)loadServiceDictionaries;
-(BOOL)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int*)arg3 ;
-(id)registeredObjectForProtocol:(id)arg1 ;
-(BOOL)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(BOOL)arg5 error:(int*)arg6 ;
-(id)createServiceConnectionWithServiceName:(const char*)arg1 invalidationHandler:(/*^block*/id)arg2 terminationHandler:(/*^block*/id)arg3 peerEventHandler:(/*^block*/id)arg4 peerQueue:(id)arg5 ;
-(BOOL)getKeychainData:(id*)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int*)arg5 ;
-(id)placeholderMachPort;
-(id)apsConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(BOOL)arg3 queue:(id)arg4 ;
@end

