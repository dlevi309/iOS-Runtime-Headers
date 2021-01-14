/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>
#import <MapsSuggestions/MapsSuggestionsFilter.h>

@class NSString;

@interface MapsSuggestionsServerSideFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {

	BOOL _enabledEntryTypeUnknown;
	BOOL _enabledEntryTypeHome;
	BOOL _enabledEntryTypeWork;
	BOOL _enabledEntryTypeCalendarEvent;
	BOOL _enabledEntryTypeFrequentLocation;
	BOOL _enabledEntryTypeRecentHistory;
	BOOL _enabledEntryTypeOldPreYukonFavorite;
	BOOL _enabledEntryTypeParkedCar;
	BOOL _enabledEntryTypeRestaurantReservation;
	BOOL _enabledEntryTypeRidesharing;
	BOOL _enabledEntryTypeCarPlayLowEnergy;
	BOOL _enabledEntryTypeResumeRoute;
	BOOL _enabledEntryTypeAppConnection;
	BOOL _enabledEntryTypeHotel;
	BOOL _enabledEntryTypeCarRental;
	BOOL _enabledEntryTypeTravelFlight;
	BOOL _enabledEntryTypeTicketedEvent;
	BOOL _enabledEntryTypePortrait;
	BOOL _enabledEntryTypeUserPlace;
	BOOL _enabledEntryTypeSchool;
	BOOL _enabledEntryTypeVehicleSetup;
	BOOL _enabledEntryTypeRatingRequest;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabled;
-(id)init;
-(BOOL)shouldKeepEntry:(id)arg1 ;
@end

