/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventEditItem.h>

@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {

	BOOL _originalSwitchState;
	BOOL _currentSwitchState;

}
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)forceTableReloadOnSave;
-(double)footerHeightForWidth:(double)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)isInline;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(id)footerTitle;
-(void)_switchChanged:(id)arg1 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
@end

