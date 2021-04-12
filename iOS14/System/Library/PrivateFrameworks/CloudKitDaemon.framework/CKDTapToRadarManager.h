/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)alertQueue;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(void)setAlertQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUserDefaults *)userDefaults;
-(id)_init;
-(void)triggerTapToRadarWithRequest:(id)arg1 ;
-(NSMutableDictionary *)lastPromptDateByMessageHash;
-(id)_hashForMessage:(id)arg1 ;
-(id)_lastPromptDateForMessage:(id)arg1 ;
-(void)_notePromptAttemptForMessage:(id)arg1 ;
-(void)_launchTTRWithRequest:(id)arg1 ;
-(void)_lockedTriggerTapToRadarWithRequest:(id)arg1 ;
-(void)setLastPromptDateByMessageHash:(NSMutableDictionary *)arg1 ;
@end

