/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol VTGestureMonitorDelegate;
@interface VTGestureMonitor : NSObject {

	id<VTGestureMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VTGestureMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultGestureMonitor;
-(id<VTGestureMonitorDelegate>)delegate;
-(void)setDelegate:(id<VTGestureMonitorDelegate>)arg1 ;
-(void)startObserving;
@end

