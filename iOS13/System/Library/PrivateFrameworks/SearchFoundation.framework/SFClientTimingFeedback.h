/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFClientTimingFeedback : SFFeedback {

	NSString* _input;
	NSString* _eventName;
	unsigned long long _nanosecondInterval;

}

@property (nonatomic,copy) NSString * input;                           //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * eventName;                       //@synthesize eventName=_eventName - In the implementation block
@property (assign) unsigned long long nanosecondInterval;              //@synthesize nanosecondInterval=_nanosecondInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)input;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(id)initWithEvent:(id)arg1 timeInterval:(unsigned long long)arg2 queryId:(unsigned long long)arg3 ;
-(unsigned long long)nanosecondInterval;
-(void)setNanosecondInterval:(unsigned long long)arg1 ;
@end

