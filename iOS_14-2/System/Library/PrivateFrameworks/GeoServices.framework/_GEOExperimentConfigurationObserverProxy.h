/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSHashTable, NSObject;

@interface _GEOExperimentConfigurationObserverProxy : NSObject {

	NSHashTable* _observers;
	os_unfair_lock_s _observersLock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)forEachObserver:(/*^block*/id)arg1 ;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)observersCount;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

