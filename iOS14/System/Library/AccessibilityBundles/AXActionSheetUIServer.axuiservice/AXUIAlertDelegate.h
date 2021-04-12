/*
* Generated on Thursday, January 14, 2021 at 2:29:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

