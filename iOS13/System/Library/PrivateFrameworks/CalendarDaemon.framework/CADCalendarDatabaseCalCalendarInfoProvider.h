/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADCalCalendarInfoProvider.h>

@protocol CADDatabaseProvider;
@interface CADCalendarDatabaseCalCalendarInfoProvider : NSObject <CADCalCalendarInfoProvider> {

	id<CADDatabaseProvider> _databaseProvider;

}

@property (nonatomic,__weak,readonly) id<CADDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
-(id)initWithDatabaseProvider:(id)arg1 ;
-(id<CADDatabaseProvider>)databaseProvider;
-(id)calendarRowIDsInStoreWithRowID:(int)arg1 ;
-(int)suggestionsCalendarRowID;
-(int)naturalLanguageSuggestionsCalendarRowID;
@end

