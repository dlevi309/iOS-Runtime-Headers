/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(NSString *)title;
-(CGColorRef)color;
-(id)initWithCalendarIdentifier:(id)arg1 title:(id)arg2 color:(CGColorRef)arg3 ;
-(id)initWithEKCalendar:(id)arg1 ;
-(BOOL)isEqualToCalendar:(id)arg1 ;
@end

