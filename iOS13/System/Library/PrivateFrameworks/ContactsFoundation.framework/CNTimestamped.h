/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNTimestamped : NSObject {

	id _value;
	double _timestamp;

}

@property (nonatomic,readonly) id value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(/*^block*/id)wrapTransformWithScheduler:(id)arg1 ;
+(id)timestampedWithValue:(id)arg1 timestamp:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)value;
-(double)timestamp;
-(id)initWithValue:(id)arg1 timestamp:(double)arg2 ;
@end

