/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterHelper.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>

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
+(id)finishWritingDelegateOperationWithAssetWriter:(id)arg1 andFigAssetWriter:(OpaqueFigAssetWriterRef)arg2 andDelegate:(id)arg3 ;
+(id)prepareInputsOperationsWithInputs:(id)arg1 ;
+(id)finalStepWorkaroundOperationWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)dealloc;
-(long long)status;
-(void)finishWriting;
-(void)flush;
-(void)startSessionAtSourceTime:(SCD_Struct_AV7)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV7)arg1 ;
-(void)cancelWriting;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 error:(id*)arg2 ;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)figTrackReferences;
-(OpaqueFigAssetWriterRef)_retainedFigAssetWriter;
-(id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1 ;
-(id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1 ;
@end

