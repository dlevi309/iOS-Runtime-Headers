/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTimeTextProvider.h>

@class NSDateComponents, NSString, NSDate;

@interface CLKCurrentTimeTextProvider : CLKTimeTextProvider {

	unsigned long long _calendarUnits;
	NSDateComponents* _sessionComponents;
	NSString* _sessionCacheKey;
	BOOL _sessionInProgress;
	NSDate* _overrideDate;

}

@property (nonatomic,copy) NSDate * overrideDate;              //@synthesize overrideDate=_overrideDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithTimeZone:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_validate;
-(void)_endSession;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)overrideDate;
-(void)_startSessionWithDate:(id)arg1 ;
-(long long)_updateFrequency;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionCacheKey;
@end

