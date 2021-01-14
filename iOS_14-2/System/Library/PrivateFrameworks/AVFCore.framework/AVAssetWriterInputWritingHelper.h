/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterInputHelper.h>
#import <AVFCore/AVAssetWriterInputMediaDataRequesterDelegate.h>
#import <AVFCore/AVWeakObservable.h>
#import <AVFCore/AVKeyPathDependencyHost.h>

@protocol OS_dispatch_queue;
@class AVFigAssetWriterTrack, AVAssetWriterInputMediaDataRequester, AVAssetWriterInputPassDescription, AVKeyPathDependencyManager, NSObject, NSString;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate, AVWeakObservable, AVKeyPathDependencyHost> {

	AVFigAssetWriterTrack* _assetWriterTrack;
	AVAssetWriterInputMediaDataRequester* _mediaDataRequester;
	BOOL _observingSelf;
	CVPixelBufferPoolRef _pixelBufferPool;
	AVAssetWriterInputPassDescription* _currentPassDescription;
	AVKeyPathDependencyManager* _keyPathDependencyManager;
	NSObject*<OS_dispatch_queue> _mediaDataRequesterSerialQueue;
	NSObject*<OS_dispatch_queue> _readyForMoreMediaDataObserverSerialQueue;

}

@property (getter=_assetWriterTrack,nonatomic,readonly) AVFigAssetWriterTrack * assetWriterTrack;              //@synthesize assetWriterTrack=_assetWriterTrack - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPassDescription * currentPassDescription;                       //@synthesize currentPassDescription=_currentPassDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)markCurrentPassAsFinished;
-(void)markAsFinished;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(AVAssetWriterInputPassDescription *)currentPassDescription;
-(void)stopRequestingMediaData;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id*)arg3 ;
-(void)_startObservingReadyForMoreMediaDataKeyPath;
-(void)markAsFinishedAndTransitionCurrentHelper:(id)arg1 ;
-(void)_stopObservingReadyForMoreMediaDataKeyPath;
-(void)beginPassIfAppropriate;
-(BOOL)isReadyForMoreMediaData;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)setCurrentPassDescription:(AVAssetWriterInputPassDescription *)arg1 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
-(void)_nudgeMediaDataRequesterIfAppropriate:(id)arg1 ;
-(void)didStartInitialSession;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)prepareToFinishWritingReturningError:(id*)arg1 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(BOOL)mediaDataRequesterShouldRequestMediaData;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(BOOL)canPerformMultiplePasses;
-(void)prepareToEndSession;
-(id)_assetWriterTrack;
-(long long)status;
-(void)dealloc;
-(id)initWithConfigurationState:(id)arg1 ;
@end

