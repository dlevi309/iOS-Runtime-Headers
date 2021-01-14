/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, NSUserDefaults, NSMutableDictionary, TPSTipStatusController, NSObject;

@interface TPSCommonDefines : NSObject <IDSServiceDelegate> {

	NSMutableArray* _cloudDevices;
	BOOL _tipsAccessAllowed;
	BOOL _supportsUIApplication;
	BOOL _phoneUI;
	int _maxVersion;
	NSString* _majorVersion;
	NSString* _model;
	NSUserDefaults* _appGroupDefaults;
	NSMutableDictionary* _appBundleIDMap;
	long long _assetRatioType;
	TPSTipStatusController* _tipStatusController;
	NSString* _language;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _collectionStatusMap;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                    //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * collectionStatusMap;                 //@synthesize collectionStatusMap=_collectionStatusMap - In the implementation block
@property (nonatomic,readonly) BOOL tipsAccessAllowed;                                  //@synthesize tipsAccessAllowed=_tipsAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL supportsUIApplication;                                //@synthesize supportsUIApplication=_supportsUIApplication - In the implementation block
@property (getter=isPhoneUI,nonatomic,readonly) BOOL phoneUI;                           //@synthesize phoneUI=_phoneUI - In the implementation block
@property (getter=isPadUI,nonatomic,readonly) BOOL padUI; 
@property (assign,nonatomic) int maxVersion;                                            //@synthesize maxVersion=_maxVersion - In the implementation block
@property (nonatomic,retain) NSString * majorVersion;                                   //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,retain) NSString * model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * appGroupDefaults;                       //@synthesize appGroupDefaults=_appGroupDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appBundleIDMap;                      //@synthesize appBundleIDMap=_appBundleIDMap - In the implementation block
@property (nonatomic,readonly) long long assetRatioType;                                //@synthesize assetRatioType=_assetRatioType - In the implementation block
@property (nonatomic,retain) TPSTipStatusController * tipStatusController;              //@synthesize tipStatusController=_tipStatusController - In the implementation block
@property (nonatomic,copy) NSString * language;                                         //@synthesize language=_language - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)osBuild;
+(BOOL)isInternalDevice;
+(id)appGroupIdentifier;
+(BOOL)hardwareChanged;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(NSString *)model;
-(void)setMajorVersion:(NSString *)arg1 ;
-(TPSTipStatusController *)tipStatusController;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMaxVersion:(int)arg1 ;
-(void)setTipStatusController:(TPSTipStatusController *)arg1 ;
-(NSUserDefaults *)appGroupDefaults;
-(NSString *)majorVersion;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)isPadUI;
-(void)reloadModelInformation;
-(BOOL)hasLocaleChanged;
-(void)clearDataCache;
-(void)setCollectionStatusMap:(NSMutableDictionary *)arg1 ;
-(id)collectionStatusForCollectionIdentifier:(id)arg1 ;
-(void)syncCollectionStatusMap;
-(void)updateCollectionStatus:(unsigned long long)arg1 collections:(id)arg2 ;
-(id)dateForCollectionIdentifier:(id)arg1 dateType:(unsigned long long)arg2 ;
-(NSMutableDictionary *)collectionStatusMap;
-(BOOL)appValidWithIdentifier:(id)arg1 ;
-(id)reloadAppGroupDefaults;
-(id)collectionIdentifierToUseForCollectionIdentifiers:(id)arg1 ;
-(void)notifiedCollection:(id)arg1 ;
-(void)featuredCollection:(id)arg1 ;
-(BOOL)isPhoneUI;
-(void)viewedCollection:(id)arg1 ;
-(void)activatedCollection:(id)arg1 ;
-(void)activatedCollections:(id)arg1 ;
-(void)resetCollectionStatusMap;
-(id)activateDateForCollectionIdentifier:(id)arg1 ;
-(id)appBundleIDForInstalledAppWithIdentifier:(id)arg1 ;
-(BOOL)tipsAccessAllowed;
-(BOOL)supportsUIApplication;
-(void)setSupportsUIApplication:(BOOL)arg1 ;
-(NSMutableDictionary *)appBundleIDMap;
-(void)setAppBundleIDMap:(NSMutableDictionary *)arg1 ;
-(long long)assetRatioType;
-(long long)userType;
-(NSString *)language;
-(int)maxVersion;
@end

