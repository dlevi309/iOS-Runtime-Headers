/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol ATXLocationManagerProtocol;
@class _ATXDuetHelper, _PASLock;

@interface _ATXAppLaunchLocation : NSObject {

	id<ATXLocationManagerProtocol> _locationManager;
	_ATXDuetHelper* _duetHelper;
	_PASLock* _lock;

}
+(id)defaultPath;
+(void)writeModel:(id)arg1 ;
+(void)joinLaunchEvents:(id)arg1 withVisits:(id)arg2 block:(/*^block*/id)arg3 ;
+(id)visitsWithLOI:(id)arg1 startDate:(id)arg2 ;
+(id)sortTimeIntervals:(id)arg1 ;
-(id)init;
-(id)locationManager;
-(unsigned long long)loadModel;
-(void)train;
-(id)initWithDuetHelper:(id)arg1 locationManager:(id)arg2 ;
-(void)resetAppIntentLocationData;
-(double)launchProbabilityAtCurrentLOIForBundle:(id)arg1 ;
-(int)launchCountAtCurrentLOIOfBundle:(id)arg1 ;
-(double)launchProbabilityAtCurrentLOIForAppIntent:(id)arg1 ;
-(int)launchCountAtCurrentLOIOfAppIntent:(id)arg1 ;
-(double)launchProbabilityAtCurrentLOIForIntent:(id)arg1 ;
-(int)launchCountAtCurrentLOIOfIntent:(id)arg1 ;
-(double)launchProbabilityAtCurrentLOIForAppForAllIntents:(id)arg1 ;
-(int)launchCountAtCurrentLOIOfAppForAllIntents:(id)arg1 ;
-(int)totalLaunchCountAtCurrentLOI;
-(int)totalIntentLaunchCountAtCurrentLOI;
-(void)trainWithCallback:(/*^block*/id)arg1 ;
-(void)_trainModelWithLOI:(id)arg1 startDate:(id)arg2 ;
-(unsigned long long)loadModelAtPath:(id)arg1 ;
@end

