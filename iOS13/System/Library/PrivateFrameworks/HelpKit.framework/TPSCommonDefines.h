/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class NSString, NSMutableArray, NSUserDefaults, NSMutableDictionary, NSDateFormatter, TPSTipStatusController, NSSet;

@interface TPSCommonDefines : NSObject <IDSServiceDelegate> {

	long long _experimentCamp;
	NSString* _model;
	NSMutableArray* _cloudDevices;
	BOOL _carryMode;
	BOOL _tipsAccessAllowed;
	BOOL _supportsUIApplication;
	BOOL _phoneUI;
	int _maxVersion;
	NSString* _majorVersion;
	NSUserDefaults* _appGroupDefaults;
	NSMutableDictionary* _appBundleIDMap;
	NSString* _hexRepresentationOfProuctHash;
	NSDateFormatter* _CDSDateFormatter;
	long long _assetRatioType;
	TPSTipStatusController* _tipStatusController;
	NSSet* _complexTargetingRuleSet;
	NSMutableDictionary* _collectionStatusMap;

}

@property (nonatomic,retain) NSSet * complexTargetingRuleSet;                           //@synthesize complexTargetingRuleSet=_complexTargetingRuleSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * collectionStatusMap;                 //@synthesize collectionStatusMap=_collectionStatusMap - In the implementation block
@property (nonatomic,readonly) BOOL carryMode;                                          //@synthesize carryMode=_carryMode - In the implementation block
@property (nonatomic,readonly) BOOL tipsAccessAllowed;                                  //@synthesize tipsAccessAllowed=_tipsAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL supportsUIApplication;                                //@synthesize supportsUIApplication=_supportsUIApplication - In the implementation block
@property (nonatomic,readonly) long long experimentCamp;                                //@synthesize experimentCamp=_experimentCamp - In the implementation block
@property (getter=isPhoneUI,nonatomic,readonly) BOOL phoneUI;                           //@synthesize phoneUI=_phoneUI - In the implementation block
@property (assign,nonatomic) int maxVersion;                                            //@synthesize maxVersion=_maxVersion - In the implementation block
@property (nonatomic,retain) NSString * majorVersion;                                   //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * appGroupDefaults;                       //@synthesize appGroupDefaults=_appGroupDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appBundleIDMap;                      //@synthesize appBundleIDMap=_appBundleIDMap - In the implementation block
@property (nonatomic,retain) NSString * hexRepresentationOfProuctHash;                  //@synthesize hexRepresentationOfProuctHash=_hexRepresentationOfProuctHash - In the implementation block
@property (nonatomic,retain) NSDateFormatter * CDSDateFormatter;                        //@synthesize CDSDateFormatter=_CDSDateFormatter - In the implementation block
@property (nonatomic,readonly) long long assetRatioType;                                //@synthesize assetRatioType=_assetRatioType - In the implementation block
@property (nonatomic,retain) TPSTipStatusController * tipStatusController;              //@synthesize tipStatusController=_tipStatusController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)osBuild;
+(BOOL)isInternalBuild;
+(BOOL)isPriorityDiscoverabilityInAppHint:(unsigned long long)arg1 ;
+(id)universalIdentiferWithContentIdentifier:(id)arg1 ;
+(id)deviceFamilyIdentifier;
+(BOOL)isPriorityDiscoverabilityNotification:(unsigned long long)arg1 ;
+(void)targetInfoForArray:(id)arg1 targetedArray:(id*)arg2 excludeArray:(id*)arg3 changeToLowerCase:(BOOL)arg4 ;
+(BOOL)hardwareChanged;
+(id)deviceFamilyIdentiferWithContentIdentifier:(id)arg1 ;
+(BOOL)validPublishDateForTip:(id)arg1 ;
+(unsigned long long)displayTypeForPriority:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)majorVersion;
-(void)setMajorVersion:(NSString *)arg1 ;
-(BOOL)carryMode;
-(TPSTipStatusController *)tipStatusController;
-(id)tipURLForIdentifier:(id)arg1 ;
-(void)setTipStatusController:(TPSTipStatusController *)arg1 ;
-(NSDateFormatter *)CDSDateFormatter;
-(void)reloadModelInformation;
-(BOOL)hasLocaleChanged;
-(void)clearDataCache;
-(void)updateCollectionStatus:(unsigned long long)arg1 collections:(id)arg2 ;
-(id)dateForCollectionIdentifier:(id)arg1 dateType:(unsigned long long)arg2 ;
-(id)collectionStatusForCollectionIdentifier:(id)arg1 ;
-(void)syncCollectionStatusMap;
-(NSMutableDictionary *)collectionStatusMap;
-(id)lowercaseModelWithDashSeparator;
-(id)lowercaseModelWithNoSpace;
-(id)modelWithSeparator:(id)arg1 lowercase:(BOOL)arg2 ;
-(id)contentURLWithTipIdentifier:(id)arg1 maxLanguageCount:(unsigned long long)arg2 ;
-(BOOL)appValidWithIdentifier:(id)arg1 ;
-(NSSet *)complexTargetingRuleSet;
-(BOOL)validWithSystem:(id)arg1 ;
-(BOOL)validWithTargetRegions:(id)arg1 ;
-(BOOL)validWithTargetDevices:(id)arg1 ;
-(BOOL)validWithTargetApps:(id)arg1 ;
-(NSString *)hexRepresentationOfProuctHash;
-(id)appBundleIDForInstalledAppWithIdentifier:(id)arg1 ;
-(void)updateExperimentCamp:(long long)arg1 ;
-(id)reloadAppGroupDefaults;
-(id)collectionIdentifierToUseForCollectionIdentifiers:(id)arg1 ;
-(void)featuredCollection:(id)arg1 ;
-(void)viewedCollection:(id)arg1 ;
-(void)activatedCollections:(id)arg1 ;
-(void)resetCollectionStatusMap;
-(id)activateDateForCollectionIdentifier:(id)arg1 ;
-(id)collectionPathForCollectionIdentifier:(id)arg1 languageCode:(id)arg2 isDark:(BOOL)arg3 ;
-(id)tipsListURL;
-(id)tipsDeliveryRulesURL;
-(BOOL)tipAllowsSimpleTargetingRulesMatch:(id)arg1 ;
-(BOOL)tipValidWithSimpleTargetingRules:(id)arg1 ;
-(BOOL)tipsAccessAllowed;
-(BOOL)supportsUIApplication;
-(void)setSupportsUIApplication:(BOOL)arg1 ;
-(long long)experimentCamp;
-(BOOL)isPhoneUI;
-(int)maxVersion;
-(void)setMaxVersion:(int)arg1 ;
-(NSUserDefaults *)appGroupDefaults;
-(NSMutableDictionary *)appBundleIDMap;
-(void)setAppBundleIDMap:(NSMutableDictionary *)arg1 ;
-(void)setHexRepresentationOfProuctHash:(NSString *)arg1 ;
-(void)setCDSDateFormatter:(NSDateFormatter *)arg1 ;
-(long long)assetRatioType;
-(void)setComplexTargetingRuleSet:(NSSet *)arg1 ;
-(void)setCollectionStatusMap:(NSMutableDictionary *)arg1 ;
@end

