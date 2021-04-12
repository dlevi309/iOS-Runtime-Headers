/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNLegacyForcedCleanupImplementing.h>
#import <libobjc.A.dylib/VNMTLDeviceWisdomParametersProviding.h>

@class NSNotificationCenter, NSRecursiveLock, _VNWeakSessionsCollection, VNMTLDeviceWisdomParameters, NSArray, NSString;

@interface VNFrameworkManager : NSObject <VNLegacyForcedCleanupImplementing, VNMTLDeviceWisdomParametersProviding> {

	NSNotificationCenter* _notificationCenter;
	NSRecursiveLock* _detectorAccessingLock;
	os_unfair_lock_s _sessionsAccessLock;
	_VNWeakSessionsCollection* _sessions;
	os_unfair_lock_s _wisdomParametersLock;
	VNMTLDeviceWisdomParameters* _wisdomParameters;

}

@property (readonly) id<NSLocking> detectorAccessingLock; 
@property (readonly) NSNotificationCenter * notificationCenter; 
@property (copy,readonly) NSArray * allSessions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
-(id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)arg1 ;
-(id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 forSession:(id)arg3 error:(id*)arg4 ;
-(NSArray *)allSessions;
-(id)wisdomParameterForMTLDevice:(id)arg1 error:(id*)arg2 ;
-(void)legacyForcedCleanupWithOptions:(id)arg1 ;
-(void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)arg1 ;
-(id)loadedDetectors;
-(id)_locateDetectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 inSessions:(id)arg3 excludingSession:(id)arg4 ;
-(id<NSLocking>)detectorAccessingLock;
-(void)registerSession:(id)arg1 ;
-(void)legacyForcedCleanupOfFacePipelineWithLevel:(id)arg1 ;
-(void)legacyForcedCleanupOfScenePipelineWithLevel:(id)arg1 ;
-(void)releaseMetalDeviceWisdomParameters;
@end

