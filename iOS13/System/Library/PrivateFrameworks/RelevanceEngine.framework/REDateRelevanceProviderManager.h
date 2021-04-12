/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REDateRelevanceProviderManagerProperties.h>

@class NSDate, NSDateInterval;

@interface REDateRelevanceProviderManager : RERelevanceProviderManager <REDateRelevanceProviderManagerProperties> {

	NSDate* _lastDateUpdate;
	NSDateInterval* _todayInterval;

}

@property (nonatomic,readonly) NSDate * lastDateUpdate; 
@property (nonatomic,readonly) NSDate * todayStart; 
@property (nonatomic,readonly) NSDate * todayEnd; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
+(BOOL)_supportsHistoricProviders;
+(id)_dependencyClasses;
-(void)pause;
-(void)resume;
-(void)_handleSignificantTimeChange;
-(void)_prepareForUpdate;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
-(void)_addedProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2 ;
-(void)_scheduleUpdatesForDateProvider:(id)arg1 ;
-(void)_scheduleUpdateForDate:(id)arg1 ;
-(NSDate *)lastDateUpdate;
-(NSDate *)todayStart;
-(NSDate *)todayEnd;
@end

