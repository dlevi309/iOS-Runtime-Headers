/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class CNCache;

@interface CNAutocompleteStoreQueryContext : NSObject {

	CNCache* _directoryServerReuseCache;
	CNCache* _calendarServerReuseCache;

}

@property (readonly) CNCache * directoryServerReuseCache;              //@synthesize directoryServerReuseCache=_directoryServerReuseCache - In the implementation block
@property (readonly) CNCache * calendarServerReuseCache;               //@synthesize calendarServerReuseCache=_calendarServerReuseCache - In the implementation block
+(id)cacheBoundaryStrategies;
-(id)init;
-(CNCache *)directoryServerReuseCache;
-(CNCache *)calendarServerReuseCache;
@end

