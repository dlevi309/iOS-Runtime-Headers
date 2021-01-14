/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFScreenOnObserverDelegate, OS_dispatch_queue;
@class NSObject;

@interface WFScreenOnObserver : NSObject {

	BOOL _screenOn;
	int _token;
	id<WFScreenOnObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) int token;                                                   //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL screenOn;                                             //@synthesize screenOn=_screenOn - In the implementation block
@property (assign,nonatomic,__weak) id<WFScreenOnObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFScreenOnObserverDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<WFScreenOnObserverDelegate>)arg1 ;
-(void)setToken:(int)arg1 ;
-(void)stateChanged:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)token;
-(BOOL)screenOn;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

