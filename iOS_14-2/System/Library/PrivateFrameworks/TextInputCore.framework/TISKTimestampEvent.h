/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

