/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTDeviceResourceConsumer.h>

@protocol AVTDeviceResourceConsumerDelegate, AVTUILogger;
@class AVTView, NSTimer, NSString;

@interface AVTViewThrottler : NSObject <AVTDeviceResourceConsumer> {

	BOOL _throttling;
	id<AVTDeviceResourceConsumerDelegate> _consumerDelegate;
	AVTView* _avtView;
	id<AVTUILogger> _logger;
	NSTimer* _autoUnthrottlingTimer;

}

@property (nonatomic,readonly) AVTView * avtView;                                                        //@synthesize avtView=_avtView - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSTimer * autoUnthrottlingTimer;                                            //@synthesize autoUnthrottlingTimer=_autoUnthrottlingTimer - In the implementation block
@property (assign,nonatomic) BOOL throttling;                                                            //@synthesize throttling=_throttling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTDeviceResourceConsumerDelegate> consumerDelegate;              //@synthesize consumerDelegate=_consumerDelegate - In the implementation block
-(void)dealloc;
-(id<AVTUILogger>)logger;
-(AVTView *)avtView;
-(void)throttle;
-(void)unthrottle;
-(id<AVTDeviceResourceConsumerDelegate>)consumerDelegate;
-(void)releaseRenderingResourceForEstimatedDuration:(double)arg1 ;
-(void)setConsumerDelegate:(id<AVTDeviceResourceConsumerDelegate>)arg1 ;
-(id)initWithAVTView:(id)arg1 environment:(id)arg2 ;
-(NSTimer *)autoUnthrottlingTimer;
-(void)cancelAutoUnthrottling;
-(void)applyThrottling;
-(void)setAutoUnthrottlingTimer:(NSTimer *)arg1 ;
-(BOOL)throttling;
-(void)scheduleAutoUnthrottlingAfterDelay:(double)arg1 ;
-(void)setThrottling:(BOOL)arg1 ;
-(void)autoUnthrottle;
-(void)throttleForDelay:(double)arg1 ;
@end

