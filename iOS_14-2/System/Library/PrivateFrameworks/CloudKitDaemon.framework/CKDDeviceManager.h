/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSObject, NSMutableDictionary;

@interface CKDDeviceManager : NSObject {

	BOOL _useLegacyKeychain;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _deviceIDsByContainerIdentifierByContainerEnvironment;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceIDsByContainerIdentifierByContainerEnvironment;              //@synthesize deviceIDsByContainerIdentifierByContainerEnvironment=_deviceIDsByContainerIdentifierByContainerEnvironment - In the implementation block
@property (assign,nonatomic) BOOL useLegacyKeychain;                                                                  //@synthesize useLegacyKeychain=_useLegacyKeychain - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)deviceIdentifierForContext:(id)arg1 ;
-(NSMutableDictionary *)deviceIDsByContainerIdentifierByContainerEnvironment;
-(id)_serviceForContext:(id)arg1 ;
-(id)_perServicelookupKeyForContext:(id)arg1 ;
-(BOOL)useLegacyKeychain;
-(void)_saveDeviceIdentifierToDefaults:(id)arg1 forContext:(id)arg2 ;
-(CFDictionaryRef)createQueryForDeviceIdentifierInContext:(id)arg1 ;
-(id)deviceIdentifierForContext:(id)arg1 skipInMemoryCache:(BOOL)arg2 createIfNecessary:(BOOL)arg3 ;
-(id)deviceIDsByContainerIdentifierInContainerEnvironment:(long long)arg1 ;
-(id)_savedDeviceIdentifierForContext:(id)arg1 ;
-(void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2 ;
-(void)_deleteDeviceIdentifierForContext:(id)arg1 ;
-(void)setUseLegacyKeychain:(BOOL)arg1 ;
-(void)setDeviceIDsByContainerIdentifierByContainerEnvironment:(NSMutableDictionary *)arg1 ;
@end

