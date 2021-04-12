/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSMapTable, NSString;

@interface _CDContextualLocationRegistrationMonitor : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _registrations;
	NSMutableDictionary* _managers;
	NSMapTable* _effectiveBundleIDs;
	NSMutableDictionary* _effectiveBundleIDRegionInfos;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * registrations;                          //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * managers;                        //@synthesize managers=_managers - In the implementation block
@property (nonatomic,readonly) NSMapTable * effectiveBundleIDs;                       //@synthesize effectiveBundleIDs=_effectiveBundleIDs - In the implementation block
@property (readonly) NSMutableDictionary * effectiveBundleIDRegionInfos;              //@synthesize effectiveBundleIDRegionInfos=_effectiveBundleIDRegionInfos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
-(NSMutableSet *)registrations;
-(NSMutableDictionary *)managers;
-(NSMapTable *)effectiveBundleIDs;
-(NSMutableDictionary *)effectiveBundleIDRegionInfos;
-(id)regionInfosForRegistration:(id)arg1 ;
-(void)addRegistration:(id)arg1 ;
-(void)removeRegistration:(id)arg1 ;
@end

