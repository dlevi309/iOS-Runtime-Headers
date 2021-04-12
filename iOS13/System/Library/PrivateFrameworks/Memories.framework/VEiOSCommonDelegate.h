/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface VEiOSCommonDelegate : NSObject
+(id)mainBundle;
+(BOOL)fullScreenPlaybackOnExternalDisplay;
+(void)setDelegateSubclass:(Class)arg1 ;
+(BOOL)allowSaving;
+(BOOL)ignoreReadOnly;
+(id)currentProject;
+(void)nukeCaches;
+(id)activeCoreProjectViewController;
+(BOOL)shouldPlaySlowMoWhenPreviewing;
+(unsigned long long)playbackFrameRateMode;
+(unsigned long long)exportFrameRateMode;
+(float)duckingAmount;
+(BOOL)forceTeardownDisplayOnProjectChange;
+(BOOL)updateProjectAndCachesOnPhotosLibraryChange;
+(long long)playbackPixelCount;
+(void)setCurrentProject:(id)arg1 ;
+(void)notifyCPVCProjectChanged;
+(float)videoScale;
+(void)setVideoScale:(float)arg1 ;
+(BOOL)furtherConstrainVideoScale;
+(void)setFullScreenPlaybackOnExternalDisplay:(BOOL)arg1 ;
@end

