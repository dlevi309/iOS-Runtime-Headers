/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsFlightRequester.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeFlightRequester : NSObject <MapsSuggestionsFlightRequester> {

	ReadWriteQueue _rwQueue;
	NSArray* _configuredFlights;
	NSError* _configuredError;
	unsigned long long _calledRequestFlights;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)uniqueName;
-(void)configureError:(id)arg1 ;
-(char)requestFlightsWithFullFlightNumber:(id)arg1 departureDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)configureFlights:(id)arg1 ;
-(unsigned long long)calledRequestFlights;
@end

