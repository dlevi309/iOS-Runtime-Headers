/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSMutableSet, __HMFLocationAuthorizationRequest, NSObject, NSString, NSBundle, CLLocationManager;

@interface HMFLocationAuthorization : HMFObject <CLLocationManagerDelegate, HMFLogging> {

	id<HMFLocking> _lock;
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
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
+(id)sharedAuthorization;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)bundleIdentifier;
-(int)status;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(CLLocationManager *)internal;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)isMonitoring;
-(id)logIdentifier;
-(void)mark;
-(id)attributeDescriptions;
-(BOOL)isAuthorized;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

