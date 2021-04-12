/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)forceRefreshInviteesItemOnSave;
-(BOOL)forceTableReloadOnSave;
-(id)injectableViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(id)attendeesWithoutSelfOrganizerAndLocations;
@end

