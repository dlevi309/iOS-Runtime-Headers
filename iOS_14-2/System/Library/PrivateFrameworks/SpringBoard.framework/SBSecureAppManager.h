/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)_applicationSceneEntityForAction:(id)arg1 ;
-(id)init;
-(void)addLockScreenContentAction:(id)arg1 ;
-(BOOL)hasSecureApp;
-(NSMutableDictionary *)secureAppActions;
-(void)_addSecureAppAction:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id)newApplicationSceneEntityForCurrentSecureApp;
-(void)removeObserver:(id)arg1 ;
-(BOOL)hasSecureAppOfType:(unsigned long long)arg1 ;
-(id)secureAppAction;
-(NSMutableArray *)remoteAlertActions;
-(void)_addRemoteAlertLockScreenContentAction:(id)arg1 ;
-(void)setSecureAppActions:(NSMutableDictionary *)arg1 ;
-(BOOL)hasWakeDestinaton;
-(void)setRemoteAlertActions:(NSMutableArray *)arg1 ;
-(id)_applicationForAction:(id)arg1 ;
-(SBWakeDestination *)wakeDestinaton;
-(void)_enumerateSecureAppActionsOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateSecureAppActionsByPriorityUsingBlock:(/*^block*/id)arg1 ;
@end

