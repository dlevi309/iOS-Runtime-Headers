/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray, NSURL;

@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding> {

	BOOL _familyShared;
	BOOL _firstParty;
	BOOL _hasMessagesExtension;
	BOOL _hasP3;
	BOOL _hidden;
	BOOL _hiddenFromSpringboard;
	BOOL _is32BitOnly;
	BOOL _isPreorder;
	BOOL _isIOSBinaryMacOSAvailable;
	BOOL _isIOSBinaryMacOSCompatible;
	BOOL _requiresRosetta;
	BOOL _runsOnIntel;
	BOOL _runsOnAppleSilicon;
	BOOL _supportsIPad;
	BOOL _supportsIPhone;
	BOOL _supportsLayeredImage;
	BOOL _supportsMac;
	BOOL _watchAppDeliveredIniOSApp;
	BOOL _watchAppRunsIndependently;
	BOOL _watchOnly;
	unsigned _mediaKind;
	unsigned _purchaseToken;
	NSString* _bundleID;
	NSString* _circularIconURLString;
	long long _contentRatingFlags;
	NSDate* _datePurchased;
	NSString* _developerName;
	long long _genreID;
	NSString* _genreName;
	NSString* _iconURLString;
	NSString* _longTitle;
	NSArray* _macAppRequiredCapabilities;
	NSString* _ovalIconURLString;
	NSURL* _preflightPackageURL;
	NSURL* _productURL;
	long long _purchaserDSID;
	NSString* _redownloadParams;
	NSArray* _requiredCapabilities;
	long long _storeItemID;
	NSString* _title;
	unsigned long long _lockerItemID;

}

