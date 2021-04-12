/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNVoiceEventQueueDelegate;
@class NSMutableArray;

@interface MNVoiceEventQueue : NSObject {

	NSMutableArray* _queue;
	id<MNVoiceEventQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNVoiceEventQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addEvent:(id)arg1 ;
-(id)init;
-(id<MNVoiceEventQueueDelegate>)delegate;
-(void)removeAllEvents;
-(void)setDelegate:(id<MNVoiceEventQueueDelegate>)arg1 ;
-(void)_removeEventsMatching:(id)arg1 includeEventToMatch:(BOOL)arg2 ;
-(BOOL)hasAnotherEvent;
-(id)dequeueNextEvent;
@end

