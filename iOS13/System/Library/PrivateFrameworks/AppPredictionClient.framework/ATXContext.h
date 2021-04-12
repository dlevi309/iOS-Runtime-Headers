/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSDateInterval;

@interface ATXContext : NSObject <NSSecureCoding> {

	CLLocation* _location;
	unsigned long long _contextType;
	NSDateInterval* _timeWindow;

}

@property (nonatomic,readonly) CLLocation * location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long contextType;              //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,readonly) NSDateInterval * timeWindow;                 //@synthesize timeWindow=_timeWindow - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultTimeWindowForContextType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocation *)location;
-(unsigned long long)contextType;
-(NSDateInterval *)timeWindow;
-(id)initWithContextType:(unsigned long long)arg1 location:(id)arg2 timeWindow:(id)arg3 ;
@end

