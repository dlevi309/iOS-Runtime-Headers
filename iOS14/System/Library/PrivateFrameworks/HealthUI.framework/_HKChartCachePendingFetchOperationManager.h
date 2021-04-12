/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject {

	NSMutableDictionary* _fetchOperationsByIdentifier;
	NSMutableDictionary* _fetchOperationsByUUID;
	NSMutableDictionary* _retryCountByIdentifier;

}
-(id)init;
-(void)addFetchOperation:(id)arg1 ;
-(void)removeFetchOperation:(id)arg1 ;
-(id)fetchOperationForIdentifier:(id)arg1 ;
-(void)incrementRetryCountForIdentifier:(id)arg1 ;
-(long long)retryCountForIdentifier:(id)arg1 ;
-(void)resetRetryCountForIdentifier:(id)arg1 ;
-(id)allPendingIdentifiers;
@end

