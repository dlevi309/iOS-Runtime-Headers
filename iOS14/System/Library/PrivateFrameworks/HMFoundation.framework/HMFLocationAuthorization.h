/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <HMFoundation/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, __HMFLocationAuthorizationRequest, NSObject, NSString, NSBundle, CLLocationManager;

@interface HMFLocationAuthorization : HMFObject <CLLocationManagerDelegate, HMFLogging> {

	hmf_unfair_data_lock_s _lock;
	int _status;
	long long _state;
	NSMutableSet* _observers;
	__HMFLocationAuthorizationRequest* _request;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _bundleIdentifier;
	NSBundle* _bundle;
	CLLocationManager* _internal;

}

@property (copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSBundle * bundle;                                //@synthesize bundle=_bundle - In the implementation block
@property (readonly) CLLocationManager * internal;                     //@synthesize internal=_internal - In the implementation block
@property (readonly) int status; 
@property (retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (getter=isAuthorized,readonly) BOOL authorized; 
@property (getter=isMonitoring,readonly) BOOL monitoring; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)initialize;
+(id)sharedAuthorization;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSBundle *)bundle;
-(void)unregisterObserver:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(BOOL)isMonitoring;
-(CLLocationManager *)internal;
-(NSString *)bundleIdentifier;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)logIdentifier;
-(void)mark;
-(id)attributeDescriptions;
-(BOOL)isAuthorized;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)status;
-(void)dealloc;
@end

