/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@interface PRTargetEstimate : NSObject {

	BOOL _isVerticalResolved;
	float _uncertainty;
	float _weight;
	double _timestamp;
	unsigned long long _verticalState;
	 _vector;

}

@property (nonatomic,readonly) double timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly)  vector;                                       //@synthesize vector=_vector - In the implementation block
@property (nonatomic,readonly) float uncertainty;                             //@synthesize uncertainty=_uncertainty - In the implementation block
@property (nonatomic,readonly) float weight;                                  //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL isVerticalResolved;                       //@synthesize isVerticalResolved=_isVerticalResolved - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalState;              //@synthesize verticalState=_verticalState - In the implementation block
+(id)targetEstimateWithTime:(double)arg1 vector:(float)arg2 uncertainty:(float)arg3 weight:(BOOL)arg4 isResolved:(unsigned long long)arg5 ;
-(double)timestamp;
-(float)weight;
-()vector;
-(float)uncertainty;
-(unsigned long long)verticalState;
-(id)initWithTime:(double)arg1 vector:(float)arg2 uncertainty:(float)arg3 weight:(BOOL)arg4 isResolved:(unsigned long long)arg5 ;
-(BOOL)isVerticalResolved;
@end

