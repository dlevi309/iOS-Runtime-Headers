/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <RemoteConfiguration/RemoteConfiguration-Structs.h>
#import <libobjc.A.dylib/RCSerializable.h>

@class NSArray, NSString, RCDeviceInfo, RCDebugOverrides, NSURL;

@interface RCConfigurationSettings : NSObject <RCSerializable> {

	BOOL _useBackgroundRefreshRate;
	NSArray* _requestInfos;
	NSString* _userID;
	NSString* _storefrontID;
	NSString* _bundleID;
	RCDeviceInfo* _deviceInfo;
	RCDebugOverrides* _debugOverrides;

}

@property (nonatomic,readonly) NSURL * fallbackURL; 
@property (nonatomic,readonly) NSArray * requestInfos;                         //@synthesize requestInfos=_requestInfos - In the implementation block
@property (nonatomic,copy,readonly) NSString * userID;                         //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontID;                   //@synthesize storefrontID=_storefrontID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) RCDeviceInfo * deviceInfo;                      //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) RCDebugOverrides * debugOverrides;              //@synthesize debugOverrides=_debugOverrides - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingKey; 
@property (nonatomic,readonly) BOOL useBackgroundRefreshRate;                  //@synthesize useBackgroundRefreshRate=_useBackgroundRefreshRate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(NSString *)userID;
-(id)dictionaryRepresentation;
-(NSString *)bundleID;
-(RCDeviceInfo *)deviceInfo;
-(NSString *)storefrontID;
-(id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8 ;
-(NSURL *)fallbackURL;
-(NSString *)loggingKey;
-(NSArray *)requestInfos;
-(RCDebugOverrides *)debugOverrides;
-(BOOL)useBackgroundRefreshRate;
-(id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8 useBackgroundRefreshRate:(BOOL)arg9 ;
-(id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 useBackgroundRefreshRate:(BOOL)arg7 ;
-(id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 ;
-(id)JSONRepresentation;
@end

