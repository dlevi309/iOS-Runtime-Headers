/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebLowPowerModeObserver : NSObject {

	BOOL _isLowPowerModeEnabled;
	LowPowerModeNotifier* _notifier;

}

@property (assign,nonatomic) LowPowerModeNotifier* notifier;              //@synthesize notifier=_notifier - In the implementation block
@property (nonatomic,readonly) BOOL isLowPowerModeEnabled;                //@synthesize isLowPowerModeEnabled=_isLowPowerModeEnabled - In the implementation block
-(void)dealloc;
-(BOOL)isLowPowerModeEnabled;
-(void)_didReceiveLowPowerModeChange;
-(id)initWithNotifier:(LowPowerModeNotifier*)arg1 ;
-(LowPowerModeNotifier*)notifier;
-(void)setNotifier:(LowPowerModeNotifier*)arg1 ;
@end

