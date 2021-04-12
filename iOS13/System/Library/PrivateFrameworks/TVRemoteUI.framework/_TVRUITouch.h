/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@interface _TVRUITouch : NSObject {

	double _timestamp;
	long long _phase;
	long long _fingerIndex;

}

@property (nonatomic,readonly) double timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long phase;                    //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) long long fingerIndex;              //@synthesize fingerIndex=_fingerIndex - In the implementation block
-(double)timestamp;
-(long long)phase;
-(id)initWithTimestamp:(double)arg1 touchPhase:(long long)arg2 fingerIndex:(long long)arg3 ;
-(long long)fingerIndex;
@end

