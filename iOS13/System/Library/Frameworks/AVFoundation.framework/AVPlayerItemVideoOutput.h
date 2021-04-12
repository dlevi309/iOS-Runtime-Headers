/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {

	AVPlayerItemVideoOutputInternal* _videoOutputInternal;

}

@property (__weak,readonly) id<AVPlayerItemOutputPullDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(id)init;
-(void)dealloc;
-(id<AVPlayerItemOutputPullDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)hasNewPixelBufferForItemTime:(SCD_Struct_AV7)arg1 ;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_AV7)arg1 itemTimeForDisplay:(SCD_Struct_AV7*)arg2 ;
-(void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1 ;
-(id)_pixelBufferAttributes;
-(BOOL)suppressesPlayerRendering;
-(OpaqueFigVisualContextRef)_visualContext;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(long long)clientStateOnRequestedMediaDataChangeNotification;
-(void)_dispatchOutputMediaDataWillChange;
-(BOOL)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(BOOL)arg2 withExceptionReason:(id*)arg3 ;
-(void)_respondToPlayerItemFormatDescriptionsChange;
-(CVBufferRef)_copyPixelBufferForItemTimeWithOptions:(SCD_Struct_AV7)arg1 itemTimeForDisplay:(SCD_Struct_AV7*)arg2 options:(unsigned)arg3 ;
-(void)_stopObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_startObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(id)initWithOutputSettings:(id)arg1 ;
-(SCD_Struct_AV7)earliestAvailablePixelBufferItemTime;
-(void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_AV7)arg1 remove:(BOOL)arg2 itemTimeForDisplay:(SCD_Struct_AV7*)arg3 ;
-(void)_setTagBuffersWithConversionInformation;
-(void)_dispatchOutputSequenceWasFlushed;
@end

