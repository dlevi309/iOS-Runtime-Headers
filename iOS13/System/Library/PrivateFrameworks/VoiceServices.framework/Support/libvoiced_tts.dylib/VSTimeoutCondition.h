/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class NSCondition;

@interface VSTimeoutCondition : NSObject {

	BOOL _shouldStop;
	double _timeoutValue;
	NSCondition* _refreshTimeoutCondition;

}

@property (nonatomic,retain) NSCondition * refreshTimeoutCondition;              //@synthesize refreshTimeoutCondition=_refreshTimeoutCondition - In the implementation block
@property (assign,nonatomic) BOOL shouldStop;                                    //@synthesize shouldStop=_shouldStop - In the implementation block
@property (assign,nonatomic) double timeoutValue;                                //@synthesize timeoutValue=_timeoutValue - In the implementation block
-(void)stop;
-(BOOL)wait;
-(void)refresh;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(void)setTimeoutValue:(double)arg1 ;
-(double)timeoutValue;
-(id)initWithTimeoutValue:(double)arg1 ;
-(NSCondition *)refreshTimeoutCondition;
-(BOOL)_waitForTimeInterval:(double)arg1 ;
-(void)setRefreshTimeoutCondition:(NSCondition *)arg1 ;
@end

