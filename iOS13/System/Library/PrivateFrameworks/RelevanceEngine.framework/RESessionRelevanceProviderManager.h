/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/RESessionRelevanceProviderManagerProperties.h>

@class NSDate, NSString;

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager <RESessionRelevanceProviderManagerProperties> {

	NSDate* _lastDateUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * lastUpdateDate; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
+(BOOL)_supportsHistoricProviders;
-(void)pause;
-(void)resume;
-(NSDate *)lastUpdateDate;
-(void)_handleSignificantTimeChange;
-(float)_relevanceForProvider:(id)arg1 ;
-(void)_prepareForUpdate;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(void)_scheduleUpdatesForSessionProvider:(id)arg1 ;
@end

