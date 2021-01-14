/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPeopleNamePickerViewControllerDelegate <NSObject>
@optional
-(void)namePickerControllerDidStartEditing:(id)arg1;
-(void)namePickerControllerDidEndEditing:(id)arg1;
-(void)namePickerControllerWillChangeText:(id)arg1;

@required
-(void)namePickerController:(id)arg1 didPickPerson:(id)arg2;
-(void)namePickerController:(id)arg1 didPickContact:(id)arg2;
-(void)namePickerController:(id)arg1 didPickString:(id)arg2;

@end

