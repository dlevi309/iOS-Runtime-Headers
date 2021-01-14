/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {

	AVPlayerItemVideoOutputInternal* _videoOutputInternal;

}

@property (__weak,readonly) id<AVPlayerItemOutputPullDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(id)init;
-(id<AVPlayerItemOutputPullDelegate>)delegate;
-(BOOL)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(BOOL)arg2 withExceptionReason:(id*)arg3 ;
-(CVBufferRef)_copyPixelBufferForItemTimeWithOptions:(SCD_Struct_AV6)arg1 itemTimeForDisplay:(SCD_Struct_AV6*)arg2 options:(unsigned)arg3 ;
-(void)_dispatchOutputSequenceWasFlushed;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(long long)clientStateOnRequestedMediaDataChangeNotification;
-(void)_dispatchOutputMediaDataWillChange;
-(void)_respondToPlayerItemFormatDescriptionsChange;
-(BOOL)hasNewPixelBufferForItemTime:(SCD_Struct_AV6)arg1 ;
-(void)_stopObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_startObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(id)initWithOutputSettings:(id)arg1 ;
-(SCD_Struct_AV6)earliestAvailablePixelBufferItemTime;
-(void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1 ;
-(void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_AV6)arg1 itemTimeForDisplay:(SCD_Struct_AV6*)arg2 ;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_AV6)arg1 remove:(BOOL)arg2 itemTimeForDisplay:(SCD_Struct_AV6*)arg3 ;
-(void)_setTagBuffersWithConversionInformation;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)suppressesPlayerRendering;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(OpaqueFigVisualContextRef)_visualContext;
-(id)_pixelBufferAttributes;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)dealloc;
@end

