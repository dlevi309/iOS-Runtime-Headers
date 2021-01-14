/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsContactsConnector.h>

@class MapsSuggestionsContacts, NSString;

@interface MapsSuggestionsRealContactsConnector : NSObject <MapsSuggestionsContactsConnector> {

	MapsSuggestionsContacts* _delegate;

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
-(void)receivedNotification:(id)arg1 ;
-(void)stopListeningForChanges;
@end

