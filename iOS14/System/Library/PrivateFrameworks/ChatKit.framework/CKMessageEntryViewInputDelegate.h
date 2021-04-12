/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKMessageEntryViewInputDelegate <NSObject>
@optional
-(void)messageEntryView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
-(void)messageEntryViewDidExpand:(id)arg1;
-(void)messageEntryViewDidCollapse:(id)arg1;
-(void)messageEntryViewPhotoButtonTouchDown:(id)arg1;
-(void)messageEntryViewPhotoButtonTouchUpOutside:(id)arg1;
-(void)messageEntryViewSelectedAppMenuItem:(id)arg1;

@required
-(BOOL)messageEntryShouldHideCaret:(id)arg1;
-(long long)messageEntryViewHighLightInputButton:(id)arg1;
-(void)messageEntryViewDidTakeFocus:(id)arg1;
-(void)messageEntryViewHandwritingButtonHit:(id)arg1;
-(void)messageEntryViewPhotoButtonHit:(id)arg1;
-(void)messageEntryViewBrowserButtonHit:(id)arg1;

@end

