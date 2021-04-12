/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol _SBIdleTimerGlobalSettingMonitorDelegate;
@class NSString;

@interface _SBIdleTimerGlobalSettingMonitor : NSObject {

	NSString* _label;
	id<_SBIdleTimerGlobalSettingMonitorDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * label;                                                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<_SBIdleTimerGlobalSettingMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_SBIdleTimerGlobalSettingMonitorDelegate>)delegate;
-(void)setDelegate:(id<_SBIdleTimerGlobalSettingMonitorDelegate>)arg1 ;
-(NSString *)label;
-(id)formattedValue;
-(BOOL)_updateCache;
-(id)initWithLabel:(id)arg1 delegate:(id)arg2 ;
@end

