/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIMotionEffectEventConsumer;
@interface _UIMotionEffectEventProvider : NSObject {

	id<_UIMotionEffectEventConsumer> _consumer;

}

@property (assign) id<_UIMotionEffectEventConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)stopGeneratingEvents;
-(double)slowUpdateIntervalForLogs;
-(id)currentEvent;
-(double)fastUpdateIntervalForLogs;
-(BOOL)shouldLogEvents;
-(id<_UIMotionEffectEventConsumer>)consumer;
-(void)setSlowUpdatesEnabled:(BOOL)arg1 ;
-(void)startGeneratingEvents;
-(void)setConsumer:(id<_UIMotionEffectEventConsumer>)arg1 ;
-(BOOL)wantsSynchronizedUpdates;
@end

