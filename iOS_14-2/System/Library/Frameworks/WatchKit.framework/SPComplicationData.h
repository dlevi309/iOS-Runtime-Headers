/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface SPComplicationData : NSObject <NSSecureCoding> {

	NSDate* _timestamp;
	double _timeToLive;

}

@property (nonatomic,retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double timeToLive;               //@synthesize timeToLive=_timeToLive - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTimeToLive:(double)arg1 ;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeToLive;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

