/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSError, NSUUID, NSProgress, ASDProgress;

@interface ASDApp : NSObject <NSCopying, NSSecureCoding> {

	NSString* _artistName;
	NSString* _bundleID;
	NSString* _bundlePath;
	NSString* _bundleShortVersion;
	NSString* _bundleVersion;
	NSString* _localizedName;
	long long _storeExternalVersionID;
	NSString* _storeCohort;
	NSNumber* _storeFront;
	long long _storeItemID;
	long long _downloaderDSID;
	long long _familyID;
	long long _purchaserDSID;
	NSError* _installError;
	NSUUID* _installID;
	NSProgress* _progress;
	NSString* _updateBuyParams;
	long long _watchApplicationMode;
	long long _extensions;
	long long _status;
	ASDProgress* _remoteProgress;

}

@property (retain) NSString * artistName;                                              //@synthesize artistName=_artistName - In the implementation block
@property (retain) NSString * bundlePath;                                              //@synthesize bundlePath=_bundlePath - In the implementation block
@property (retain) NSString * bundleShortVersion;                                      //@synthesize bundleShortVersion=_bundleShortVersion - In the implementation block
@property (retain) NSString * bundleVersion;                                           //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSError * installError;                                             //@synthesize installError=_installError - In the implementation block
@property (retain) NSString * localizedName;                                           //@synthesize localizedName=_localizedName - In the implementation block
@property (assign) long long storeExternalVersionID;                                   //@synthesize storeExternalVersionID=_storeExternalVersionID - In the implementation block
@property (assign) long long storeItemID;                                              //@synthesize storeItemID=_storeItemID - In the implementation block
@property (retain) NSString * storeCohort;                                             //@synthesize storeCohort=_storeCohort - In the implementation block
@property (retain) NSNumber * storeFront;                                              //@synthesize storeFront=_storeFront - In the implementation block
@property (assign) long long downloaderDSID;                                           //@synthesize downloaderDSID=_downloaderDSID - In the implementation block
@property (assign) long long familyID;                                                 //@synthesize familyID=_familyID - In the implementation block
@property (assign) long long purchaserDSID;                                            //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (assign) long long extensions;                                               //@synthesize extensions=_extensions - In the implementation block
@property (assign) long long status;                                                   //@synthesize status=_status - In the implementation block
@property (retain) NSProgress * progress;                                              //@synthesize progress=_progress - In the implementation block
@property (retain) ASDProgress * remoteProgress;                                       //@synthesize remoteProgress=_remoteProgress - In the implementation block
@property (retain) NSString * updateBuyParams;                                         //@synthesize updateBuyParams=_updateBuyParams - In the implementation block
@property (assign) long long watchApplicationMode;                                     //@synthesize watchApplicationMode=_watchApplicationMode - In the implementation block
@property (readonly) NSString * bundleID;                                              //@synthesize bundleID=_bundleID - In the implementation block
@property (getter=hasMessagesExtension,readonly) BOOL messasgesExtension; 
@property (getter=isAppClip,readonly) BOOL appClip; 
@property (getter=isArcadeOpenable,readonly) BOOL arcadeOpenable; 
@property (getter=isBetaApp,readonly) BOOL betaApp; 
@property (getter=isFamilyShared,readonly) BOOL familyShared; 
@property (getter=isInstalled,readonly) BOOL installed; 
@property (getter=isLaunchProhibited,readonly) BOOL launchProhibited; 
@property (getter=isOcelot,readonly) BOOL ocelot; 
@property (getter=isOpenable,readonly) BOOL openable; 
@property (getter=isPlaceholder,readonly) BOOL placeholder; 
@property (getter=isStoreApp,readonly) BOOL storeApp; 
@property (getter=isSystemApp,readonly) BOOL systemApp; 
@property (getter=isUpdateAvailable,readonly) BOOL updateAvailable; 
@property (getter=isWrapped,readonly) BOOL wrapped; 
@property (readonly) NSUUID * installID;                                               //@synthesize installID=_installID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(void)setStoreItemID:(long long)arg1 ;
-(BOOL)isAppClip;
-(long long)storeItemID;
-(BOOL)isPlaceholder;
-(NSProgress *)progress;
-(NSString *)bundlePath;
-(NSNumber *)storeFront;
-(BOOL)isUpdateAvailable;
-(long long)storeExternalVersionID;
-(void)setArtistName:(NSString *)arg1 ;
-(long long)familyID;
-(void)setStoreFront:(NSNumber *)arg1 ;
-(BOOL)isOcelot;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInstalled;
-(NSString *)artistName;
-(void)setStoreCohort:(NSString *)arg1 ;
-(BOOL)isOpenable;
-(BOOL)isArcadeOpenable;
-(NSString *)bundleVersion;
-(void)setInstallError:(NSError *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(long long)extensions;
-(BOOL)isSystemApp;
-(long long)purchaserDSID;
-(NSError *)installError;
-(BOOL)hasMessagesExtension;
-(id)description;
-(void)setPurchaserDSID:(long long)arg1 ;
-(void)setExtensions:(long long)arg1 ;
-(ASDProgress *)remoteProgress;
-(void)setBundleVersion:(NSString *)arg1 ;
-(long long)downloaderDSID;
-(void)setRemoteProgress:(ASDProgress *)arg1 ;
-(void)setUpdateBuyParams:(NSString *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSString *)bundleID;
-(long long)watchApplicationMode;
-(BOOL)isBetaApp;
-(NSString *)bundleShortVersion;
-(BOOL)isWrapped;
-(void)setFamilyID:(long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)updateBuyParams;
-(id)initWithCoder:(id)arg1 ;
-(void)setStoreExternalVersionID:(long long)arg1 ;
-(BOOL)isStoreApp;
-(void)setStatus:(long long)arg1 ;
-(void)setBundleShortVersion:(NSString *)arg1 ;
-(NSString *)storeCohort;
-(BOOL)isEqualToApp:(id)arg1 ;
-(BOOL)isLaunchProhibited;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFamilyShared;
-(NSUUID *)installID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDownloaderDSID:(long long)arg1 ;
-(long long)status;
-(void)setWatchApplicationMode:(long long)arg1 ;
@end

