/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)timestamp;
-(id)description;
-(id)initWithValue:(id)arg1 timestamp:(double)arg2 ;
-(unsigned long long)hash;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

