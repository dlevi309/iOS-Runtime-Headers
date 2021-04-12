/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)launchImageName;
-(NSString *)sceneID;
-(SBActivationSettings *)activationSettings;
-(id)initWithSceneID:(id)arg1 activationSettings:(id)arg2 ;
-(BOOL)ignoreSnapshots;
@end

