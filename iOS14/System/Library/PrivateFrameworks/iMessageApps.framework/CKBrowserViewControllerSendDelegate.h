/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
*/


@protocol CKBrowserViewControllerSendDelegate <NSObject>
@optional
-(void)commitSticker:(id)arg1 forPlugin:(id)arg2;
-(BOOL)commitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(id*)arg4;
-(void)commitSticker:(id)arg1 atScreenCoordinate:(CGPoint)arg2 scale:(double)arg3 rotation:(double)arg4;
-(void)dismissAndPresentPhotosApp;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 forPlugin:(id)arg3;
-(BOOL)handwritingIsDisplayed;
-(void)setEntryViewHidden:(BOOL)arg1;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 forPlugin:(id)arg3 completion:(/*^block*/id)arg4;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 forPlugin:(id)arg2;
-(void)requestPresentationStyleFullScreenModalForPlugin:(id)arg1;
-(void)eagerUploadPayload:(id)arg1 identifier:(id)arg2 replace:(BOOL)arg3;
-(void)eagerUploadCancelIdentifier:(id)arg1;
-(void)dismissAndReloadInputViews:(BOOL)arg1 forPlugin:(id)arg2;
-(void)startEditingPayloadBypassingValidation:(id)arg1 forPlugin:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)dismissAndReloadInputViews:(BOOL)arg1;
-(void)requestPresentationStyleExpanded:(BOOL)arg1;
-(void)commitPayload:(id)arg1;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2;
-(void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)dismissToKeyboard:(BOOL)arg1;
-(void)commitSticker:(id)arg1;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(/*^block*/id)arg4;
-(void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
-(void)setLocalUserIsTyping:(BOOL)arg1;
-(void)startEditingPayload:(id)arg1;
-(id)dragControllerTranscriptDelegate;
-(void)dismiss;

@end

