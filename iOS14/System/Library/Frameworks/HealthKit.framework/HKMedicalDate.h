/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface HKMedicalDate : NSObject <NSSecureCoding, NSCopying> {

	long long _form;
	NSString* _originalTimeZoneString;
	NSDate* _underlyingDate;

}

@property (nonatomic,copy,readonly) NSDate * underlyingDate;                        //@synthesize underlyingDate=_underlyingDate - In the implementation block
@property (nonatomic,readonly) long long form;                                      //@synthesize form=_form - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalTimeZoneString;              //@synthesize originalTimeZoneString=_originalTimeZoneString - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateForUTC; 
+(BOOL)supportsSecureCoding;
+(BOOL)_validForm:(long long)arg1 ;
+(id)referenceCalendar;
+(unsigned long long)_calendarUnitForForm:(long long)arg1 ;
+(id)_medicalDateFromComponents:(id)arg1 originalTimeZoneString:(id)arg2 form:(long long)arg3 error:(out id*)arg4 ;
+(id)_adjustDate:(id)arg1 calendar:(id)arg2 form:(long long)arg3 ;
+(id)_descriptionForForm:(long long)arg1 ;
+(id)referenceCalendarWithLocalTimezone;
+(id)medicalDateWithYear:(long long)arg1 error:(out id*)arg2 ;
+(id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 error:(out id*)arg3 ;
+(id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 error:(out id*)arg4 ;
+(id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 originalTimeZoneString:(id)arg7 error:(out id*)arg8 ;
+(id)_medicalDateWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3 ;
-(long long)form;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)dateForUTC;
-(NSDate *)underlyingDate;
-(NSString *)originalTimeZoneString;
-(id)_initWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3 ;
-(id)adjustedDateForCalendar:(id)arg1 ;
-(BOOL)isCompatibleWithMedicalDateForm:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

