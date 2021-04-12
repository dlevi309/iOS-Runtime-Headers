/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface RadioRecentStationsController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasRefreshed;
	BOOL _hasValidStationGroups;
	NSMutableArray* _pendingRecentStations;
	NSArray* _serverRecentStationGroups;
	NSArray* _stationGroups;

}

@property (nonatomic,copy,readonly) NSArray * stationGroups; 
@property (nonatomic,copy,readonly) NSArray * stations; 
-(id)init;
-(NSArray *)stations;
-(NSArray *)stationGroups;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_newRecentStationsRequest;
-(void)_handleRecentStationsResponse:(id)arg1 fromRequest:(id)arg2 pendingRecentStations:(id)arg3 isInitialCacheLoad:(BOOL)arg4 ;
-(void)_createStationGroups;
-(void)_insertPendingRecentStation:(id)arg1 ;
-(void)_postStationsDidChangeNotification;
-(void)insertPendingRecentStation:(id)arg1 ;
-(void)insertPendingRecentStationDictionary:(id)arg1 ;
-(void)removePendingRecentStation:(id)arg1 ;
@end

