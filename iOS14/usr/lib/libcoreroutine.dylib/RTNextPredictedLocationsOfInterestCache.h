/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTNextPredictedLocationsOfInterestCacheDelegate, OS_dispatch_queue;
@class NSObject, NSArray, RTDataProtectionManager, RTStarkManager;

@interface RTNextPredictedLocationsOfInterestCache : NSObject {

	BOOL _enabled;
	id<RTNextPredictedLocationsOfInterestCacheDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _nextPredictedLocationsOfInterest;
	RTDataProtectionManager* _dataProtectionManager;
	RTStarkManager* _starkManager;

}

@property (assign,nonatomic) BOOL enabled;                                                                     //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * nextPredictedLocationsOfInterest;                                       //@synthesize nextPredictedLocationsOfInterest=_nextPredictedLocationsOfInterest - In the implementation block
@property (nonatomic,retain) RTDataProtectionManager * dataProtectionManager;                                  //@synthesize dataProtectionManager=_dataProtectionManager - In the implementation block
@property (nonatomic,retain) RTStarkManager * starkManager;                                                    //@synthesize starkManager=_starkManager - In the implementation block
@property (assign,nonatomic,__weak) id<RTNextPredictedLocationsOfInterestCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)cachePath;
-(void)clear;
-(BOOL)enabled;
-(id)init;
-(id<RTNextPredictedLocationsOfInterestCacheDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(NSArray *)nextPredictedLocationsOfInterest;
-(void)setDelegate:(id<RTNextPredictedLocationsOfInterestCacheDelegate>)arg1 ;
-(RTDataProtectionManager *)dataProtectionManager;
-(void)purgeWithReferenceDate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setNextPredictedLocationsOfInterest:(NSArray *)arg1 ;
-(void)onDataProtectionNotification:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 dataProtectionManager:(id)arg2 starkManager:(id)arg3 ;
-(void)setDataProtectionManager:(RTDataProtectionManager *)arg1 ;
-(void)cacheNextPredictedLocationsOfInterest:(id)arg1 ;
-(id)getCachedNextPredictedLocationsOfInterest;
-(void)handleUnlockedSinceBoot:(BOOL)arg1 ;
-(void)onStarkNotification:(id)arg1 ;
-(void)handleStarkTrustedConnectionEstablished:(BOOL)arg1 ;
-(RTStarkManager *)starkManager;
-(void)setStarkManager:(RTStarkManager *)arg1 ;
@end

