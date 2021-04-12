/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setTimer:(id)arg1 ;
-(NSTimer *)timer;
-(void)setHandler:(id)arg1 ;
-(void)start;
-(NSString *)titleText;
-(void)_setBlockStatusProvider:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)_scheduleTimerIfNecessaryAndUpdateState;
-(id)initWithDeviceBlockStatusProvider:(id)arg1 ;
-(id<SBFBlockStatusProvider>)blockStatusProvider;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(BOOL)_isEnabled;
-(void)_clearTimer;
-(void)invalidate;
-(id)handler;
-(void)dealloc;
@end

