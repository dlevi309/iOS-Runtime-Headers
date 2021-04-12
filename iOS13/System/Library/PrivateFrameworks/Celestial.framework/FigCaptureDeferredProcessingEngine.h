/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <libobjc.A.dylib/BWGraphStatusDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, BWGraph, NSSet, NSDictionary, BWDeferredProcessingSourceNode, FigCaptureDeferredProcessingJob, NSString;

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	BWGraph* _graph;
	BOOL _graphRunning;
	NSSet* _allSensorIDStrings;
	NSDictionary* _defaultSensorIDsByPortType;
	BWDeferredProcessingSourceNode* _sourceNode;
	FigCaptureDeferredProcessingJob* _job;
	BOOL _interactiveQoS;
	long long _graphPrepareDurationNS;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedProcessingEngine;
-(id)init;
-(void)dealloc;
-(void)releaseResources;
-(void)executeJob:(id)arg1 ;
-(void)graphDidPrepareNodes:(id)arg1 ;
-(void)graph:(id)arg1 didFinishStartingWithError:(int)arg2 ;
-(void)_reportCoreAnalyticsDataWithError:(int)arg1 container:(id)arg2 ;
-(void)_runJob;
-(void)_handleJobCompletion:(int)arg1 ;
-(void)_prepareGraphForCurrentJob;
-(void)_cleanupFromJob;
-(id)_photoPortType;
@end

