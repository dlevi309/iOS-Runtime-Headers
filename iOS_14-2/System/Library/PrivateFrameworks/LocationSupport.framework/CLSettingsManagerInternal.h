/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLIntersiloService.h>
#import <libobjc.A.dylib/CLSettingsManagerProtocol.h>

@class NSMutableSet, NSMutableDictionary, NSString;

@interface CLSettingsManagerInternal : CLIntersiloService <CLSettingsManagerProtocol> {

	NSMutableSet* _clients;
	NSMutableDictionary* _settingsDictionary;

}

@property (retain) NSMutableSet * clients;                                //@synthesize clients=_clients - In the implementation block
@property (retain) NSMutableDictionary * settingsDictionary;              //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (assign,nonatomic) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(id)getSilo;
-(NSMutableSet *)clients;
-(void)flush;
-(void)refresh;
-(NSMutableDictionary *)settingsDictionary;
-(void)beginService;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)endService;
-(id)syncgetSettingsAndRegisterForUpdates:(R)arg1 :(id)arg2 ;
-(void)unregisterForUpdates:(R)arg1 :(id)arg2 ;
-(id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(R)arg3 :(id)arg4 ;
-(void)setSettingsDictionary:(NSMutableDictionary *)arg1 ;
-(void)updateClientsWithDictionary:(id)arg1 ;
@end

