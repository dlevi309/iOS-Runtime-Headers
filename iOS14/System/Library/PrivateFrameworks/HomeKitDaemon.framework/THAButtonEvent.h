/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class THAButton;

@interface THAButtonEvent : NSObject {

	THAButton* _button;
	unsigned long long _state;
	double _timestamp;

}

@property (nonatomic,retain) THAButton * button;                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
-(id)serialize;
-(THAButton *)button;
-(double)timestamp;
-(void)setButton:(THAButton *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setTimestamp:(double)arg1 ;
@end

