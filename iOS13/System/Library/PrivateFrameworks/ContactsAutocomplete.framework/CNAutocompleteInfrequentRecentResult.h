/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <ContactsAutocomplete/CNAutocompleteRecentResult.h>

@interface CNAutocompleteInfrequentRecentResult : CNAutocompleteRecentResult {

	unsigned long long _dateCount;

}

@property (assign) unsigned long long dateCount;              //@synthesize dateCount=_dateCount - In the implementation block
+(unsigned long long)category;
+(id)comparators;
+(id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(unsigned long long)arg4 date:(id)arg5 ;
+(id)groupResultWithDisplayName:(id)arg1 dateCount:(unsigned long long)arg2 date:(id)arg3 ;
-(unsigned long long)dateCount;
-(void)setDateCount:(unsigned long long)arg1 ;
@end

