/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXCorrelatedEventsDateBuffer : NSObject {

	double _bufferSeconds;
	long long _bufferType;

}

@property (nonatomic,readonly) double bufferSeconds;              //@synthesize bufferSeconds=_bufferSeconds - In the implementation block
@property (nonatomic,readonly) long long bufferType;              //@synthesize bufferType=_bufferType - In the implementation block
-(id)initWithBufferSeconds:(double)arg1 andBufferType:(long long)arg2 ;
-(id)startDateWithBufferForEvent:(id)arg1 ;
-(id)endDateWithBufferForEvent:(id)arg1 ;
-(double)bufferSeconds;
-(long long)bufferType;
@end

