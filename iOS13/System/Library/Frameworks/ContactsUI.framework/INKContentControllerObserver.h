/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol INKContentControllerObserver <NSObject>
@optional
-(void)contentController:(id)arg1 actionTapped:(id)arg2;
-(void)contentController:(id)arg1 contentViewNeedsLayout:(id)arg2;
-(id)contentController:(id)arg1 contentView:(id)arg2 iconForCustomizationID:(long long)arg3;

@required
-(void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3;
-(void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3;

@end

