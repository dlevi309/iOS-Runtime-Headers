/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMediaRep.h>
#import <TSReading/TSKAVPlayerControllerDelegate.h>
#import <TSReading/TSDAudioHUDControllerDelegate.h>

@protocol TSDAudioHUDController;
@class TSKAVPlayerController, CALayer, TSDMovieInfo, NSString;

@interface TSDAudioRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate> {

	TSKAVPlayerController* mPlayerController;
	CALayer* mPlayPauseButtonLayer;
	CALayer* mAudioImageLayer;
	float mDynamicVolume;
	BOOL mIsChangingDynamicVolume;
	id<TSDAudioHUDController> mAudioHUDController;

}

@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
@property (nonatomic,readonly) TSKAVPlayerController * playerController; 
@property (nonatomic,readonly) id<TSDAudioHUDController> audioHUDController; 
@property (nonatomic,readonly) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(Class)layerClass;
-(void)drawInContext:(CGContextRef)arg1 ;
-(float)volume;
-(void)willBeRemoved;
-(TSKAVPlayerController *)playerController;
-(BOOL)isDraggable;
-(void)willBeginZooming;
-(TSDMovieInfo *)movieInfo;
-(BOOL)directlyManagesLayerContent;
-(void)processChangedProperty:(int)arg1 ;
-(void)playbackDidStopForPlayerController:(id)arg1 ;
-(void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2 ;
-(void)willBeginReadMode;
-(void)didEndZooming;
-(void)willUpdateLayer:(id)arg1 ;
-(void)updateLayerGeometryFromLayout:(id)arg1 ;
-(CGRect)boundsForStandardKnobs;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(BOOL)shouldShowKnobs;
-(BOOL)shouldShowSelectionHighlight;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)becameSelected;
-(void)becameNotSelected;
-(BOOL)shouldShowDragHUD;
-(BOOL)shouldShowSizesInRulers;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)shouldAllowReplacementFromPaste;
-(void)p_updateRepeatMode;
-(void)p_updateVolume;
-(void)p_updateStartTime;
-(void)p_updateEndTime;
-(BOOL)p_shouldPlayerControllerExistThroughoutSelection;
-(void)p_setupPlayerControllerIfNecessary;
-(void)p_teardownPlayerController;
-(BOOL)canResetMediaSize;
-(void)dynamicVolumeChangeDidBegin;
-(void)dynamicVolumeUpdateToValue:(float)arg1 ;
-(void)dynamicVolumeChangeDidEnd;
-(BOOL)p_shouldShowPlayPauseLayers;
-(BOOL)p_isPlaying;
-(void)p_updateButtonForPlaying:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(BOOL)hitPlayPauseButtonWithPoint:(CGPoint)arg1 ;
-(BOOL)p_isEditingAnimations;
-(void)updatePlayButtonForPoint:(CGPoint)arg1 ;
-(BOOL)shouldAllowReplacementFromDrop;
-(BOOL)providesGuidesWhileAligning;
-(BOOL)exclusivelyProvidesGuidesWhileAligning;
-(id)textureWithContext:(id)arg1 ;
-(id<TSDAudioHUDController>)audioHUDController;
@end

