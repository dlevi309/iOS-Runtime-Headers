/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface WFEKCalendarDescriptor : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allCalendars;
	NSString* _calendarTitle;
	NSString* _calendarIdentifier;
	NSNumber* _calendarRGBAValue;

}

@property (nonatomic,readonly) BOOL allCalendars;                               //@synthesize allCalendars=_allCalendars - In the implementation block
@property (nonatomic,copy,readonly) NSString * calendarTitle;                   //@synthesize calendarTitle=_calendarTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * calendarRGBAValue;                    //@synthesize calendarRGBAValue=_calendarRGBAValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)calendarIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)allCalendars;
-(NSString *)calendarTitle;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAllCalendars;
-(id)initWithCalendarTitle:(id)arg1 identifier:(id)arg2 RGBAValue:(id)arg3 ;
-(id)matchingRemindersListsFromArray:(id)arg1 ;
-(id)matchingCalendarsFromArray:(id)arg1 ;
-(NSNumber *)calendarRGBAValue;
@end

