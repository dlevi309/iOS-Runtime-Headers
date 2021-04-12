/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>
#import <libobjc.A.dylib/EKEventDetailPredictedLocationCellDelegate.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EKCalendarItemLocationInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailPredictedLocationCellDelegate, EKCalendarItemInlineEditItem> {

	NSMutableArray* _locationsAndCells;
	BOOL _sourceSupportsAvailabilityRequests;
	NSMutableDictionary* _conferenceRoomInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_locationPlaceholder;
+(id)conferenceRoomNameForLocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)_makeCell:(unsigned long long)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)isSaveable;
-(id)searchStringForEventAutocomplete;
-(BOOL)isInline;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)forceTableReloadOnSave;
-(void)_clearButtonTapped:(id)arg1 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2 ;
-(void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1 ;
-(void)_updateAvailabilityInformation;
-(BOOL)_showSuggestedLocation:(id)arg1 ;
-(BOOL)isSubitemAtIndexSaveable:(unsigned long long)arg1 ;
-(BOOL)_showConferenceLocation:(id)arg1 ;
-(void)_clearLocation:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_refreshConferenceRoomCell:(id)arg1 ;
-(id)_clearButtonView:(unsigned long long)arg1 ;
-(void)_updateAuxiliaryLocationsForNewLocation:(id)arg1 ;
-(void)_updateCalendarItemLocation;
-(id)participantForConferenceRoomName:(id)arg1 ;
-(id)locationCellPairForCell:(id)arg1 ;
-(void)_updateLocation:(id)arg1 withStructuredLocation:(id)arg2 ;
-(void)_updateLocation:(id)arg1 withConferenceRoom:(id)arg2 ;
@end

