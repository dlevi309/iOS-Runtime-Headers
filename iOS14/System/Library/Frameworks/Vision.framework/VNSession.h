/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNDetectorProviding.h>
#import <libobjc.A.dylib/VNDetectorReleasing.h>
#import <libobjc.A.dylib/VNTrackerProviding.h>
#import <libobjc.A.dylib/VNLegacyForcedCleanupImplementing.h>
#import <libobjc.A.dylib/VNRequestWarming.h>

@class VNFrameworkManager, VNDetectorCache, NSMutableSet, NSString;

@interface VNSession : NSObject <VNDetectorProviding, VNDetectorReleasing, VNTrackerProviding, VNLegacyForcedCleanupImplementing, VNRequestWarming> {

	VNFrameworkManager* _frameworkManager;
	VNDetectorCache* _detectorCache_onlyAccessWithDetectorAccessingLock;
	os_unfair_lock_s _requestedTrackerUUIDsAccessLock;
	NSMutableSet* _requestedTrackerUUIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)globalSession;
-(void)releaseTracker:(id)arg1 ;
-(id)init;
-(void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)arg1 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(void)legacyForcedCleanupWithOptions:(id)arg1 ;
-(void)releaseCachedResources;
-(id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3 ;
-(id)detectorOfType:(id)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3 ;
-(void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)arg1 ;
-(id)loadedDetectors;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2 ;
-(void)legacyForcedCleanupOfFacePipelineWithLevel:(id)arg1 ;
-(void)_releaseAllTrackers;
-(void)_enumerateDetectorsUsingBlock:(/*^block*/id)arg1 ;
-(void)_releaseDetectorsPassingTest:(/*^block*/id)arg1 ;
-(void)_releaseDetectorsOfClasses:(id)arg1 ;
-(void)_releaseDetectorTypes:(id)arg1 ;
-(void)_releaseAllDetectors;
-(id)_locateDetectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 allowingCreation:(BOOL)arg3 error:(id*)arg4 ;
-(id)_cachedDetectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 ;
-(void)_releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2 ;
-(void)legacyForcedCleanupOfScenePipelineWithLevel:(id)arg1 ;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

