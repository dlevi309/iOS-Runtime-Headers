/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVSampleBufferRenderSynchronizerInternal, NSArray;

@interface AVSampleBufferRenderSynchronizer : NSObject {

	AVSampleBufferRenderSynchronizerInternal* _synchronizerInternal;

}

@property (readonly) NSArray * renderers; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (assign,nonatomic) float rate; 
+(id)_makeSTSLabel;
+(id)currentFigRenderSynchronizerFactory;
+(void)setFigRenderSynchronizerFactory:(id)arg1 forQueue:(id)arg2 ;
-(id)init;
-(int)_initializeTimebase;
-(void)setRate:(float)arg1 ;
-(void)addRenderer:(id)arg1 ;
-(SCD_Struct_AV6)currentTime;
-(OpaqueCMTimebaseRef)timebase;
-(void)setRate:(float)arg1 time:(SCD_Struct_AV6)arg2 ;
-(BOOL)_rendererConfigurationIsValid:(id*)arg1 ;
-(void)_updateRateFromTimebase;
-(BOOL)_addRenderer:(id)arg1 error:(id*)arg2 ;
-(BOOL)_canAddRendererInternal:(id)arg1 error:(id*)arg2 ;
-(void)_performRendererRemoval:(id)arg1 ;
-(id)_getTimebaseObserverForRenderer:(id)arg1 ;
-(/*^block*/id)_getClientCompletionHandlerForRenderer:(id)arg1 ;
-(void)_removeTimebaseObserverForRenderer:(id)arg1 ;
-(long long)_addedAudioRendererCount;
-(id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)removeRenderer:(id)arg1 atTime:(SCD_Struct_AV6)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_storeObserver:(id)arg1 clientCompletionHandler:(/*^block*/id)arg2 forRenderer:(id)arg3 ;
-(void)removeRenderer:(id)arg1 atTime:(SCD_Struct_AV6)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)_scheduleTimedRendererRemovalAtTime:(id)arg1 atTime:(SCD_Struct_AV6)arg2 withClientCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)_multipleAudioRenderersDisallowed;
-(long long)_addedAudioRendererCountInternal;
-(float)rate;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_AV6)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeTimeObserver:(id)arg1 ;
-(void)dealloc;
-(NSArray *)renderers;
@end

