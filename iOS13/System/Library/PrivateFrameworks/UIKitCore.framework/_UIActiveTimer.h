/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class CADisplayLink;

@interface _UIActiveTimer : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _updateHandler;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(void)invalidate;
-(BOOL)isComplete;
-(void)_tick:(id)arg1 ;
-(id)initWithDuration:(double)arg1 updateHandler:(/*^block*/id)arg2 ;
@end

