/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSError, NSUUID, NSProgress, ASDProgress;

@interface ASDApp : NSObject <NSCopying, NSSecureCoding> {

	BOOL _familyShared;
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
@property (getter=isArcadeOpenable,readonly) BOOL arcadeOpenable; 
@property (getter=isBetaApp,readonly) BOOL betaApp; 
@property (getter=isFamilyShared,readonly) BOOL familyShared;                          //@synthesize familyShared=_familyShared - In the implementation block
@property (getter=isInstalled,readonly) BOOL installed; 
@property (getter=isLaunchProhibited,readonly) BOOL launchProhibited; 
@property (getter=isOcelot,readonly) BOOL ocelot; 
@property (getter=isOpenable,readonly) BOOL openable; 
@property (getter=isPlaceholder,readonly) BOOL placeholder; 
@property (getter=isStoreApp,readonly) BOOL storeApp; 
@property (getter=isSystemApp,readonly) BOOL systemApp; 
@property (getter=isUpdateAvailable,readonly) BOOL updateAvailable; 
@property (readonly) NSError * installError;                                           //@synthesize installError=_installError - In the implementation block
@property (readonly) NSUUID * installID;                                               //@synthesize installID=_installID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundlePath;
-(NSProgress *)progress;
-(NSString *)localizedName;
-(long long)status;
-(BOOL)isInstalled;
-(NSString *)bundleID;
-(BOOL)isPlaceholder;
-(BOOL)isLaunchProhibited;
-(NSString *)bundleVersion;
-(BOOL)isBetaApp;
-(long long)purchaserDSID;
-(long long)downloaderDSID;
-(long long)familyID;
-(NSNumber *)storeFront;
-(void)setStatus:(long long)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(long long)extensions;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(void)setExtensions:(long long)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(long long)storeItemID;
-(BOOL)hasMessagesExtension;
-(void)setStoreItemID:(long long)arg1 ;
-(NSError *)installError;
-(void)setStoreCohort:(NSString *)arg1 ;
-(BOOL)isSystemApp;
-(void)setFamilyID:(long long)arg1 ;
-(NSString *)storeCohort;
-(void)setRemoteProgress:(ASDProgress *)arg1 ;
-(BOOL)isStoreApp;
-(ASDProgress *)remoteProgress;
-(void)setPurchaserDSID:(long long)arg1 ;
-(void)setStoreFront:(NSNumber *)arg1 ;
-(BOOL)isUpdateAvailable;
-(BOOL)isOcelot;
-(BOOL)isArcadeOpenable;
-(BOOL)isEqualToApp:(id)arg1 ;
-(BOOL)isOpenable;
-(NSString *)bundleShortVersion;
-(void)setBundleShortVersion:(NSString *)arg1 ;
-(long long)storeExternalVersionID;
-(void)setStoreExternalVersionID:(long long)arg1 ;
-(void)setDownloaderDSID:(long long)arg1 ;
-(BOOL)isFamilyShared;
-(NSUUID *)installID;
-(NSString *)updateBuyParams;
-(void)setUpdateBuyParams:(NSString *)arg1 ;
-(long long)watchApplicationMode;
-(void)setWatchApplicationMode:(long long)arg1 ;
@end

