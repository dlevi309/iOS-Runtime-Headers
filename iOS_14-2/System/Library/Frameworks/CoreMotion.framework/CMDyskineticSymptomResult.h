/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CMDyskineticSymptomResult : NSObject <NSCopying, NSSecureCoding> {

	float _percentUnlikely;
	float _percentLikely;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) float percentUnlikely;                //@synthesize percentUnlikely=_percentUnlikely - In the implementation block
@property (nonatomic,readonly) float percentLikely;                  //@synthesize percentLikely=_percentLikely - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(float)percentUnlikely;
-(float)percentLikely;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentDyskinesiaUnlikely:(float)arg3 percentDyskinesiaLikely:(float)arg4 ;
-(id)initWithParkinsonsResult:(const ParkinsonsResult*)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

