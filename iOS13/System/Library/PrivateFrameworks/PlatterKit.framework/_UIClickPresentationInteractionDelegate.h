/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/


@protocol _UIClickPresentationInteractionDelegate <NSObject>
@optional
-(void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg1;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg1;
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;

@required
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;

@end

