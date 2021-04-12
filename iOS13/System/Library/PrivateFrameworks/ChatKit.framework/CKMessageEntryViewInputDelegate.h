/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKMessageEntryViewInputDelegate <NSObject>
@optional
-(void)messageEntryView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
-(void)messageEntryViewDidExpand:(id)arg1;
-(void)messageEntryViewDidCollapse:(id)arg1;
-(void)messageEntryViewPhotoButtonTouchDown:(id)arg1;

@required
-(BOOL)messageEntryShouldHideCaret:(id)arg1;
-(long long)messageEntryViewHighLightInputButton:(id)arg1;
-(void)messageEntryViewDidTakeFocus:(id)arg1;
-(void)messageEntryViewHandwritingButtonHit:(id)arg1;
-(void)messageEntryViewPhotoButtonHit:(id)arg1;
-(void)messageEntryViewBrowserButtonHit:(id)arg1;

@end

