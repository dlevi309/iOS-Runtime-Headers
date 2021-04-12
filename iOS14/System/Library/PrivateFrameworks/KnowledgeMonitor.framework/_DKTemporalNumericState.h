/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate;

@interface _DKTemporalNumericState : NSObject <NSSecureCoding> {

	NSNumber* _state;
	NSDate* _timestamp;

}

@property (retain) NSNumber * state;                //@synthesize state=_state - In the implementation block
@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)timestamp;
-(id)initWithState:(id)arg1 timestamp:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setState:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)state;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

