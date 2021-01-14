/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSDictionary, NSString;

@interface CRCarPlayAppPolicy : NSObject {

	BOOL _carPlaySupported;
	BOOL _canDisplayOnCarScreen;
	BOOL _launchUsingSiri;
	BOOL _launchNotificationsUsingSiri;
	BOOL _launchUsingMusicUIService;
	BOOL _badgesAppIcon;
	BOOL _showsNotifications;
	BOOL _handlesCarIntents;
	BOOL _launchUsingTemplateUI;
	NSDictionary* _siriActivationOptions;
	NSString* _bundlePath;
	unsigned long long _applicationCategory;

}

@property (assign,getter=isCarPlaySupported,nonatomic) BOOL carPlaySupported;              //@synthesize carPlaySupported=_carPlaySupported - In the implementation block
@property (assign,nonatomic) BOOL canDisplayOnCarScreen;                                   //@synthesize canDisplayOnCarScreen=_canDisplayOnCarScreen - In the implementation block
@property (assign,nonatomic) BOOL launchUsingSiri;                                         //@synthesize launchUsingSiri=_launchUsingSiri - In the implementation block
@property (assign,nonatomic) BOOL launchNotificationsUsingSiri;                            //@synthesize launchNotificationsUsingSiri=_launchNotificationsUsingSiri - In the implementation block
@property (nonatomic,copy) NSDictionary * siriActivationOptions;                           //@synthesize siriActivationOptions=_siriActivationOptions - In the implementation block
@property (assign,nonatomic) BOOL launchUsingMusicUIService;                               //@synthesize launchUsingMusicUIService=_launchUsingMusicUIService - In the implementation block
@property (assign,nonatomic) BOOL badgesAppIcon;                                           //@synthesize badgesAppIcon=_badgesAppIcon - In the implementation block
@property (assign,nonatomic) BOOL showsNotifications;                                      //@synthesize showsNotifications=_showsNotifications - In the implementation block
@property (assign,nonatomic) BOOL handlesCarIntents;                                       //@synthesize handlesCarIntents=_handlesCarIntents - In the implementation block
@property (assign,nonatomic) BOOL launchUsingTemplateUI;                                   //@synthesize launchUsingTemplateUI=_launchUsingTemplateUI - In the implementation block
@property (assign,nonatomic) unsigned long long applicationCategory;                       //@synthesize applicationCategory=_applicationCategory - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath;                                 //@synthesize bundlePath=_bundlePath - In the implementation block
-(BOOL)showsNotifications;
-(void)setLaunchUsingSiri:(BOOL)arg1 ;
-(BOOL)launchNotificationsUsingSiri;
-(void)setShowsNotifications:(BOOL)arg1 ;
-(void)setBadgesAppIcon:(BOOL)arg1 ;
-(void)setApplicationCategory:(unsigned long long)arg1 ;
-(id)init;
-(void)setSiriActivationOptions:(NSDictionary *)arg1 ;
-(NSString *)bundlePath;
-(BOOL)badgesAppIcon;
-(BOOL)launchUsingTemplateUI;
-(NSDictionary *)siriActivationOptions;
-(BOOL)handlesCarIntents;
-(void)setCarPlaySupported:(BOOL)arg1 ;
-(void)setLaunchNotificationsUsingSiri:(BOOL)arg1 ;
-(BOOL)launchUsingSiri;
-(BOOL)canDisplayOnCarScreen;
-(void)setLaunchUsingTemplateUI:(BOOL)arg1 ;
-(BOOL)launchUsingMusicUIService;
-(void)setHandlesCarIntents:(BOOL)arg1 ;
-(BOOL)isCarPlaySupported;
-(unsigned long long)applicationCategory;
-(void)setCanDisplayOnCarScreen:(BOOL)arg1 ;
-(void)setLaunchUsingMusicUIService:(BOOL)arg1 ;
@end

