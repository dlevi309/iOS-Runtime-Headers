/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSMutableDictionary;

@interface CKDTapToRadarManager : NSObject {

	NSObject*<OS_dispatch_queue> _alertQueue;
	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _lastPromptDateByMessageHash;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> alertQueue;                        //@synthesize alertQueue=_alertQueue - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                  //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastPromptDateByMessageHash;              //@synthesize lastPromptDateByMessageHash=_lastPromptDateByMessageHash - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)triggerTapToRadarWithRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)alertQueue;
-(NSMutableDictionary *)lastPromptDateByMessageHash;
-(id)_hashForMessage:(id)arg1 ;
-(id)_lastPromptDateForMessage:(id)arg1 ;
-(void)_notePromptAttemptForMessage:(id)arg1 ;
-(void)_launchTTRWithRequest:(id)arg1 ;
-(void)_lockedTriggerTapToRadarWithRequest:(id)arg1 ;
-(void)setAlertQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLastPromptDateByMessageHash:(NSMutableDictionary *)arg1 ;
@end

