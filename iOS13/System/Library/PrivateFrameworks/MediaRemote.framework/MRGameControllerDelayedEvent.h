/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@interface MRGameControllerDelayedEvent : NSObject {

	unsigned long long _lastDownEvent;
	/*^block*/id _sendEventBlock;

}

@property (assign,nonatomic) unsigned long long lastDownEvent;              //@synthesize lastDownEvent=_lastDownEvent - In the implementation block
@property (nonatomic,copy) id sendEventBlock;                               //@synthesize sendEventBlock=_sendEventBlock - In the implementation block
-(void)send;
-(id)sendEventBlock;
-(void)setLastDownEvent:(unsigned long long)arg1 ;
-(unsigned long long)lastDownEvent;
-(void)setSendEventBlock:(id)arg1 ;
@end

