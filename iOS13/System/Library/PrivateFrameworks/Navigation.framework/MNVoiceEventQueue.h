/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNVoiceEventQueueDelegate;
@class NSMutableArray;

@interface MNVoiceEventQueue : NSObject {

	NSMutableArray* _queue;
	id<MNVoiceEventQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNVoiceEventQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<MNVoiceEventQueueDelegate>)delegate;
-(void)setDelegate:(id<MNVoiceEventQueueDelegate>)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)removeAllEvents;
-(void)_removeEventsMatching:(id)arg1 includeEventToMatch:(BOOL)arg2 ;
-(BOOL)hasAnotherEvent;
-(id)dequeueNextEvent;
@end

