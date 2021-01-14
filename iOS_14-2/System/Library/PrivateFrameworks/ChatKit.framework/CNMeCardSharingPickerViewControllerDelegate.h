/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

