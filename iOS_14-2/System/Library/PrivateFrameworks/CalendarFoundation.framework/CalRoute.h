/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding> {

	CalLocation* _start;
	CalLocation* _end;
	double _duration;
	NSString* _route;

}

@property (retain) CalLocation * start;              //@synthesize start=_start - In the implementation block
@property (retain) CalLocation * end;                //@synthesize end=_end - In the implementation block
@property (assign) double duration;                  //@synthesize duration=_duration - In the implementation block
@property (copy) NSString * route;                   //@synthesize route=_route - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRoute:(NSString *)arg1 ;
-(CalLocation *)end;
-(void)setDuration:(double)arg1 ;
-(NSString *)route;
-(CalLocation *)start;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setEnd:(CalLocation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)setStart:(CalLocation *)arg1 ;
@end

