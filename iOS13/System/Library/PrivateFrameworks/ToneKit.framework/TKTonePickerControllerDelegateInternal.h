/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@protocol TKTonePickerControllerDelegateInternal <NSObject>
@optional
-(void)tonePickerController:(id)arg1 didUpdateIgnoreMute:(BOOL)arg2 forTonePickerItem:(id)arg3 atIndexPath:(id)arg4;
-(id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2;
-(void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1;
-(void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(BOOL)arg3;
-(void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1;
-(void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
-(void)tonePickerController:(id)arg1 willBeginPlaybackOfToneWithIdentifier:(id)arg2;
-(void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2;
-(BOOL)tonePickerControllerShouldShowMedia:(id)arg1;
-(unsigned long long)numberOfMediaItemsInTonePickerController:(id)arg1;
-(id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2;
-(unsigned long long)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2;
-(void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
-(void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1;
-(void)tonePickerController:(id)arg1 requestsPresentingAlertWithTitle:(id)arg2 message:(id)arg3;

@end

