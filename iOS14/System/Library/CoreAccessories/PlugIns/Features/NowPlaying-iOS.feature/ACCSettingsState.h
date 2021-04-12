/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
*/


@class NSString;

@interface ACCSettingsState : NSObject {

	BOOL _boolValue;
	BOOL _exists;
	long long _defaultValue;
	long long _invalidValue;
	long long _intValue;
	NSString* _key;
	NSString* _applicationID;
	NSString* _notificationName;

}

@property (nonatomic,readonly) long long defaultValue;                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) long long invalidValue;                   //@synthesize invalidValue=_invalidValue - In the implementation block
@property (nonatomic,readonly) long long intValue;                       //@synthesize intValue=_intValue - In the implementation block
@property (nonatomic,readonly) BOOL boolValue;                           //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,readonly) BOOL exists;                              //@synthesize exists=_exists - In the implementation block
@property (nonatomic,readonly) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * applicationID;                 //@synthesize applicationID=_applicationID - In the implementation block
@property (nonatomic,readonly) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
-(NSString *)applicationID;
-(BOOL)boolValue;
-(long long)defaultValue;
-(BOOL)exists;
-(void)update;
-(id)description;
-(NSString *)key;
-(long long)intValue;
-(NSString *)notificationName;
-(void)dealloc;
-(id)initWithKey:(id)arg1 applicationID:(id)arg2 notification:(id)arg3 defaultValue:(long long)arg4 invalidValue:(long long)arg5 ;
-(void)_readLoggingPrefs;
-(void)_registerForLoggingPrefsNotification;
-(long long)invalidValue;
@end

