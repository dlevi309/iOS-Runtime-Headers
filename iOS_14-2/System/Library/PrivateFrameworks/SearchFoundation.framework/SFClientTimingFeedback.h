/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)input;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)eventName;
-(void)setInput:(NSString *)arg1 ;
-(unsigned long long)nanosecondInterval;
-(void)setNanosecondInterval:(unsigned long long)arg1 ;
-(void)setEventName:(NSString *)arg1 ;
-(id)initWithEvent:(id)arg1 timeInterval:(unsigned long long)arg2 queryId:(unsigned long long)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

