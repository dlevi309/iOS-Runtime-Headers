/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString, SBActivationSettings, NSURL;

@interface SBLaunchImageOverridesContext : NSObject {

	NSString* _sceneID;
	SBActivationSettings* _settings;
	BOOL _ignoreSnapshots;
	NSString* _launchImageName;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * sceneID;                                //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,readonly) SBActivationSettings * activationSettings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) BOOL ignoreSnapshots;                                   //@synthesize ignoreSnapshots=_ignoreSnapshots - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchImageName;                        //@synthesize launchImageName=_launchImageName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(SBActivationSettings *)activationSettings;
-(NSString *)launchImageName;
-(NSString *)sceneID;
-(id)initWithSceneID:(id)arg1 activationSettings:(id)arg2 ;
-(BOOL)ignoreSnapshots;
@end

