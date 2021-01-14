/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)disableAccount:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(BOOL)active;
-(BOOL)disableService:(id)arg1 ;
-(id)init;
-(BOOL)_disableAV;
-(BOOL)accountIsEnabled:(id)arg1 ;
-(BOOL)forceWhitelistForAccount:(id)arg1 ;
-(id)whitelistForService:(id)arg1 ;
-(BOOL)_forceChatLogging;
-(NSMutableDictionary *)_parentalControls;
-(BOOL)accountHasWhitelist:(id)arg1 ;
-(id)whitelistForAccount:(id)arg1 ;
-(void)_updateParentalSettings;
-(BOOL)disableAV;
-(BOOL)okToConnectAccount:(id)arg1 ;
-(BOOL)shouldPostNotifications;
-(BOOL)forceWhitelistForService:(id)arg1 ;
-(void)_managedPrefsNotification:(id)arg1 ;
-(void)setShouldPostNotifications:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)forceChatLogging;
@end

