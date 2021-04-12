/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class EKParticipant, NSString, NSOperationQueue;

@interface EKEventAttendeesEditItem : EKEventEditItem {

	EKParticipant* _selfOrganizer;
	NSString* _searchAccountID;
	NSOperationQueue* _availabilityQueue;
	long long _numberOfConflicts;

}
+(id)_noneInviteesLocalizedString;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(id)injectableViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)forceTableReloadOnSave;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)forceRefreshInviteesItemOnSave;
-(id)attendeesWithoutSelfOrganizerAndLocations;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(void)dealloc;
@end

