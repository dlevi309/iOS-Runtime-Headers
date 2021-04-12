/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol WKActionSheetAssistantDelegate <NSObject>
@optional
-(void)actionSheetAssistant:(id)arg1 willStartInteractionWithElement:(id)arg2;
-(void)actionSheetAssistantDidStopInteraction:(id)arg1;
-(void)updatePositionInformationForActionSheetAssistant:(id)arg1;
-(BOOL)actionSheetAssistant:(id)arg1 showCustomSheetForElement:(id)arg2;
-(void)actionSheetAssistant:(id)arg1 getAlternateURLForImage:(id)arg2 completion:(/*^block*/id)arg3;
-(CGRect*)unoccludedWindowBoundsForActionSheetAssistant:(id)arg1;
-(id)dataDetectionContextForActionSheetAssistant:(id)arg1;
-(id)selectedTextForActionSheetAssistant:(id)arg1;

@required
-(void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
-(void)actionSheetAssistant:(id)arg1 openElementAtLocation:(CGPoint)arg2;
-(void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(CGRect)arg3;
-(Optional<WebKit::InteractionInformationAtPosition>*)positionInformationForActionSheetAssistant:(id)arg1;
-(RetainPtr<NSArray>*)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr<NSArray>*)arg3;
-(BOOL)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;

@end

