/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class AXAccessQueueTimer;

@interface AXPostConnectionTask : NSObject {

	BOOL _didTimeout;
	/*^block*/id _postConnectionBlock;
	AXAccessQueueTimer* _timeoutTimer;

}

@property (nonatomic,copy) id postConnectionBlock;                           //@synthesize postConnectionBlock=_postConnectionBlock - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL didTimeout;                                //@synthesize didTimeout=_didTimeout - In the implementation block
-(void)_performTask;
-(AXAccessQueueTimer *)timeoutTimer;
-(void)setPostConnectionBlock:(id)arg1 ;
-(void)setTimeoutTimer:(AXAccessQueueTimer *)arg1 ;
-(void)setDidTimeout:(BOOL)arg1 ;
-(id)postConnectionBlock;
-(BOOL)didTimeout;
-(id)initWithConnectBlock:(/*^block*/id)arg1 timeout:(double)arg2 accessQueue:(id)arg3 ;
-(void)performTask;
@end

