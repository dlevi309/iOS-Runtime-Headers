/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

