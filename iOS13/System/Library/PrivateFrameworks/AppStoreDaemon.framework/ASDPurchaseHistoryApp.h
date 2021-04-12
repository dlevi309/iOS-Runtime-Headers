/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL, NSArray;

@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding> {

	BOOL _familyShared;
	BOOL _firstParty;
	BOOL _hasMessagesExtension;
	BOOL _hasP3;
	BOOL _hidden;
	BOOL _hiddenFromSpringboard;
	BOOL _is32BitOnly;
	BOOL _isPreorder;
	BOOL _supportsIPad;
	BOOL _supportsIPhone;
	BOOL _supportsLayeredImage;
	BOOL _watchAppDeliveredIniOSApp;
	BOOL _watchAppRunsIndependently;
	BOOL _watchOnly;
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
@property (copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (assign) BOOL watchAppDeliveredIniOSApp;                                  //@synthesize watchAppDeliveredIniOSApp=_watchAppDeliveredIniOSApp - In the implementation block
@property (assign) BOOL watchAppRunsIndependently;                                  //@synthesize watchAppRunsIndependently=_watchAppRunsIndependently - In the implementation block
@property (assign) BOOL watchOnly;                                                  //@synthesize watchOnly=_watchOnly - In the implementation block
@property (assign) unsigned purchaseToken;                                          //@synthesize purchaseToken=_purchaseToken - In the implementation block
@property (assign) unsigned long long lockerItemID;                                 //@synthesize lockerItemID=_lockerItemID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleID;
-(long long)genreID;
-(long long)purchaserDSID;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(NSArray *)requiredCapabilities;
-(void)setFirstParty:(BOOL)arg1 ;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
-(long long)storeItemID;
-(BOOL)isPreorder;
-(NSString *)genreName;
-(void)setGenreName:(NSString *)arg1 ;
-(BOOL)isHiddenFromSpringboard;
-(BOOL)hasMessagesExtension;
-(void)setHasMessagesExtension:(BOOL)arg1 ;
-(NSURL *)productURL;
-(void)setProductURL:(NSURL *)arg1 ;
-(BOOL)is32BitOnly;
-(void)setStoreItemID:(long long)arg1 ;
-(NSDate *)datePurchased;
-(long long)contentRatingFlags;
-(NSString *)longTitle;
-(NSString *)ovalIconURLString;
-(BOOL)supportsIPad;
-(BOOL)supportsIPhone;
-(NSString *)redownloadParams;
-(void)setGenreID:(long long)arg1 ;
-(void)setRedownloadParams:(NSString *)arg1 ;
-(BOOL)isFirstParty;
-(void)setIsPreorder:(BOOL)arg1 ;
-(void)setPurchaserDSID:(long long)arg1 ;
-(BOOL)isFamilyShared;
-(NSString *)circularIconURLString;
-(NSString *)developerName;
-(NSString *)iconURLString;
-(NSURL *)preflightPackageURL;
-(BOOL)watchAppDeliveredIniOSApp;
-(BOOL)watchAppRunsIndependently;
-(BOOL)watchOnly;
-(BOOL)supportsLayeredImage;
-(BOOL)hasP3;
-(int)_bitfieldForBooleanProperties;
-(void)_setBooleanPropertiesForBitfield:(int)arg1 ;
-(void)setCircularIconURLString:(NSString *)arg1 ;
-(void)setContentRatingFlags:(long long)arg1 ;
-(void)setDatePurchased:(NSDate *)arg1 ;
-(void)setDeveloperName:(NSString *)arg1 ;
-(void)setFamilyShared:(BOOL)arg1 ;
-(void)setHasP3:(BOOL)arg1 ;
-(void)setHiddenFromSpringboard:(BOOL)arg1 ;
-(void)setIconURLString:(NSString *)arg1 ;
-(void)setIs32BitOnly:(BOOL)arg1 ;
-(void)setLongTitle:(NSString *)arg1 ;
-(void)setOvalIconURLString:(NSString *)arg1 ;
-(void)setPreflightPackageURL:(NSURL *)arg1 ;
-(void)setSupportsIPad:(BOOL)arg1 ;
-(void)setSupportsIPhone:(BOOL)arg1 ;
-(void)setSupportsLayeredImage:(BOOL)arg1 ;
-(void)setWatchAppDeliveredIniOSApp:(BOOL)arg1 ;
-(void)setWatchAppRunsIndependently:(BOOL)arg1 ;
-(void)setWatchOnly:(BOOL)arg1 ;
-(unsigned)purchaseToken;
-(void)setPurchaseToken:(unsigned)arg1 ;
-(unsigned long long)lockerItemID;
-(void)setLockerItemID:(unsigned long long)arg1 ;
@end

