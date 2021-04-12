/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsContactsConnector.h>

@class MapsSuggestionsContacts, NSArray, NSMutableDictionary, NSError, NSString;

@interface MapsSuggestionsFakeContactsConnector : NSObject <MapsSuggestionsContactsConnector> {

	MapsSuggestionsContacts* _delegate;
	NSArray* _configuredPostalAddresses;
	NSMutableDictionary* _singleLineStringsPerPostalAddress;
	NSError* _configuredError;
	BOOL _isListening;
	unsigned long long _calledStartListeningForChanges;
	unsigned long long _calledStopListeningForChanges;
	unsigned long long _calledCrossPlatformUnifiedMeContactWithKeysToFetch;
	unsigned long long _calledSingleLineString;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startListeningForChanges;
-(NSString *)uniqueName;
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(id)singleLineStringFromPostalAddress:(id)arg1 addCountryName:(BOOL)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)configureError:(id)arg1 ;
-(void)stopListeningForChanges;
-(void)configureMeCardPostalAddresses:(id)arg1 ;
-(void)configureSingleLineString:(id)arg1 forPostalAddress:(id)arg2 ;
-(void)fireContactsDidUpdate;
-(unsigned long long)calledStopListeningForChanges;
-(unsigned long long)calledCrossPlatformUnifiedMeContactWithKeysToFetch;
-(unsigned long long)calledStartListeningForChanges;
-(unsigned long long)calledSingleLineString;
@end

