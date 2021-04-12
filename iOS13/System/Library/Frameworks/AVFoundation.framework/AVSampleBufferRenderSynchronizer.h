/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVSampleBufferRenderSynchronizerInternal, NSArray;

@interface AVSampleBufferRenderSynchronizer : NSObject {

	AVSampleBufferRenderSynchronizerInternal* _synchronizerInternal;

}

@property (readonly) NSArray * renderers; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (assign,nonatomic) float rate; 
+(id)currentFigRenderSynchronizerFactory;
+(void)setFigRenderSynchronizerFactory:(id)arg1 forQueue:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(SCD_Struct_AV7)currentTime;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(OpaqueCMTimebaseRef)timebase;
-(void)removeTimeObserver:(id)arg1 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_AV7)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setRate:(float)arg1 time:(SCD_Struct_AV7)arg2 ;
-(void)addRenderer:(id)arg1 ;
-(void)removeRenderer:(id)arg1 atTime:(SCD_Struct_AV7)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(int)_initializeTimebase;
-(NSArray *)renderers;
-(BOOL)_rendererConfigurationIsValid:(id*)arg1 ;
-(void)_updateRateFromTimebase;
-(BOOL)_canAddRendererInternal:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addRenderer:(id)arg1 error:(id*)arg2 ;
-(void)_performRendererRemoval:(id)arg1 ;
-(id)_getTimebaseObserverForRenderer:(id)arg1 ;
-(/*^block*/id)_getClientCompletionHandlerForRenderer:(id)arg1 ;
-(void)_removeTimebaseObserverForRenderer:(id)arg1 ;
-(id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)_storeObserver:(id)arg1 clientCompletionHandler:(/*^block*/id)arg2 forRenderer:(id)arg3 ;
-(void)removeRenderer:(id)arg1 atTime:(SCD_Struct_AV7)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_scheduleTimedRendererRemovalAtTime:(id)arg1 atTime:(SCD_Struct_AV7)arg2 withClientCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)_multipleAudioRenderersDisallowed;
-(long long)_addedAudioRendererCountInternal;
-(long long)_addedAudioRendererCount;
@end

