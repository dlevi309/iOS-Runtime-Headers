/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <ContactsAutocomplete/CNAutocompleteResult.h>

@class NSDate;

@interface CNAutocompleteRecentResult : CNAutocompleteResult {

	NSDate* _date;
	BOOL _matchesSendingAddress;
	BOOL _completesChosenGroup;

}

@property (readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (assign) BOOL matchesSendingAddress;              //@synthesize matchesSendingAddress=_matchesSendingAddress - In the implementation block
@property (assign) BOOL completesChosenGroup;               //@synthesize completesChosenGroup=_completesChosenGroup - In the implementation block
+(id)comparators;
+(id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4 ;
+(id)groupResultWithDisplayName:(id)arg1 date:(id)arg2 ;
-(NSDate *)date;
-(BOOL)matchesSendingAddress;
-(BOOL)completesChosenGroup;
-(void)setMatchesSendingAddress:(BOOL)arg1 ;
-(void)setCompletesChosenGroup:(BOOL)arg1 ;
@end

