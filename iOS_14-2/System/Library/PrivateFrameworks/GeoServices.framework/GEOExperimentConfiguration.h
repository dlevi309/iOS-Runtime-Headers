/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOExperimentServerProxyDelegate.h>

@protocol GEOExperimentServerProxy;
@class GEOABAssignmentResponse, NSMutableArray, NSString;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {

	id<GEOExperimentServerProxy> _serverProxy;
	GEOABAssignmentResponse* _experimentsInfo;
	os_unfair_lock_s _experimentsInfoLock;
	NSMutableArray* _experimentObservers;
	os_unfair_lock_s _experimentObserversLock;

}

@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConfiguration;
+(void)useProxy:(Class)arg1 ;
-(id)detailedDescription;
-(id)_debug_customQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2 ;
-(id)init;
-(id)clientConfig;
-(void)abAssignUUIDWithSyncCompletionHandler:(/*^block*/id)arg1 ;
-(void)refreshDatasetABStatus:(id)arg1 ;
-(id)experimentAssignments;
-(GEOABAssignmentResponse *)experimentsInfo;
-(void)updateURLComponents:(id)arg1 forRequestKind:(SCD_Struct_GE91)arg2 ;
-(id)experimentURLForURL:(id)arg1 requestKind:(SCD_Struct_GE91)arg2 ;
-(void)_debug_forEachExperimentType:(/*^block*/id)arg1 ;
-(void)_setActiveExperimentBranchDictionaryRepresentation:(id)arg1 ;
-(void)addExperimentObserver:(id)arg1 queue:(id)arg2 ;
-(void)_fetchAllAvailableExperimentsResponse:(/*^block*/id)arg1 ;
-(void)_debug_setActiveExperimentBranch:(id)arg1 ;
-(id)_siriClientMetadata;
-(id)_debug_bucketId;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1 ;
-(id)clientConfigurationValueForKey:(id)arg1 ;
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_parsecClientMetadata;
-(id)_reportAProblemClientMetadata;
-(void)_debug_forceUpdate;
-(id)detailedDescriptionDictionaryRepresentation;
-(id)_debug_datasetId;
-(id)_debug_configurationDate;
-(id)_mapsAbClientMetadata;
-(void)removeExperimentObserver:(id)arg1 ;
-(void)dealloc;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1 ;
-(void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
@end

