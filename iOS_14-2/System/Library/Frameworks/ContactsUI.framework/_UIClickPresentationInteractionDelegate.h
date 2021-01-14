/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol _UIClickPresentationInteractionDelegate <NSObject>
@optional
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
-(void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg1;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg1;

@required
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;

@end

