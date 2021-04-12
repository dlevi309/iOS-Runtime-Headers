/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/BWGraphStatusDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, NSString, BWGraph, BWDeferredProcessingSourceNode, FigCaptureDeferredProcessingJob, NSSet, NSDictionary;

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_os_transaction> _graphTransaction;
	NSString* _currentPortType;
	BOOL _currentIntelligentDistortionCorrectionEnabled;
	BOOL _currentGeomtetricDistortionCorrectionEnabled;
	BWGraph* _graph;
	BOOL _graphRunning;
	BWDeferredProcessingSourceNode* _sourceNode;
	FigCaptureDeferredProcessingJob* _job;
	BOOL _interactiveQoS;
	long long _graphPrepareDurationNS;
	NSSet* _allSensorIDStrings;
	NSDictionary* _defaultSensorIDsByPortType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedProcessingEngine;
-(id)init;
-(void)graphDidPrepareNodes:(id)arg1 ;
-(void)graph:(id)arg1 didFinishStartingWithError:(int)arg2 ;
-(void)_runJob;
-(void)_handleJobCompletion:(int)arg1 ;
-(BOOL)_reuseCurrentGraphForJob:(id)arg1 ;
-(void)_releaseGraph;
-(void)_createGraphAndRunJobWhenStarted;
-(void)_cleanupFromJob;
-(void)_reportCoreAnalyticsDataWithError:(int)arg1 container:(id)arg2 ;
-(void)executeJob:(id)arg1 ;
-(void)releaseResources;
-(void)dealloc;
@end

