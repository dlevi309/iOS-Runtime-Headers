/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem {

	NSMutableSet* _recurrences;

}

@property (nonatomic,retain) NSMutableSet * recurrences;              //@synthesize recurrences=_recurrences - In the implementation block
-(NSMutableSet *)recurrences;
-(void)setRecurrences:(NSMutableSet *)arg1 ;
-(id)copyParseRules;
-(void)addRecurrence:(id)arg1 ;
@end

