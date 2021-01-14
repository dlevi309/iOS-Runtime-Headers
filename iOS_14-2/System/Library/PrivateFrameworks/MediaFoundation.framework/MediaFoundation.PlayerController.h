/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
*/

#import <libobjc.A.dylib/MFStateDumpable.h>
#import <libobjc.A.dylib/MFResettable.h>
#import <libobjc.A.dylib/MFAudioSessionControlling.h>

@class NSDictionary;

@interface MediaFoundation.PlayerController : _UKNOWN_SUPERCLASS_ <MFStateDumpable, MFResettable, MFAudioSessionControlling> {

	 delegate;
	 setQueueBehavior;
	 currentItemTransition;
	 player;
	 audioSession;
	 audioSessionConfiguration;
	 videoPlayerViewController;
	 queue;
	 fsm;
	 playerObserver;
	 playerSubscription;
	 systemObserver;
	 systemSubscription;
	 videoPlayerBehavior;
	 userEventsMonitor;
	 reporter;
	 leaseController;
	 lastUserEvent;
	 previousItemID;
	 seekToTimeCompletedEvent;
	 itemAtDeath;
	 timeAtDeath;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(NSDictionary *)stateDictionary;
-(void)reset;
-(BOOL)setAudioSessionActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)updateAudioSessionWithConfiguration:(id)arg1 ;
@end

