/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@class NSDate, NSTimer, NSString;

@interface TILanguageModelMaintainer : NSObject <TIKeyboardActivityObserving> {

	NSDate* _nextEligibleMaintenanceDate;
	NSTimer* _dynamicLearningCacheTimer;

}

@property (nonatomic,retain) NSDate * nextEligibleMaintenanceDate;              //@synthesize nextEligibleMaintenanceDate=_nextEligibleMaintenanceDate - In the implementation block
@property (nonatomic,retain) NSTimer * dynamicLearningCacheTimer;               //@synthesize dynamicLearningCacheTimer=_dynamicLearningCacheTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLanguageModelMaintainer;
-(id)init;
-(void)dealloc;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(void)touchDynamicLearningCacheTimer;
-(BOOL)isMaintenanceDue;
-(void)performMaintenanceIfNecessary;
-(void)dynamicLearningCacheTimerFired:(id)arg1 ;
-(NSDate *)nextEligibleMaintenanceDate;
-(void)setNextEligibleMaintenanceDate:(NSDate *)arg1 ;
-(NSTimer *)dynamicLearningCacheTimer;
-(void)setDynamicLearningCacheTimer:(NSTimer *)arg1 ;
@end

