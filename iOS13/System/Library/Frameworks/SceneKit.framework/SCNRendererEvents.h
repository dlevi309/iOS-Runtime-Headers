/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLEvent;
@interface SCNRendererEvents : NSObject {

	id<MTLEvent> _waitEvent;
	unsigned long long _waitFrame;
	id<MTLEvent> _signalEvent;
	unsigned long long _signalFrame;

}

@property (nonatomic,retain) id<MTLEvent> waitEvent;                      //@synthesize waitEvent=_waitEvent - In the implementation block
@property (assign,nonatomic) unsigned long long waitFrame;                //@synthesize waitFrame=_waitFrame - In the implementation block
@property (nonatomic,retain) id<MTLEvent> signalEvent;                    //@synthesize signalEvent=_signalEvent - In the implementation block
@property (assign,nonatomic) unsigned long long signalFrame;              //@synthesize signalFrame=_signalFrame - In the implementation block
-(void)dealloc;
-(void)waitBeforeSubmittingRender:(id)arg1 ;
-(void)signalAfterSubmittingRender:(id)arg1 ;
-(id<MTLEvent>)waitEvent;
-(void)setWaitEvent:(id<MTLEvent>)arg1 ;
-(unsigned long long)waitFrame;
-(void)setWaitFrame:(unsigned long long)arg1 ;
-(id<MTLEvent>)signalEvent;
-(void)setSignalEvent:(id<MTLEvent>)arg1 ;
-(unsigned long long)signalFrame;
-(void)setSignalFrame:(unsigned long long)arg1 ;
@end

