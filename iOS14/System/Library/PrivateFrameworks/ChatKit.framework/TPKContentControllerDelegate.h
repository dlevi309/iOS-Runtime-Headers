/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol TPKContentControllerDelegate <NSObject>
@optional
-(void)contentController:(id)arg1 contentViewNeedsLayout:(id)arg2;
-(void)contentController:(id)arg1 actionTapped:(id)arg2;
-(id)contentController:(id)arg1 personalizedStringForID:(unsigned long long)arg2 content:(id)arg3;
-(void)contentController:(id)arg1 eventOccurred:(long long)arg2 content:(id)arg3 context:(id)arg4;
-(id)contentController:(id)arg1 contentView:(id)arg2 iconForCustomizationID:(long long)arg3;

@required
-(void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3;
-(void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3;

@end

