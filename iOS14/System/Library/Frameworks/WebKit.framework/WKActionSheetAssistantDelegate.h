/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol WKActionSheetAssistantDelegate <NSObject>
@optional
-(id)createTargetedContextMenuHintForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistantDidStopInteraction:(id)arg1;
-(id)dataDetectionContextForActionSheetAssistant:(id)arg1 positionInformation:(const InteractionInformationAtPosition*)arg2;
-(id)selectedTextForActionSheetAssistant:(id)arg1;
-(CGRect*)unoccludedWindowBoundsForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistant:(id)arg1 shareElementWithImage:(id)arg2 rect:(CGRect)arg3;
-(void)removeContextMenuViewIfPossibleForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistant:(id)arg1 willStartInteractionWithElement:(id)arg2;
-(void)actionSheetAssistant:(id)arg1 getAlternateURLForImage:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updatePositionInformationForActionSheetAssistant:(id)arg1;
-(BOOL)actionSheetAssistant:(id)arg1 showCustomSheetForElement:(id)arg2;

@required
-(RetainPtr<NSArray>*)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr<NSArray>*)arg3;
-(void)actionSheetAssistant:(id)arg1 openElementAtLocation:(CGPoint)arg2;
-(BOOL)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
-(Optional<WebKit::InteractionInformationAtPosition>*)positionInformationForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistant:(id)arg1 performAction:(BOOL)arg2;
-(void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(CGRect)arg3;

@end

