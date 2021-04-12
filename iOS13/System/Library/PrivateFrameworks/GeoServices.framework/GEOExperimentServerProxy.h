/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEOABAssignmentResponse;


@protocol GEOExperimentServerProxy <NSObject>
@property (assign,nonatomic,__weak) id<GEOExperimentServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
@required
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)initWithDelegate:(id)arg1;
-(void)forceUpdate;
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1;
-(void)refreshDatasetABStatus:(id)arg1;
-(GEOABAssignmentResponse *)experimentsInfo;
-(void)abAssignUUIDWithSyncCompletionHandler:(/*^block*/id)arg1;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
-(void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1;

@end

