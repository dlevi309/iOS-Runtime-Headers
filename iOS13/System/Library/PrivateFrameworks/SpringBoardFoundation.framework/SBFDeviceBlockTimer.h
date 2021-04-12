/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@protocol SBFBlockStatusProvider;
@class NSString, NSTimer;

@interface SBFDeviceBlockTimer : NSObject {

	BOOL _enabled;
	/*^block*/id _handler;
	NSString* _titleText;
	NSString* _subtitleText;
	id<SBFBlockStatusProvider> _blockStatusProvider;
	NSTimer* _timer;

}

@property (nonatomic,copy) NSString * titleText;                                                                          //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                                                       //@synthesize subtitleText=_subtitleText - In the implementation block
@property (setter=_setBlockStatusProvider:,nonatomic,retain) id<SBFBlockStatusProvider> blockStatusProvider;              //@synthesize blockStatusProvider=_blockStatusProvider - In the implementation block
@property (setter=_setTimer:,nonatomic,retain) NSTimer * timer;                                                           //@synthesize timer=_timer - In the implementation block
@property (assign,setter=_setEnabled:,getter=_isEnabled,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) id handler;                                                                                    //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)start;
-(BOOL)_isEnabled;
-(NSTimer *)timer;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)_clearTimer;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)_setBlockStatusProvider:(id)arg1 ;
-(void)_scheduleTimerIfNecessaryAndUpdateState;
-(id)initWithDeviceBlockStatusProvider:(id)arg1 ;
-(id<SBFBlockStatusProvider>)blockStatusProvider;
-(void)_setTimer:(id)arg1 ;
@end

