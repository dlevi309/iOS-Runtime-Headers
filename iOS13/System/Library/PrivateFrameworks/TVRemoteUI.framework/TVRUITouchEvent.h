/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


#import <TVRemoteUI/TVRemoteUI-Structs.h>
@interface TVRUITouchEvent : NSObject {

	double _timestamp;
	long long _touchPhase;
	long long _fingerIndex;
	CGPoint _digitizerLocation;

}

@property (nonatomic,readonly) CGPoint digitizerLocation;              //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long touchPhase;                   //@synthesize touchPhase=_touchPhase - In the implementation block
@property (nonatomic,readonly) long long fingerIndex;                  //@synthesize fingerIndex=_fingerIndex - In the implementation block
-(double)timestamp;
-(CGPoint)digitizerLocation;
-(long long)fingerIndex;
-(id)initWithTimestamp:(double)arg1 touchPhase:(long long)arg2 fingerIndex:(long long)arg3 digitizerLocation:(CGPoint)arg4 ;
-(long long)touchPhase;
@end

