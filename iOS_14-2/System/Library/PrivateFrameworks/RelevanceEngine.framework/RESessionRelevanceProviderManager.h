/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/RESessionRelevanceProviderManagerProperties.h>

@class NSDate, NSString;

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager <RESessionRelevanceProviderManagerProperties> {

	NSDate* _lastDateUpdate;

}

@property (nonatomic,readonly) NSDate * lastUpdateDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
+(BOOL)_supportsHistoricProviders;
-(NSDate *)lastUpdateDate;
-(void)pause;
-(void)_handleSignificantTimeChange;
-(void)resume;
-(float)_relevanceForProvider:(id)arg1 ;
-(void)_prepareForUpdate;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(void)_scheduleUpdatesForSessionProvider:(id)arg1 ;
@end

