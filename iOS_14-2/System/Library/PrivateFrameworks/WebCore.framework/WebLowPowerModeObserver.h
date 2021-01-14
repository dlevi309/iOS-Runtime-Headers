/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebLowPowerModeObserver : NSObject {

	BOOL _isLowPowerModeEnabled;
	LowPowerModeNotifier* _notifier;

}

@property (assign,nonatomic) LowPowerModeNotifier* notifier;              //@synthesize notifier=_notifier - In the implementation block
@property (nonatomic,readonly) BOOL isLowPowerModeEnabled;                //@synthesize isLowPowerModeEnabled=_isLowPowerModeEnabled - In the implementation block
-(LowPowerModeNotifier*)notifier;
-(void)setNotifier:(LowPowerModeNotifier*)arg1 ;
-(void)_didReceiveLowPowerModeChange;
-(BOOL)isLowPowerModeEnabled;
-(id)initWithNotifier:(LowPowerModeNotifier*)arg1 ;
-(void)dealloc;
@end

