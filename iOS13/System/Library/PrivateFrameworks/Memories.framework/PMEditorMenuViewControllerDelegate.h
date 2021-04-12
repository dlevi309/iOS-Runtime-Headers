/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class VEKProduction;


@protocol PMEditorMenuViewControllerDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long numberOfClipsInMovie; 
@property (nonatomic,readonly) VEKProduction * production; 
@property (nonatomic,readonly) double sequenceDuration; 
@required
-(VEKProduction *)production;
-(void)prepareLayoutForCollapsedMode;
-(void)prepareLayoutForSpiltMode;
-(void)showTitleEditorViewController;
-(void)showMusicPickerViewController;
-(void)showContentEditorViewController;
-(void)showDurationEditorViewController;
-(void)showKeyAssetSelectionPicker;
-(void)showDebugTitleStylePickerViewController;
-(void)showDebugEditStylePickerViewController;
-(void)showDebugTransitionPickerViewController;
-(void)showDebugFilterPickerViewController;
-(unsigned long long)numberOfClipsInMovie;
-(double)sequenceDuration;

@end

