/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentDyskinesiaUnlikely:(float)arg3 percentDyskinesiaLikely:(float)arg4 ;
-(float)percentUnlikely;
-(float)percentLikely;
-(id)initWithParkinsonsResult:(const ParkinsonsResult*)arg1 ;
@end

