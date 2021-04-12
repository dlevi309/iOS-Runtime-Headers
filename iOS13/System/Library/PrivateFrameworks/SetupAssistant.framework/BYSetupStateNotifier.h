/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface BYSetupStateNotifier : NSObject {

	BOOL _shouldRelaunchSetup;
	int _stateNotificationToken;
	int _shouldRemainAliveNotificationToken;
	int _exclusiveNotificationToken;
	unsigned long long _state;
	NSMutableArray* _generalStateNotificationBlocks;
	NSMutableDictionary* _specificStateNotificationBlocks;
	NSMutableArray* _exclusiveNotificationBlocks;
	NSMutableArray* _relaunchStateNotificationBlocks;
	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (assign,nonatomic) unsigned long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * generalStateNotificationBlocks;                    //@synthesize generalStateNotificationBlocks=_generalStateNotificationBlocks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * specificStateNotificationBlocks;              //@synthesize specificStateNotificationBlocks=_specificStateNotificationBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * exclusiveNotificationBlocks;                       //@synthesize exclusiveNotificationBlocks=_exclusiveNotificationBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * relaunchStateNotificationBlocks;                   //@synthesize relaunchStateNotificationBlocks=_relaunchStateNotificationBlocks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;                     //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldRelaunchSetup;                                           //@synthesize shouldRelaunchSetup=_shouldRelaunchSetup - In the implementation block
@property (assign,nonatomic) int stateNotificationToken;                                         //@synthesize stateNotificationToken=_stateNotificationToken - In the implementation block
@property (assign,nonatomic) int shouldRemainAliveNotificationToken;                             //@synthesize shouldRemainAliveNotificationToken=_shouldRemainAliveNotificationToken - In the implementation block
@property (assign,nonatomic) int exclusiveNotificationToken;                                     //@synthesize exclusiveNotificationToken=_exclusiveNotificationToken - In the implementation block
+(id)sharedNotifier;
-(id)init;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)currentState;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)notifySetupShouldRemainAlive;
-(void)_endObservingState;
-(void)_beginObservingState;
-(NSMutableArray *)generalStateNotificationBlocks;
-(NSMutableDictionary *)specificStateNotificationBlocks;
-(NSMutableArray *)exclusiveNotificationBlocks;
-(NSMutableArray *)relaunchStateNotificationBlocks;
-(BOOL)shouldRelaunchSetup;
-(int)stateNotificationToken;
-(int)shouldRemainAliveNotificationToken;
-(void)setShouldRelaunchSetup:(BOOL)arg1 ;
-(void)_stateChangedTo:(unsigned long long)arg1 ;
-(void)_noLongerExclusiveNotificationFired;
-(void)_shouldRemainAliveNotificationFired;
-(int)exclusiveNotificationToken;
-(void)setStateNotificationToken:(int)arg1 ;
-(void)setExclusiveNotificationToken:(int)arg1 ;
-(void)addStateChangeObserver:(/*^block*/id)arg1 ;
-(void)addStateCompletionObserver:(/*^block*/id)arg1 forState:(unsigned long long)arg2 ;
-(void)addObserverWhenSetupIsNoLongerExclusiveWithNotificationBlock:(/*^block*/id)arg1 ;
-(void)addRelaunchStateChangeObserver:(/*^block*/id)arg1 ;
-(void)notifyStateChangedTo:(unsigned long long)arg1 ;
-(void)setGeneralStateNotificationBlocks:(NSMutableArray *)arg1 ;
-(void)setSpecificStateNotificationBlocks:(NSMutableDictionary *)arg1 ;
-(void)setExclusiveNotificationBlocks:(NSMutableArray *)arg1 ;
-(void)setRelaunchStateNotificationBlocks:(NSMutableArray *)arg1 ;
-(void)setShouldRemainAliveNotificationToken:(int)arg1 ;
@end

