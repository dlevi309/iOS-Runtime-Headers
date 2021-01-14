/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSArray;

@interface SGRealtimeSuggestionsTuple : NSObject {

	NSArray* _contacts;
	NSArray* _events;
	NSArray* _reminders;
	NSArray* _deliveries;
	NSArray* _invalidatedIdentifiers;

}

@property (retain) NSArray * contacts;                            //@synthesize contacts=_contacts - In the implementation block
@property (retain) NSArray * events;                              //@synthesize events=_events - In the implementation block
@property (retain) NSArray * reminders;                           //@synthesize reminders=_reminders - In the implementation block
@property (retain) NSArray * deliveries;                          //@synthesize deliveries=_deliveries - In the implementation block
@property (retain) NSArray * invalidatedIdentifiers;              //@synthesize invalidatedIdentifiers=_invalidatedIdentifiers - In the implementation block
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(void)setEvents:(NSArray *)arg1 ;
-(void)setReminders:(NSArray *)arg1 ;
-(unsigned long long)suggestionsCount;
-(NSArray *)events;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)reminders;
-(void)setDeliveries:(NSArray *)arg1 ;
-(NSArray *)deliveries;
-(id)combinedSuggestions;
-(NSArray *)invalidatedIdentifiers;
-(void)setInvalidatedIdentifiers:(NSArray *)arg1 ;
@end

