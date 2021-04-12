/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKMessageEntryViewDelegate <NSObject>
@optional
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2;
-(id)textViewOnscreenWithEntryView;
-(void)messageEntryView:(id)arg1 shouldShowAppStrip:(BOOL)arg2 animated:(BOOL)arg3;
-(BOOL)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(id)arg1;
-(void)messageEntryViewSwipeDownGestureRecognized:(id)arg1;
-(void)sendCurrentLocationMessage:(id)arg1;

@required
-(double)messageEntryViewMaxHeight:(id)arg1;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
-(void)messageEntryViewDidChange:(id)arg1;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg1;
-(CGSize*)messageEntryViewMaxShelfPluginViewSize:(id)arg1;
-(void)messageEntryViewDidBeginEditing:(id)arg1;
-(void)messageEntryViewDidEndEditing:(id)arg1;
-(BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
-(void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
-(void)messageEntryViewRecordingDidChange:(id)arg1;
-(void)messageEntryViewSendButtonHit:(id)arg1;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg1;

@end

