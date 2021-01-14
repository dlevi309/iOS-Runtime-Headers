/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEOABAssignmentResponse;


@protocol GEOExperimentServerProxy <NSObject>
@property (assign,nonatomic,__weak) id<GEOExperimentServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
@required
-(void)forceUpdate;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(void)abAssignUUIDWithSyncCompletionHandler:(/*^block*/id)arg1;
-(void)refreshDatasetABStatus:(id)arg1;
-(void)setDelegate:(id)arg1;
-(GEOABAssignmentResponse *)experimentsInfo;
-(id)initWithDelegate:(id)arg1;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
-(void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1;

@end

