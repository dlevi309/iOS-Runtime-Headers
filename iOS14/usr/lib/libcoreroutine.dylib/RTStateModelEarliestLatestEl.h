/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLatestEl_s:(double)arg1 ;
-(id)initWithEarliest:(double)arg1 andLatest:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEarliestEl_s:(double)arg1 ;
-(double)latestEl_s;
-(id)initWithCoder:(id)arg1 ;
-(double)earliestEl_s;
@end

