/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDaemonServiceDataSource.h>
#import <ARKitCore/ARDaemonServiceDelegate.h>
#import <ARKitCore/ARDaemonServiceListenerDelegate.h>

@class NSMutableArray, NSMutableSet, NSString, NSDictionary;

@interface ARServer : NSObject <ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARDaemonServiceListenerDelegate> {

	NSMutableArray* _services;
	NSMutableSet* _servicesClasses;
	os_unfair_lock_s _servicesLock;

}

@property (nonatomic,readonly) NSString * statusString; 
@property (nonatomic,readonly) NSDictionary * statusDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)addService:(id)arg1 ;
-(void)suspend;
-(id)init;
-(NSString *)statusString;
-(void)invalidate;
-(void)resume;
-(void)dealloc;
-(NSDictionary *)statusDictionary;
-(void)_removeService:(id)arg1 ;
-(id)service:(id)arg1 peerServiceOfType:(Class)arg2 ;
-(void)serviceDidInterrupt:(id)arg1 ;
-(void)serviceDidInvalidate:(id)arg1 ;
-(BOOL)didDiscoverService:(id)arg1 ;
-(long long)numberOfActiveConnectionsForService:(id)arg1 ;
-(BOOL)_isServiceDisabledByDefaults:(id)arg1 ;
-(void)_updateWithServices;
-(id)_peerServicesOfService:(id)arg1 ;
@end

