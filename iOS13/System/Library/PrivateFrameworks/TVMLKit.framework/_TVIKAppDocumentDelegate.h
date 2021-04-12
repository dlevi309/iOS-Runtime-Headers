/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@protocol _TVIKAppDocumentDelegate <IKAppDocumentDelegatePrivate>
@optional
-(BOOL)tv_handleEventForDocument:(id)arg1 eventName:(id)arg2 targetResponder:(id)arg3 viewElement:(id)arg4 extraInfo:(id*)arg5;
-(id)tv_featuresManagerForDocument:(id)arg1;
-(BOOL)tv_isPresentedModalForDocument:(id)arg1;
-(id)tv_interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;

@required
-(CGSize*)tv_adjustedWindowSizeForDocument:(id)arg1;

@end

