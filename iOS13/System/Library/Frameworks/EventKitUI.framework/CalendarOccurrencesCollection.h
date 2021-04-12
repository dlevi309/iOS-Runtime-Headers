/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CalendarOccurrencesCollection : NSObject <NSCopying> {

	NSArray* _occurrences;
	NSArray* _allDayOccurrences;
	NSArray* _timedOccurrences;

}

@property (nonatomic,readonly) NSArray * occurrences;                    //@synthesize occurrences=_occurrences - In the implementation block
@property (nonatomic,readonly) NSArray * allDayOccurrences;              //@synthesize allDayOccurrences=_allDayOccurrences - In the implementation block
@property (nonatomic,readonly) NSArray * timedOccurrences;               //@synthesize timedOccurrences=_timedOccurrences - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3 ;
-(NSArray *)allDayOccurrences;
-(NSArray *)timedOccurrences;
-(NSArray *)occurrences;
@end

