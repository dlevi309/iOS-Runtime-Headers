/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TISKEvent.h>

@interface TISKTimestampEvent : TISKEvent {

	double _timestamp;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)touchDownTimestamp;
-(double)touchUpTimestamp;
-(BOOL)isMissingATouch;
-(id)init:(int)arg1 timestamp:(double)arg2 order:(long long)arg3 ;
@end

