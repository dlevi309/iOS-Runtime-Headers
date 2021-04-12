/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXTransitionPredictorProtocol.h>

@protocol ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol;
@class CLLocation, ATXPredictedTransition, NSDate, NSString;

@interface ATXTransitionPredictorCR : NSObject <ATXTransitionPredictorProtocol> {

	id<ATXLocationManagerProtocol> _locationManager;
	id<ATXPredictedLocationsManagerProtocol> _predictionsManager;
	CLLocation* _locationAtLastPrediction;
	ATXPredictedTransition* _upcomingTransition;
	NSDate* _now;

}

@property (nonatomic,retain) NSDate * now;                          //@synthesize now=_now - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDate *)now;
-(void)invalidateCache;
-(void)setNow:(NSDate *)arg1 ;
-(id)getNextTransitionOnActivity:(id)arg1 ;
-(id)initWithLocationManager:(id)arg1 locationPredictionsManager:(id)arg2 ;
-(id)getNextTransitionOnActivity:(id)arg1 date:(id)arg2 location:(id)arg3 ;
-(BOOL)isCacheValidForDate:(id)arg1 location:(id)arg2 ;
-(BOOL)updateCacheOnActivity:(id)arg1 ;
-(id)nextExitDate;
-(id)nextLoi;
@end

