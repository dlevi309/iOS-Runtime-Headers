/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableDictionary, HDProfile;

@interface HDQuantitySeriesManager : NSObject {

	NSMutableDictionary* _observerLock_observersByType;
	os_unfair_lock_s _observerLock;
	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)discardSeries:(id)arg1 error:(id*)arg2 ;
-(id)_observersForType:(id)arg1 ;
-(HDProfile *)profile;
-(void)addObserver:(id)arg1 forType:(id)arg2 queue:(id)arg3 ;
-(BOOL)insertValues:(id)arg1 series:(id)arg2 error:(id*)arg3 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)samplesJournaled:(id)arg1 type:(id)arg2 ;
-(void)removeObserver:(id)arg1 forType:(id)arg2 ;
-(void)_notifyForValues:(id)arg1 series:(id)arg2 anchor:(id)arg3 journaled:(BOOL)arg4 ;
-(id)freezeSeries:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 error:(id*)arg4 ;
-(void)samplesAdded:(id)arg1 type:(id)arg2 anchor:(id)arg3 ;
@end

