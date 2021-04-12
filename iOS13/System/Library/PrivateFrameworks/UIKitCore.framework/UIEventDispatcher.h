/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIEventFetcherSink.h>

@class UIEventEnvironment, UIEventFetcher;

@interface UIEventDispatcher : NSObject <UIEventFetcherSink> {

	UIEventEnvironment* _mainEnvironment;
	UIEventFetcher* _eventFetcher;
	CFRunLoopSourceRef _handleEventQueueRunLoopSource;
	CFRunLoopSourceRef _collectHIDEventsRunLoopSource;
	CFRunLoopRef _runLoop;

}

@property (nonatomic,retain) UIEventEnvironment * mainEnvironment;              //@synthesize mainEnvironment=_mainEnvironment - In the implementation block
-(void)dealloc;
-(id)initWithApplication:(id)arg1 ;
-(UIEventEnvironment *)mainEnvironment;
-(void)_installEventRunLoopSources:(CFRunLoopRef)arg1 ;
-(void)eventFetcherDidReceiveEvents:(id)arg1 ;
-(void)signalNextDelivery;
-(void)setMainEnvironment:(UIEventEnvironment *)arg1 ;
@end

