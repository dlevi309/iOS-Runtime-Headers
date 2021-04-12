/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterHelper.h>
#import <AVFCore/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterFigAssetWriterNotificationHandler, NSString;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {

	OpaqueFigAssetWriterRef _figAssetWriter;
	NSObject*<OS_dispatch_queue> _figAssetWriterAccessQueue;
	BOOL _startSessionCalled;
	AVAssetWriterFigAssetWriterNotificationHandler* _notificationHandler;
	void* _callbackContextToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prepareInputsOperationsWithInputs:(id)arg1 ;
+(id)finalStepWorkaroundOperationWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
+(id)finishWritingDelegateOperationWithAssetWriter:(id)arg1 andFigAssetWriter:(OpaqueFigAssetWriterRef)arg2 andDelegate:(id)arg3 ;
-(void)flush;
-(id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1 ;
-(id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(OpaqueFigAssetWriterRef)_retainedFigAssetWriter;
-(id)figTrackReferences;
-(void)cancelWriting;
-(void)startSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)finishWriting;
-(void)flushSegment;
-(id)initWithConfigurationState:(id)arg1 error:(id*)arg2 ;
-(BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id*)arg1 ;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:(id)arg1 preferredOutputSegmentInterval:(SCD_Struct_AV6)arg2 returningDebugDescription:(id*)arg3 ;
-(long long)status;
-(void)dealloc;
-(id)initWithConfigurationState:(id)arg1 ;
@end

