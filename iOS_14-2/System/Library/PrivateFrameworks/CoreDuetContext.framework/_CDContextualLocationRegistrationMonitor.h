/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(NSMutableSet *)registrations;
-(id)init;
-(NSMutableDictionary *)managers;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMapTable *)effectiveBundleIDs;
-(NSMutableDictionary *)effectiveBundleIDRegionInfos;
-(void)addRegistration:(id)arg1 ;
-(id)regionInfosForRegistration:(id)arg1 ;
-(void)removeRegistration:(id)arg1 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
@end

