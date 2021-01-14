/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class CADisplayLink;

@interface _UIActiveTimer : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _updateHandler;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(BOOL)isComplete;
-(id)initWithDuration:(double)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)_tick:(id)arg1 ;
@end

