/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol OS_dispatch_queue;
@class NSArray, NSMapTable, NSObject;

@interface VCDaemonXPCEventHandler : NSObject {

	NSArray* _streams;
	NSMapTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMapTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * streams;                          //@synthesize streams=_streams - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)resume;
-(void)removeObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 ;
-(NSMapTable *)observers;
-(NSArray *)streams;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 ;
-(id)initWithStreams:(id)arg1 ;
-(id)initWithStreams:(id)arg1 queue:(id)arg2 ;
-(void)handleEvent:(id)arg1 fromStream:(id)arg2 ;
@end

