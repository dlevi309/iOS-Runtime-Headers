/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_validate;
-(void)_endSession;
-(NSDate *)overrideDate;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(void)_startSessionWithDate:(id)arg1 ;
-(id)_sessionCacheKey;
-(long long)_updateFrequency;
@end

