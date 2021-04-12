/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents, NSDate, NSCalendar;

@interface _UIDatePickerCalendarDateComponent : NSObject <NSCopying> {

	NSDateComponents* _components;
	NSDate* _date;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSDateComponents * components;              //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar; 
+(unsigned long long)representedCalendarUnits;
+(id)inlineDescriptionForComponents:(id)arg1 ;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 ;
-(NSCalendar *)calendar;
-(NSDateComponents *)components;
-(id)description;
-(unsigned long long)hash;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

