/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@protocol TKTonePickerControllerDelegate <NSObject>
@optional
-(void)tonePickerController:(id)arg1 requestsPerformingBatchUpdates:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)tonePickerController:(id)arg1 didDeletePickerRowItems:(id)arg2;
-(void)tonePickerController:(id)arg1 didDeleteTonePickerSectionItems:(id)arg2;
-(void)tonePickerController:(id)arg1 didInsertPickerRowItems:(id)arg2;
-(void)tonePickerController:(id)arg1 didInsertTonePickerSectionItems:(id)arg2;
-(void)tonePickerController:(id)arg1 didUpdateHeaderTextOfTonePickerSectionItems:(id)arg2;
-(void)tonePickerController:(id)arg1 didUpdateFooterTextOfTonePickerSectionItems:(id)arg2;
-(void)tonePickerController:(id)arg1 didUpdateDownloadProgressOfTonePickerItem:(id)arg2;
-(void)tonePickerController:(id)arg1 didUpdateTonePickerItem:(id)arg2;
-(void)tonePickerControllerDidReloadTones:(id)arg1;
-(void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
-(void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(BOOL)arg2 ofTonePickerItem:(id)arg3;
-(void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3;

@end

