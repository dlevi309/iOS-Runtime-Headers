/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNDetectorProviding.h>
#import <libobjc.A.dylib/VNDetectorReleasing.h>

@class NSMutableSet, NSString;

@interface VNDetectorCache : NSObject <VNDetectorProviding, VNDetectorReleasing> {

	os_unfair_lock_s _detectorsLock;
	NSMutableSet* _detectors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cacheDetector:(id)arg1 ;
-(id)init;
-(id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3 ;
-(id)detectorOfType:(id)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3 ;
-(id)loadedDetectors;
-(void)evictAllDetectors;
-(void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2 ;
-(void)evictDetectorsPassingTest:(/*^block*/id)arg1 ;
@end

