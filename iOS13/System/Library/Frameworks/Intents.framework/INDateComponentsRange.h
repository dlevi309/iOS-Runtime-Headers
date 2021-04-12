/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INDateComponentsRangeExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, INRecurrenceRule, NSString, NSNumber, NSDateInterval, NSDate;

@interface INDateComponentsRange : NSObject <INDateComponentsRangeExport, NSCopying, NSSecureCoding> {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _endDateComponents;
	INRecurrenceRule* _recurrenceRule;
	NSString* _userInput;
	NSNumber* _allDay;

}

@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSString * userInput;                                //@synthesize userInput=_userInput - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * allDay;                                   //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * endDateComponents;                //@synthesize endDateComponents=_endDateComponents - In the implementation block
@property (nonatomic,copy,readonly) INRecurrenceRule * recurrenceRule;                   //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDateInterval *)dateInterval;
-(id)_dictionaryRepresentation;
-(NSString *)userInput;
-(id)_userInput;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(NSNumber *)allDay;
-(NSDateComponents *)startDateComponents;
-(NSDateComponents *)endDateComponents;
-(INRecurrenceRule *)recurrenceRule;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 recurrenceRule:(id)arg3 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 onCalendar:(id)arg3 inTimeZone:(id)arg4 ;
-(id)initWithDateInterval:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3 ;
-(id)initWithDate:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3 ;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 recurrenceRule:(id)arg3 userInput:(id)arg4 allDay:(id)arg5 ;
-(id)initWithEKRecurrenceRule:(id)arg1 ;
-(id)EKRecurrenceRule;
@end

