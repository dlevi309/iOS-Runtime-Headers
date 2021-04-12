/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARImageBasedTechnique.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, ARObjectDetectionResultData, ARODTHandleManager, NSDictionary, NSArray, ARWorldTrackingPoseData;

@interface ARObjectDetectionTechnique : ARImageBasedTechnique {

	NSObject*<OS_dispatch_semaphore> _dataSemaphore;
	NSObject*<OS_dispatch_queue> _loadObjectsQueue;
	ARObjectDetectionResultData* _latestResultData;
	ARODTHandleManager* _odtHandleManager;
	NSObject*<OS_dispatch_semaphore> _detectionSemaphore;
	NSObject*<OS_dispatch_queue> _processDataQueue;
	BOOL _deterministicMode;
	BOOL _finishedLoadingObjects;
	NSDictionary* _referenceObjecteMap;
	NSArray* _detectionObjects;
	ARWorldTrackingPoseData* _currentWorldTrackingPose;

}

@property (assign) BOOL finishedLoadingObjects;                                     //@synthesize finishedLoadingObjects=_finishedLoadingObjects - In the implementation block
@property (retain) ARWorldTrackingPoseData * currentWorldTrackingPose;              //@synthesize currentWorldTrackingPose=_currentWorldTrackingPose - In the implementation block
@property (readonly) NSDictionary * referenceObjecteMap;                            //@synthesize referenceObjecteMap=_referenceObjecteMap - In the implementation block
@property (nonatomic,readonly) NSArray * detectionObjects;                          //@synthesize detectionObjects=_detectionObjects - In the implementation block
-(id)processData:(id)arg1 ;
-(void)prepare:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)requiredTimeInterval;
-(void)setCurrentWorldTrackingPose:(ARWorldTrackingPoseData *)arg1 ;
-(ARWorldTrackingPoseData *)currentWorldTrackingPose;
-(id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3 ;
-(NSArray *)detectionObjects;
-(id)initWithDetectionObjects:(id)arg1 ;
-(BOOL)finishedLoadingObjects;
-(void)_loadReferenceObjects;
-(void)setFinishedLoadingObjects:(BOOL)arg1 ;
-(void)_enqueueObjectForDetectionNonBlocking:(id)arg1 ;
-(NSDictionary *)referenceObjecteMap;
@end

