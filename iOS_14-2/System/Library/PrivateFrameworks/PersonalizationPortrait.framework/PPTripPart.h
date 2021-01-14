/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate, NSString, CLPlacemark;

@interface PPTripPart : NSObject <NSSecureCoding> {

	unsigned char _tripMode;
	NSArray* _eventIdentifiers;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _startLocation;
	NSString* _endLocation;
	CLPlacemark* _mainLocation;
	NSString* _fallbackLocationString;

}

@property (nonatomic,readonly) NSArray * eventIdentifiers;                   //@synthesize eventIdentifiers=_eventIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSString * startLocation;                     //@synthesize startLocation=_startLocation - In the implementation block
@property (nonatomic,readonly) NSString * endLocation;                       //@synthesize endLocation=_endLocation - In the implementation block
@property (nonatomic,retain) CLPlacemark * mainLocation;                     //@synthesize mainLocation=_mainLocation - In the implementation block
@property (nonatomic,retain) NSString * fallbackLocationString;              //@synthesize fallbackLocationString=_fallbackLocationString - In the implementation block
@property (nonatomic,readonly) unsigned char tripMode;                       //@synthesize tripMode=_tripMode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionForTripMode:(unsigned char)arg1 ;
-(NSArray *)eventIdentifiers;
-(NSDate *)endDate;
-(NSString *)endLocation;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)startLocation;
-(unsigned char)tripMode;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)destinationString;
-(NSString *)fallbackLocationString;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventIdentifiers:(id)arg3 mode:(unsigned char)arg4 location:(id)arg5 fallbackLocationString:(id)arg6 ;
-(CLPlacemark *)mainLocation;
-(void)setMainLocation:(CLPlacemark *)arg1 ;
-(void)setFallbackLocationString:(NSString *)arg1 ;
@end

