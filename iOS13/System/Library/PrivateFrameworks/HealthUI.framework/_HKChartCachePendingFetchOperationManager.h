/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject {

	NSMutableDictionary* _fetchOperationsByIdentifier;
	NSMutableDictionary* _fetchOperationsByUUID;
	NSMutableDictionary* _retryCountByIdentifier;

}
-(id)init;
-(long long)retryCountForIdentifier:(id)arg1 ;
-(void)addFetchOperation:(id)arg1 ;
-(void)removeFetchOperation:(id)arg1 ;
-(id)fetchOperationForIdentifier:(id)arg1 ;
-(void)incrementRetryCountForIdentifier:(id)arg1 ;
-(void)resetRetryCountForIdentifier:(id)arg1 ;
-(id)allPendingIdentifiers;
@end

