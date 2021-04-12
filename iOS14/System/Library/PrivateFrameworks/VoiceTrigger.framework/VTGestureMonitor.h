/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol VTGestureMonitorDelegate;
@interface VTGestureMonitor : NSObject {

	id<VTGestureMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VTGestureMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultGestureMonitor;
-(void)startObserving;
-(id<VTGestureMonitorDelegate>)delegate;
-(void)setDelegate:(id<VTGestureMonitorDelegate>)arg1 ;
@end

