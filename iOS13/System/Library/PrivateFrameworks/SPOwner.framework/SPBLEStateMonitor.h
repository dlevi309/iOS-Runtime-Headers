/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/


@protocol SPBLEStateMonitorDelegate;
@interface SPBLEStateMonitor : NSObject {

	unsigned long long _bleState;
	id<SPBLEStateMonitorDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long bleState;                                //@synthesize bleState=_bleState - In the implementation block
@property (assign,nonatomic,__weak) id<SPBLEStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SPBLEStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<SPBLEStateMonitorDelegate>)arg1 ;
-(void)startMonitoring;
-(void)_updateBLEStatus;
-(unsigned long long)bleState;
-(void)notifyDelegate:(unsigned long long)arg1 ;
-(void)setBleState:(unsigned long long)arg1 ;
@end

