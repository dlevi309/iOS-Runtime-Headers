/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/MediaLibrary-iOS.feature/MediaLibrary-iOS
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
-(long long)intValue;
-(void)dealloc;
-(id)description;
-(NSString *)key;
-(BOOL)boolValue;
-(void)update;
-(long long)defaultValue;
-(BOOL)exists;
-(NSString *)notificationName;
-(NSString *)applicationID;
-(void)_readLoggingPrefs;
-(void)_registerForLoggingPrefsNotification;
-(id)initWithKey:(id)arg1 applicationID:(id)arg2 notification:(id)arg3 defaultValue:(long long)arg4 invalidValue:(long long)arg5 ;
-(long long)invalidValue;
@end

