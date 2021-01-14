/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)refresh;
-(void)stop;
-(BOOL)wait;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(double)timeoutValue;
-(void)setTimeoutValue:(double)arg1 ;
-(id)initWithTimeoutValue:(double)arg1 ;
-(NSCondition *)refreshTimeoutCondition;
-(BOOL)_waitForTimeInterval:(double)arg1 ;
-(void)setRefreshTimeoutCondition:(NSCondition *)arg1 ;
@end

