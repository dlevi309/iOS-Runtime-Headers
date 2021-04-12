/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableDictionary, NSString;

@interface SGContactPipelineHelper : NSObject {

	NSMutableDictionary* _lengthsCounts;
	unsigned long long _phonesSeenInContacts;
	NSString* _mostCommonCountryCode;
	opaque_pthread_mutex_t _helperLock;

}
+(id)sharedInstance;
+(id)normalizedDigits:(id)arg1 ;
+(id)findContactsForPerson:(id)arg1 fetchingKeys:(id)arg2 ;
+(id)findContactsForDetailType:(unsigned long long)arg1 andValue:(id)arg2 ;
+(BOOL)personExistsInContacts:(id)arg1 name:(id)arg2 handle:(id)arg3 ;
-(id)init;
-(BOOL)numberMatchesContactsForm:(id)arg1 amongContactsWithIdentifiers:(id)arg2 ;
-(BOOL)numberMatchesContactsForm:(id)arg1 ;
-(void)dealloc;
@end

