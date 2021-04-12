/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSMutableDictionary, NSDate;

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {

	NSMutableDictionary* _relevanceProviderMap;
	NSDate* _lastDateUpdate;

}
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_supportsHistoricProviders;
-(id)initWithQueue:(id)arg1 ;
-(void)pause;
-(void)_handleSignificantTimeChange;
-(void)resume;
-(void)dealloc;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(void)_removeProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(void)_handleActionPerformedNotifiction:(id)arg1 ;
-(void)_scheduleUpdatesForActionProvider:(id)arg1 ;
@end

