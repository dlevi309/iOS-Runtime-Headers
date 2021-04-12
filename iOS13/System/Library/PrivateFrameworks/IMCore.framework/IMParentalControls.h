/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableDictionary;

@interface IMParentalControls : NSObject {

	BOOL _shouldPostNotifications;
	BOOL _active;
	BOOL _disableAV;
	BOOL _forceChatLogging;
	NSMutableDictionary* _parentalControls;

}

@property (nonatomic,readonly) NSMutableDictionary * _parentalControls;              //@synthesize parentalControls=_parentalControls - In the implementation block
@property (nonatomic,readonly) BOOL _disableAV;                                      //@synthesize disableAV=_disableAV - In the implementation block
@property (nonatomic,readonly) BOOL _forceChatLogging;                               //@synthesize forceChatLogging=_forceChatLogging - In the implementation block
@property (nonatomic,readonly) BOOL active;                                          //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL disableAV; 
@property (nonatomic,readonly) BOOL forceChatLogging; 
@property (assign,nonatomic) BOOL shouldPostNotifications;                           //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
+(id)objectForKey:(id)arg1 ;
+(id)standardControls;
-(id)init;
-(void)dealloc;
-(BOOL)active;
-(BOOL)disableAccount:(id)arg1 ;
-(BOOL)disableService:(id)arg1 ;
-(BOOL)okToConnectAccount:(id)arg1 ;
-(void)setShouldPostNotifications:(BOOL)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(BOOL)disableAV;
-(BOOL)forceChatLogging;
-(id)whitelistForService:(id)arg1 ;
-(BOOL)forceWhitelistForService:(id)arg1 ;
-(BOOL)accountIsEnabled:(id)arg1 ;
-(id)whitelistForAccount:(id)arg1 ;
-(BOOL)forceWhitelistForAccount:(id)arg1 ;
-(BOOL)accountHasWhitelist:(id)arg1 ;
-(BOOL)shouldPostNotifications;
-(NSMutableDictionary *)_parentalControls;
-(BOOL)_disableAV;
-(BOOL)_forceChatLogging;
@end

