/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents;

@interface CalDAVOfficeHour : NSObject <NSSecureCoding> {

	BOOL _enabled;
	NSDateComponents* _startDate;
	NSDateComponents* _endDate;

}

@property (assign,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSDateComponents * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)officeHoursFromICS:(id)arg1 ;
+(id)icsFromOfficeHours:(id)arg1 ;
+(id)officeHoursFromData:(id)arg1 ;
+(id)dataFromOfficeHours:(id)arg1 ;
-(BOOL)enabled;
-(NSDateComponents *)endDate;
-(void)setStartDate:(NSDateComponents *)arg1 ;
-(NSDateComponents *)startDate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDateComponents *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

