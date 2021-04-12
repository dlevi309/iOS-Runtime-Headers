/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableDictionary, NSMutableArray, NSHashTable, SBWakeDestination;

@interface SBSecureAppManager : NSObject {

	NSMutableDictionary* _secureAppActions;
	NSMutableArray* _remoteAlertActions;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableDictionary * secureAppActions;              //@synthesize secureAppActions=_secureAppActions - In the implementation block
@property (nonatomic,retain) NSMutableArray * remoteAlertActions;                 //@synthesize remoteAlertActions=_remoteAlertActions - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL hasSecureApp; 
@property (nonatomic,readonly) BOOL hasWakeDestinaton; 
@property (nonatomic,readonly) SBWakeDestination * wakeDestinaton; 
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(BOOL)hasSecureAppOfType:(unsigned long long)arg1 ;
-(id)secureAppAction;
-(BOOL)hasSecureApp;
-(id)newApplicationSceneEntityForCurrentSecureApp;
-(void)addLockScreenContentAction:(id)arg1 ;
-(void)_addSecureAppAction:(id)arg1 ;
-(void)_addRemoteAlertLockScreenContentAction:(id)arg1 ;
-(void)_enumerateSecureAppActionsByPriorityUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecureAppActionsOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_applicationSceneEntityForAction:(id)arg1 ;
-(id)_applicationForAction:(id)arg1 ;
-(BOOL)hasWakeDestinaton;
-(SBWakeDestination *)wakeDestinaton;
-(NSMutableDictionary *)secureAppActions;
-(void)setSecureAppActions:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)remoteAlertActions;
-(void)setRemoteAlertActions:(NSMutableArray *)arg1 ;
@end

