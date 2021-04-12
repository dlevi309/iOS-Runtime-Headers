/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/AXActionSheetUIServer.axuiservice/AXActionSheetUIServer
*/


@protocol AXUIAlertDelegate <NSObject>
@optional
-(void)alertWithIdentifierWasEnqueued:(id)arg1;
-(double)delayForDequeuingAlertWithIdentifier:(id)arg1;
-(double)desiredWindowLevelForAlertWithIdentifier:(id)arg1;
-(id)styleProviderForAlertWithIdentifier:(id)arg1;
-(void)alertWithIdentifierDidAppear:(id)arg1;
-(void)alertWithIdentifierDidDisappear:(id)arg1;
-(void)alertWithIdentifierWasActivated:(id)arg1;

@end

