/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSMutableDictionary, HKQueryAnchor, NSString, _HKDatabaseChangesQueryServerConfiguration;

@interface HDDatabaseChangesQueryServer : HDQueryServer {

	NSMutableDictionary* _pendingSampleTypeChanges;
	HKQueryAnchor* _anchor;
	BOOL _hasDeliveredInitialResults;
	NSString* _detailsQueryDateIndexSQL;
	NSString* _detailsQueryAnchorIndexSQL;

}

@property (nonatomic,copy,readonly) _HKDatabaseChangesQueryServerConfiguration * databaseChangesQueryConfiguration; 
+(Class)queryClass;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)didAddSamplesOfTypes:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(id)objectTypes;
-(BOOL)_shouldListenForUpdates;
-(void)_queue_deliverError:(id)arg1 ;
-(BOOL)validateConfiguration:(id*)arg1 ;
-(_HKDatabaseChangesQueryServerConfiguration *)databaseChangesQueryConfiguration;
-(id)_queue_changesByTypeWithDatabase:(id)arg1 sinceAnchor:(long long)arg2 error:(id*)arg3 ;
-(void)_queue_deliverQueryAnchor:(id)arg1 sampleTypeChanges:(id)arg2 ;
-(id)_authorizedObjectTypes;
-(id)_queue_sampleTypeCodesWithUnfrozenSeriesWithAuthorizedTypes:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(long long)_queue_queryStrategyForType:(id)arg1 sinceAnchor:(long long)arg2 currentAnchor:(long long)arg3 ;
-(id)_queue_detailedChangeUsingAnchorIndexStrategyForType:(id)arg1 sinceAnchor:(long long)arg2 hasUnfrozenSeries:(BOOL)arg3 database:(id)arg4 error:(id*)arg5 ;
-(id)_queue_detailedChangeUsingDateIndexStrategyForType:(id)arg1 sinceAnchor:(long long)arg2 hasUnfrozenSeries:(BOOL)arg3 database:(id)arg4 error:(id*)arg5 ;
-(void)_queue_addPendingChangesForSample:(id)arg1 ;
@end

