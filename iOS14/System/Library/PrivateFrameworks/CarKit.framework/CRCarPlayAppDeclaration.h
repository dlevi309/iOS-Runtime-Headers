/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSString, NSSet;

@interface CRCarPlayAppDeclaration : NSObject {

	BOOL _systemApp;
	BOOL _requiresGeoSupport;
	BOOL _launchUsingSiri;
	BOOL _launchNotificationsUsingSiri;
	BOOL _supportsPlayableContent;
	BOOL _supportsMessaging;
	BOOL _supportsCalling;
	BOOL _supportsMaps;
	BOOL _supportsAudio;
	BOOL _supportsCommunication;
	BOOL _supportsTemplates;
	BOOL _supportsCharging;
	BOOL _supportsParking;
	BOOL _supportsPublicSafety;
	BOOL _supportsQuickOrdering;
	NSString* _bundleIdentifier;
	NSSet* _autoMakerProtocols;
	unsigned long long __applicationCategory;
	NSString* _bundlePath;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp;                    //@synthesize systemApp=_systemApp - In the implementation block
@property (assign,nonatomic) BOOL requiresGeoSupport;                              //@synthesize requiresGeoSupport=_requiresGeoSupport - In the implementation block
@property (assign,nonatomic) BOOL launchUsingSiri;                                 //@synthesize launchUsingSiri=_launchUsingSiri - In the implementation block
@property (assign,nonatomic) BOOL launchNotificationsUsingSiri;                    //@synthesize launchNotificationsUsingSiri=_launchNotificationsUsingSiri - In the implementation block
@property (assign,nonatomic) BOOL supportsPlayableContent;                         //@synthesize supportsPlayableContent=_supportsPlayableContent - In the implementation block
@property (assign,nonatomic) BOOL supportsMessaging;                               //@synthesize supportsMessaging=_supportsMessaging - In the implementation block
@property (assign,nonatomic) BOOL supportsCalling;                                 //@synthesize supportsCalling=_supportsCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsMaps;                                    //@synthesize supportsMaps=_supportsMaps - In the implementation block
@property (assign,nonatomic) BOOL supportsAudio;                                   //@synthesize supportsAudio=_supportsAudio - In the implementation block
@property (assign,nonatomic) BOOL supportsCommunication;                           //@synthesize supportsCommunication=_supportsCommunication - In the implementation block
@property (assign,nonatomic) BOOL supportsTemplates;                               //@synthesize supportsTemplates=_supportsTemplates - In the implementation block
@property (assign,nonatomic) BOOL supportsCharging;                                //@synthesize supportsCharging=_supportsCharging - In the implementation block
@property (assign,nonatomic) BOOL supportsParking;                                 //@synthesize supportsParking=_supportsParking - In the implementation block
@property (assign,nonatomic) BOOL supportsPublicSafety;                            //@synthesize supportsPublicSafety=_supportsPublicSafety - In the implementation block
@property (assign,nonatomic) BOOL supportsQuickOrdering;                           //@synthesize supportsQuickOrdering=_supportsQuickOrdering - In the implementation block
@property (nonatomic,retain) NSSet * autoMakerProtocols;                           //@synthesize autoMakerProtocols=_autoMakerProtocols - In the implementation block
@property (assign,nonatomic) unsigned long long _applicationCategory;              //@synthesize _applicationCategory=__applicationCategory - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                  //@synthesize bundlePath=_bundlePath - In the implementation block
+(id)requiredEntitlementKeys;
+(id)declarationForAppProxy:(id)arg1 ;
+(id)requiredInfoKeys;
+(id)declarationForBundleIdentifier:(id)arg1 info:(id)arg2 entitlements:(id)arg3 ;
+(id)declarationForBundleIdentifier:(id)arg1 info:(id)arg2 entitlements:(id)arg3 bundlePath:(id)arg4 ;
+(id)declarationForBundleIdentifier:(id)arg1 entitlements:(id)arg2 infoPlist:(id)arg3 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setLaunchUsingSiri:(BOOL)arg1 ;
-(BOOL)launchNotificationsUsingSiri;
-(BOOL)supportsPlayableContent;
-(BOOL)supportsMessaging;
-(NSString *)bundlePath;
-(BOOL)supportsQuickOrdering;
-(BOOL)requiresGeoSupport;
-(void)set_applicationCategory:(unsigned long long)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)supportsCommunication;
-(void)setSystemApp:(BOOL)arg1 ;
-(void)setSupportsQuickOrdering:(BOOL)arg1 ;
-(BOOL)isSystemApp;
-(void)setSupportsPublicSafety:(BOOL)arg1 ;
-(BOOL)supportsParking;
-(void)setSupportsTemplates:(BOOL)arg1 ;
-(void)setSupportsCalling:(BOOL)arg1 ;
-(unsigned long long)_applicationCategory;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSSet *)autoMakerProtocols;
-(void)setSupportsMessaging:(BOOL)arg1 ;
-(BOOL)supportsCharging;
-(void)setLaunchNotificationsUsingSiri:(BOOL)arg1 ;
-(void)setSupportsCharging:(BOOL)arg1 ;
-(void)setSupportsParking:(BOOL)arg1 ;
-(void)setSupportsPlayableContent:(BOOL)arg1 ;
-(BOOL)launchUsingSiri;
-(void)setRequiresGeoSupport:(BOOL)arg1 ;
-(void)setSupportsAudio:(BOOL)arg1 ;
-(BOOL)supportsTemplates;
-(BOOL)supportsCalling;
-(BOOL)supportsPublicSafety;
-(BOOL)supportsMaps;
-(void)setAutoMakerProtocols:(NSSet *)arg1 ;
-(BOOL)supportsAudio;
-(void)setSupportsMaps:(BOOL)arg1 ;
-(void)setSupportsCommunication:(BOOL)arg1 ;
@end

