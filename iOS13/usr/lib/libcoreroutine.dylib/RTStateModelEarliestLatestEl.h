/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTStateModelEarliestLatestEl : NSObject <NSSecureCoding> {

	double _earliestEl_s;
	double _latestEl_s;

}

@property (assign,nonatomic) double earliestEl_s;              //@synthesize earliestEl_s=_earliestEl_s - In the implementation block
@property (assign,nonatomic) double latestEl_s;                //@synthesize latestEl_s=_latestEl_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEarliest:(double)arg1 andLatest:(double)arg2 ;
-(double)earliestEl_s;
-(double)latestEl_s;
-(void)setEarliestEl_s:(double)arg1 ;
-(void)setLatestEl_s:(double)arg1 ;
@end

