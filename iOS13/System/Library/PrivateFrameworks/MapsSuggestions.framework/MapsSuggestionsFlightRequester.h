/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsFlightRequester.h>

@protocol MapsSuggestionsFlightRequester <MapsSuggestionsObject>
@required
-(BOOL)requestFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 departureDate:(id)arg3 handler:(/*^block*/id)arg4;

@end


@class PARSession, NSString;

@interface MapsSuggestionsFlightRequester : NSObject <MapsSuggestionsFlightRequester> {

	PARSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(NSString *)uniqueName;
-(BOOL)requestFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 departureDate:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

