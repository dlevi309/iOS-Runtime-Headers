/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CNMeCardSharingPickerViewControllerDelegate <NSObject>
@optional
-(void)sharingPicker:(id)arg1 didSelectSharingStatus:(unsigned long long)arg2;
-(void)sharingPickerDidCancel:(id)arg1;

@required
-(void)sharingPicker:(id)arg1 didChangeSharingState:(BOOL)arg2;
-(void)sharingPickerDidFinish:(id)arg1;
-(void)sharingPicker:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
-(void)sharingPicker:(id)arg1 didSelectNameFormat:(unsigned long long)arg2;

@end

