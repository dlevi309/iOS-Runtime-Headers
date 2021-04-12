/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface VEiOSCommonDelegate : NSObject
+(id)mainBundle;
+(float)videoScale;
+(void)setVideoScale:(float)arg1 ;
+(void)setDelegateSubclass:(Class)arg1 ;
+(BOOL)fullScreenPlaybackOnExternalDisplay;
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
+(BOOL)furtherConstrainVideoScale;
+(void)setFullScreenPlaybackOnExternalDisplay:(BOOL)arg1 ;
@end

