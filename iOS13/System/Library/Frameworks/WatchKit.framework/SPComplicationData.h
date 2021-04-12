/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)timeToLive;
-(void)setTimeToLive:(double)arg1 ;
@end

