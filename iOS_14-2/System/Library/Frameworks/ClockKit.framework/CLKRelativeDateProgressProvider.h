/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKProgressProvider.h>

@class NSDate;

@interface CLKRelativeDateProgressProvider : CLKProgressProvider {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relativeDateProgressProviderWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)_validate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(double)_progressFractionForNow:(id)arg1 ;
-(BOOL)_needsUpdates;
@end

