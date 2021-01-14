/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_updateCache;
-(id)formattedValue;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 delegate:(id)arg2 ;
@end