@property (copy) NSString * bundleID;                                               //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * circularIconURLString;                                  //@synthesize circularIconURLString=_circularIconURLString - In the implementation block
@property (assign) long long contentRatingFlags;                                    //@synthesize contentRatingFlags=_contentRatingFlags - In the implementation block
@property (copy) NSDate * datePurchased;                                            //@synthesize datePurchased=_datePurchased - In the implementation block
@property (copy) NSString * developerName;                                          //@synthesize developerName=_developerName - In the implementation block
@property (getter=isFamilyShared) BOOL familyShared;                                //@synthesize familyShared=_familyShared - In the implementation block
@property (getter=isFirstParty) BOOL firstParty;                                    //@synthesize firstParty=_firstParty - In the implementation block
@property (assign) long long genreID;                                               //@synthesize genreID=_genreID - In the implementation block
@property (copy) NSString * genreName;                                              //@synthesize genreName=_genreName - In the implementation block
@property (assign) BOOL hasMessagesExtension;                                       //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (assign) BOOL hasP3;                                                      //@synthesize hasP3=_hasP3 - In the implementation block
@property (getter=isHidden) BOOL hidden;                                            //@synthesize hidden=_hidden - In the implementation block
@property (getter=isHiddenFromSpringboard) BOOL hiddenFromSpringboard;              //@synthesize hiddenFromSpringboard=_hiddenFromSpringboard - In the implementation block
@property (copy) NSString * iconURLString;                                          //@synthesize iconURLString=_iconURLString - In the implementation block
@property (assign) BOOL is32BitOnly;                                                //@synthesize is32BitOnly=_is32BitOnly - In the implementation block
@property (assign) BOOL isPreorder;                                                 //@synthesize isPreorder=_isPreorder - In the implementation block
@property (copy) NSString * longTitle;                                              //@synthesize longTitle=_longTitle - In the implementation block
@property (copy) NSArray * macAppRequiredCapabilities;                              //@synthesize macAppRequiredCapabilities=_macAppRequiredCapabilities - In the implementation block
@property (assign) unsigned mediaKind;                                              //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign) BOOL isIOSBinaryMacOSAvailable;                                  //@synthesize isIOSBinaryMacOSAvailable=_isIOSBinaryMacOSAvailable - In the implementation block
@property (assign) BOOL isIOSBinaryMacOSCompatible;                                 //@synthesize isIOSBinaryMacOSCompatible=_isIOSBinaryMacOSCompatible - In the implementation block
@property (assign) BOOL runsOnIntel;                                                //@synthesize runsOnIntel=_runsOnIntel - In the implementation block
@property (assign) BOOL runsOnAppleSilicon;                                         //@synthesize runsOnAppleSilicon=_runsOnAppleSilicon - In the implementation block
@property (assign) BOOL requiresRosetta;                                            //@synthesize requiresRosetta=_requiresRosetta - In the implementation block
@property (copy) NSString * ovalIconURLString;                                      //@synthesize ovalIconURLString=_ovalIconURLString - In the implementation block
@property (copy) NSURL * preflightPackageURL;                                       //@synthesize preflightPackageURL=_preflightPackageURL - In the implementation block
@property (copy) NSURL * productURL;                                                //@synthesize productURL=_productURL - In the implementation block
@property (assign) long long purchaserDSID;                                         //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (copy) NSString * redownloadParams;                                       //@synthesize redownloadParams=_redownloadParams - In the implementation block
@property (copy) NSArray * requiredCapabilities;                                    //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (assign) long long storeItemID;                                           //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign) BOOL supportsIPad;                                               //@synthesize supportsIPad=_supportsIPad - In the implementation block
@property (assign) BOOL supportsIPhone;                                             //@synthesize supportsIPhone=_supportsIPhone - In the implementation block
@property (assign) BOOL supportsLayeredImage;                                       //@synthesize supportsLayeredImage=_supportsLayeredImage - In the implementation block
@property (assign) BOOL supportsMac;                                                //@synthesize supportsMac=_supportsMac - In the implementation block
@property (copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (assign) BOOL watchAppDeliveredIniOSApp;                                  //@synthesize watchAppDeliveredIniOSApp=_watchAppDeliveredIniOSApp - In the implementation block
@property (assign) BOOL watchAppRunsIndependently;                                  //@synthesize watchAppRunsIndependently=_watchAppRunsIndependently - In the implementation block
@property (assign) BOOL watchOnly;                                                  //@synthesize watchOnly=_watchOnly - In the implementation block
@property (assign) unsigned purchaseToken;                                          //@synthesize purchaseToken=_purchaseToken - In the implementation block
@property (assign) unsigned long long lockerItemID;                                 //@synthesize lockerItemID=_lockerItemID - In the implementation block
@property (readonly) BOOL hasAnyMacOSCompatibleIOSVersion; 
+(BOOL)supportsSecureCoding;
-(long long)genreID;
-(void)setGenreName:(NSString *)arg1 ;
-(void)setStoreItemID:(long long)arg1 ;
-(long long)storeItemID;
-(BOOL)isHidden;
-(BOOL)hasP3;
-(BOOL)isIOSBinaryMacOSCompatible;
-(BOOL)requiresRosetta;
-(BOOL)runsOnAppleSilicon;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)isPreorder;
-(void)setIsIOSBinaryMacOSCompatible:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)circularIconURLString;
-(NSString *)developerName;
-(NSURL *)preflightPackageURL;
-(NSURL *)productURL;
-(BOOL)watchAppDeliveredIniOSApp;
-(BOOL)watchAppRunsIndependently;
-(BOOL)supportsLayeredImage;
-(BOOL)isIOSBinaryMacOSAvailable;
-(int)_bitfieldForBooleanProperties;
-(void)_setBooleanPropertiesForBitfield:(int)arg1 ;
-(void)setCircularIconURLString:(NSString *)arg1 ;
-(unsigned)mediaKind;
-(BOOL)hasAnyMacOSCompatibleIOSVersion;
-(void)setContentRatingFlags:(long long)arg1 ;
-(void)setDeveloperName:(NSString *)arg1 ;
-(void)setFamilyShared:(BOOL)arg1 ;
-(void)setHiddenFromSpringboard:(BOOL)arg1 ;
-(void)setIconURLString:(NSString *)arg1 ;
-(void)setIs32BitOnly:(BOOL)arg1 ;
-(void)setIsIOSBinaryMacOSAvailable:(BOOL)arg1 ;
-(void)setLongTitle:(NSString *)arg1 ;
-(NSArray *)macAppRequiredCapabilities;
-(void)setMacAppRequiredCapabilities:(NSArray *)arg1 ;
-(void)setRequiresRosetta:(BOOL)arg1 ;
-(void)setRunsOnIntel:(BOOL)arg1 ;
-(BOOL)isFirstParty;
-(NSDate *)datePurchased;
-(long long)contentRatingFlags;
-(BOOL)supportsIPad;
-(NSString *)ovalIconURLString;
-(BOOL)supportsIPhone;
-(NSString *)redownloadParams;
-(void)setRunsOnAppleSilicon:(BOOL)arg1 ;
-(void)setOvalIconURLString:(NSString *)arg1 ;
-(void)setPreflightPackageURL:(NSURL *)arg1 ;
-(void)setProductURL:(NSURL *)arg1 ;
-(void)setSupportsIPad:(BOOL)arg1 ;
-(void)setSupportsIPhone:(BOOL)arg1 ;
-(void)setSupportsLayeredImage:(BOOL)arg1 ;
-(BOOL)supportsMac;
-(void)setSupportsMac:(BOOL)arg1 ;
-(void)setWatchAppDeliveredIniOSApp:(BOOL)arg1 ;
-(void)setWatchAppRunsIndependently:(BOOL)arg1 ;
-(void)setWatchOnly:(BOOL)arg1 ;
-(unsigned)purchaseToken;
-(void)setPurchaseToken:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setHasMessagesExtension:(BOOL)arg1 ;
-(BOOL)is32BitOnly;
-(unsigned long long)lockerItemID;
-(void)setLockerItemID:(unsigned long long)arg1 ;
-(BOOL)isHiddenFromSpringboard;
-(long long)purchaserDSID;
-(NSArray *)requiredCapabilities;
-(BOOL)hasMessagesExtension;
-(void)setPurchaserDSID:(long long)arg1 ;
-(void)setGenreID:(long long)arg1 ;
-(void)setRedownloadParams:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setIsPreorder:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDatePurchased:(NSDate *)arg1 ;
-(NSString *)genreName;
-(void)setMediaKind:(unsigned)arg1 ;
-(BOOL)watchOnly;
-(NSString *)longTitle;
-(void)setFirstParty:(BOOL)arg1 ;
-(void)setHasP3:(BOOL)arg1 ;
-(NSString *)iconURLString;
-(BOOL)isFamilyShared;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)runsOnIntel;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
@end

