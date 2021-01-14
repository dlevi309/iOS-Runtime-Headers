/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPCalendar : NSObject <NSSecureCoding, NSCopying> {

	NSString* _calendarIdentifier;
	NSString* _title;
	CGColorRef _color;

}

@property (nonatomic,readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) CGColorRef color;                           //@synthesize color=_color - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(CGColorRef)color;
-(NSString *)calendarIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCalendarIdentifier:(id)arg1 title:(id)arg2 color:(CGColorRef)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEKCalendar:(id)arg1 internPool:(id)arg2 ;
-(BOOL)isEqualToCalendar:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

