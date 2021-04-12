/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate, ASEvent;

@interface ASRecurrence : ASItem <NSSecureCoding> {

	NSNumber* _type;
	NSNumber* _interval;
	NSNumber* _dayOfWeek;
	NSNumber* _dayOfMonth;
	NSNumber* _weekOfMonth;
	NSNumber* _monthOfYear;
	NSDate* _until;
	NSNumber* _occurrences;
	NSNumber* _firstDayOfWeek;
	NSNumber* _calendarType;
	ASEvent* _parentEvent;

}

@property (nonatomic,retain) NSNumber * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSNumber * interval;                       //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSNumber * dayOfWeek;                      //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (nonatomic,retain) NSNumber * dayOfMonth;                     //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (nonatomic,retain) NSNumber * weekOfMonth;                    //@synthesize weekOfMonth=_weekOfMonth - In the implementation block
@property (nonatomic,retain) NSNumber * monthOfYear;                    //@synthesize monthOfYear=_monthOfYear - In the implementation block
@property (nonatomic,retain) NSDate * until;                            //@synthesize until=_until - In the implementation block
@property (nonatomic,retain) NSNumber * occurrences;                    //@synthesize occurrences=_occurrences - In the implementation block
@property (nonatomic,retain) NSNumber * firstDayOfWeek;                 //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (nonatomic,retain) NSNumber * calendarType;                   //@synthesize calendarType=_calendarType - In the implementation block
@property (assign,nonatomic,__weak) ASEvent * parentEvent;              //@synthesize parentEvent=_parentEvent - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)type;
-(void)setType:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)weekOfMonth;
-(void)setWeekOfMonth:(NSNumber *)arg1 ;
-(NSNumber *)monthOfYear;
-(NSNumber *)dayOfMonth;
-(NSNumber *)dayOfWeek;
-(NSNumber *)interval;
-(void)setInterval:(NSNumber *)arg1 ;
-(void)setDayOfWeek:(NSNumber *)arg1 ;
-(NSNumber *)calendarType;
-(void)setDayOfMonth:(NSNumber *)arg1 ;
-(void)setOccurrences:(NSNumber *)arg1 ;
-(NSNumber *)occurrences;
-(NSDate *)until;
-(void)setUntil:(NSDate *)arg1 ;
-(void)setCalendarType:(NSNumber *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(BOOL)_loadAttributesFromCalRecurrence:(void*)arg1 parentStartDate:(id)arg2 parentItem:(id)arg3 useFloatingTimeForAllDayEvents:(BOOL)arg4 ;
-(void)setMonthOfYear:(NSNumber *)arg1 ;
-(void)setUntilString:(id)arg1 ;
-(void)setFirstDayOfWeek:(NSNumber *)arg1 ;
-(NSNumber *)firstDayOfWeek;
-(BOOL)_requiresParentEvent;
-(id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1 ;
-(id)_transformedUntilDateForActiveSync:(id)arg1 ;
-(id)initWithCalRecurrence:(void*)arg1 parentEvent:(id)arg2 useFloatingTimeForAllDayEvents:(BOOL)arg3 ;
-(void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 useFloatingTimeForAllDayEvents:(BOOL)arg5 ;
-(void)setParentEvent:(ASEvent *)arg1 ;
-(ASEvent *)parentEvent;
-(void*)_newRecurrenceWithParentStartDate:(id)arg1 useFloatingTimeForAllDayEvents:(BOOL)arg2 ;
@end

