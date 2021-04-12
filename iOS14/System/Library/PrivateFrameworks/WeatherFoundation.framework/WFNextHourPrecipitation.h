/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray, WFNextHourPrecipitationDescription;

@interface WFNextHourPrecipitation : NSObject <NSCopying> {

	NSDate* _readDate;
	NSDate* _startDate;
	NSDate* _expirationDate;
	NSArray* _minutes;
	NSArray* _precipitationDescriptions;
	NSArray* _conditions;

}

@property (nonatomic,copy,readonly) NSDate * readDate;                                               //@synthesize readDate=_readDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * minutes;                                               //@synthesize minutes=_minutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * precipitationDescriptions;                             //@synthesize precipitationDescriptions=_precipitationDescriptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * conditions;                                            //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) BOOL isRelevant; 
@property (nonatomic,readonly) WFNextHourPrecipitationDescription * currentDescription; 
@property (nonatomic,readonly) NSArray * activeMinutes; 
-(NSArray *)conditions;
-(NSArray *)minutes;
-(NSDate *)startDate;
-(NSDate *)readDate;
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithReadDate:(id)arg1 startDate:(id)arg2 expirationDate:(id)arg3 minutes:(id)arg4 conditions:(id)arg5 descriptions:(id)arg6 ;
-(BOOL)isRelevant;
-(BOOL)shouldUseActiveMinutesInNextHourPrecipitation;
-(NSArray *)activeMinutes;
-(WFNextHourPrecipitationDescription *)currentDescription;
-(NSArray *)precipitationDescriptions;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

