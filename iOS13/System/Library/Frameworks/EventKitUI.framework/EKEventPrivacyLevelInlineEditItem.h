/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventEditItem.h>

@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {

	BOOL _originalSwitchState;
	BOOL _currentSwitchState;

}
-(id)footerTitle;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isInline;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)forceTableReloadOnSave;
-(double)footerHeightForWidth:(double)arg1 ;
-(void)_switchChanged:(id)arg1 ;
@end

