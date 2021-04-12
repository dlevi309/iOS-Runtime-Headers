/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogBreatheFaceView : NTKAnalogVideoFaceView {

	NSDictionary* _editOptionDataSources;
	BOOL _shouldApplyTransform;
	unsigned long long _currentVideoStyle;

}

@property (assign,nonatomic) unsigned long long currentVideoStyle;              //@synthesize currentVideoStyle=_currentVideoStyle - In the implementation block
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureTimeView:(id)arg1 ;
-(void)handleScreenBlanked;
-(id)imageForEditOption:(id)arg1 ;
-(id)_complicationsForegroundColor;
-(id)_complicationsPlatterColor;
-(id)_tapHighlightImage;
-(void)_customizeVideoPlayerOnSetup;
-(void)_handleEitherScreenWake;
-(BOOL)_shouldAnimateComplicationsOnTap;
-(void)_faceViewWasTapped;
-(void)videoDidFinishPlayingToEnd;
-(void)videoDidBeginPlayingQueuedVideo;
-(void)customizeFaceViewForListing:(id)arg1 changeEvent:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_applyVideoPlayerTransform;
-(void)_updateDialSize;
-(void)setupDataSources;
-(unsigned long long)currentVideoStyle;
-(void)setCurrentVideoStyle:(unsigned long long)arg1 ;
-(void)_takeBacklightAssertion;
-(void)_releaseBacklightAssertion;
@end

