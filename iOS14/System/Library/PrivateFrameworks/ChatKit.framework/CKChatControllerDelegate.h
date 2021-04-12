/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKChatControllerDelegate <NSObject,CKCoreChatControllerDelegate>
@optional
-(void)keyCommandToggleDetails;
-(void)doneButtonPressedForChatController:(id)arg1;
-(id)navigationBarBackdropLayerGroupNameForChatController:(id)arg1;
-(long long)unreadCountForCurrentFilterModeForChatController:(id)arg1;
-(void)screenTimeOKPressedForChatController:(id)arg1;
-(void)chatController:(id)arg1 didDetachDetailsNavigationController:(id)arg2;
-(void)presentDetailsNavigationController:(id)arg1;
-(BOOL)hasDetailsNavigationController;
-(void)dismissDetailsNavigationController;
-(void)dismissAndReopenDetailsNavigationController;
-(BOOL)isDetailsNavigationControllerDetached;

@required
-(void)chatController:(id)arg1 forwardComposition:(id)arg2;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg1;

@end

