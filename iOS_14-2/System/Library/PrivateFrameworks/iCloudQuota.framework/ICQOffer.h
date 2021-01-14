/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate, NSString, _ICQBannerSpecification, _ICQButtonSpecification, _ICQFollowupSpecification, _ICQUpgradeFlowSpecification, _ICQXMLSpecification, _ICQDeviceInfo, NSURL;

@interface ICQOffer : NSObject <NSSecureCoding> {

	NSDictionary* _serverDictionary;
	NSDictionary* _planDetailsOverride;
	long long _actionOverride;
	BOOL _iTunesAccountExists;
	NSDate* _retrievalDate;
	NSDate* _expirationDate;
	long long _offerType;
	long long _level;
	NSString* _bundleIdentifier;
	NSString* _appVersionId;
	NSString* _accountAltDSID;
	NSString* _notificationID;
	NSString* _offerId;
	_ICQBannerSpecification* _bannerSpecification;
	_ICQButtonSpecification* _buttonSpecification;
	_ICQFollowupSpecification* _followupSpecification;
	_ICQUpgradeFlowSpecification* _upgradeFlowSpecification;
	_ICQXMLSpecification* _XMLSpecification;
	_ICQDeviceInfo* _deviceInfo;
	NSString* _context;

}

@property (nonatomic,readonly) BOOL iTunesAccountExists; 
@property (getter=isBuddyOffer,nonatomic,readonly) BOOL buddyOffer; 
@property (nonatomic,readonly) _ICQBannerSpecification * bannerSpecification; 
@property (nonatomic,readonly) _ICQButtonSpecification * buttonSpecification; 
@property (nonatomic,readonly) _ICQFollowupSpecification * followupSpecification; 
@property (nonatomic,readonly) _ICQUpgradeFlowSpecification * upgradeFlowSpecification; 
@property (nonatomic,readonly) _ICQXMLSpecification * XMLSpecification; 
@property (nonatomic,retain) _ICQDeviceInfo * deviceInfo; 
@property (nonatomic,retain) NSString * context; 
@property (nonatomic,retain) NSString * appVersionId; 
@property (nonatomic,readonly) long long action; 
@property (nonatomic,readonly) double _callbackInterval; 
@property (nonatomic,retain) NSDate * retrievalDate;                                                 //@synthesize retrievalDate=_retrievalDate - In the implementation block
@property (assign,nonatomic) long long level;                                                        //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * appVersionId;                                                //@synthesize appVersionId=_appVersionId - In the implementation block
@property (nonatomic,retain) NSString * accountAltDSID;                                              //@synthesize accountAltDSID=_accountAltDSID - In the implementation block
@property (nonatomic,retain) NSString * notificationID;                                              //@synthesize notificationID=_notificationID - In the implementation block
@property (nonatomic,retain) NSString * offerId;                                                     //@synthesize offerId=_offerId - In the implementation block
@property (nonatomic,retain) _ICQBannerSpecification * bannerSpecification;                          //@synthesize bannerSpecification=_bannerSpecification - In the implementation block
@property (nonatomic,retain) _ICQButtonSpecification * buttonSpecification;                          //@synthesize buttonSpecification=_buttonSpecification - In the implementation block
@property (nonatomic,retain) _ICQFollowupSpecification * followupSpecification;                      //@synthesize followupSpecification=_followupSpecification - In the implementation block
@property (nonatomic,retain) _ICQUpgradeFlowSpecification * upgradeFlowSpecification;                //@synthesize upgradeFlowSpecification=_upgradeFlowSpecification - In the implementation block
@property (nonatomic,retain) _ICQXMLSpecification * XMLSpecification;                                //@synthesize XMLSpecification=_XMLSpecification - In the implementation block
@property (nonatomic,retain) _ICQDeviceInfo * deviceInfo;                                            //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) NSString * context;                                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL iTunesAccountExists;                                               //@synthesize iTunesAccountExists=_iTunesAccountExists - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) long long offerType;                                                  //@synthesize offerType=_offerType - In the implementation block
@property (nonatomic,readonly) NSURL * remoteUIURL; 
+(BOOL)supportsSecureCoding;
+(id)sampleOfferForLevel:(long long)arg1 ;
-(_ICQDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(_ICQDeviceInfo *)arg1 ;
-(void)setNotificationID:(NSString *)arg1 ;
-(BOOL)showsPhotoVideoCounts;
-(NSString *)offerId;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(long long)action;
-(NSString *)context;
-(long long)level;
-(NSDate *)expirationDate;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isExpired;
-(NSString *)notificationID;
-(id)initWithCoder:(id)arg1 ;
-(long long)offerType;
-(void)setLevel:(long long)arg1 ;
-(void)setOfferId:(NSString *)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(NSDate *)retrievalDate;
-(BOOL)isBuddyOffer;
-(_ICQFollowupSpecification *)followupSpecification;
-(NSURL *)remoteUIURL;
-(id)alertSpecificationForAlertKey:(id)arg1 ;
-(NSString *)accountAltDSID;
-(void)setRetrievalDate:(NSDate *)arg1 ;
-(void)setAccountAltDSID:(NSString *)arg1 ;
-(double)_callbackInterval;
-(BOOL)placeholderExists;
-(id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 retrievalDate:(id)arg4 callbackInterval:(double)arg5 bundleIdentifier:(id)arg6 ;
-(void)setAppVersionId:(NSString *)arg1 ;
-(BOOL)isDetailAppBannerOffer;
-(NSString *)appVersionId;
-(_ICQBannerSpecification *)bannerSpecification;
-(void)setBannerSpecification:(_ICQBannerSpecification *)arg1 ;
-(_ICQButtonSpecification *)buttonSpecification;
-(void)setButtonSpecification:(_ICQButtonSpecification *)arg1 ;
-(void)setFollowupSpecification:(_ICQFollowupSpecification *)arg1 ;
-(_ICQUpgradeFlowSpecification *)upgradeFlowSpecification;
-(void)setUpgradeFlowSpecification:(_ICQUpgradeFlowSpecification *)arg1 ;
-(_ICQXMLSpecification *)XMLSpecification;
-(void)setXMLSpecification:(_ICQXMLSpecification *)arg1 ;
-(BOOL)iTunesAccountExists;
-(void)setITunesAccountExists:(BOOL)arg1 ;
-(void)updateOfferWithPlanDetails:(id)arg1 actionString:(id)arg2 ;
-(id)storagePurchaseKeybagForButtonId:(id)arg1 ;
-(id)alertSpecificationAtIndex:(unsigned long long)arg1 ;
@end
