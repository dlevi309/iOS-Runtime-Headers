/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class NSArray;

@interface EKEventAvailabilityEditItem : EKEventEditItem {

	long long _availability;
	unsigned long long _supportedAvailabilities;
	NSArray* _choices;
	unsigned long long _availabilityIndexInChoices;

}
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
@end

