/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<AVTDeviceResourceConsumerDelegate> consumerDelegate;              //@synthesize consumerDelegate=_consumerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unthrottle;
-(void)throttle;
-(AVTView *)avtView;
-(id<AVTDeviceResourceConsumerDelegate>)consumerDelegate;
-(void)releaseRenderingResourceForEstimatedDuration:(double)arg1 ;
-(void)setConsumerDelegate:(id<AVTDeviceResourceConsumerDelegate>)arg1 ;
-(id<AVTUILogger>)logger;
-(BOOL)throttling;
-(id)initWithAVTView:(id)arg1 environment:(id)arg2 ;
-(NSTimer *)autoUnthrottlingTimer;
-(void)cancelAutoUnthrottling;
-(void)applyThrottling;
-(void)setAutoUnthrottlingTimer:(NSTimer *)arg1 ;
-(void)scheduleAutoUnthrottlingAfterDelay:(double)arg1 ;
-(void)setThrottling:(BOOL)arg1 ;
-(void)autoUnthrottle;
-(void)throttleForDelay:(double)arg1 ;
-(void)dealloc;
@end

