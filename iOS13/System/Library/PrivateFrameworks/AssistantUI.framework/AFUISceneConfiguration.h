/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSDisplayConfiguration, FBSSceneParameters;

@interface AFUISceneConfiguration : NSObject <NSCopying> {

	FBSDisplayConfiguration* _displayConfigruation;
	BOOL _foreground;
	BOOL _takeAssertionsWhenInBackground;
	BOOL _cancelSceneLoadingAfterTimeout;
	long long _launchIntent;
	long long _preferredDeferralMode;
	double _sceneLoadingTimeOutDuration;
	FBSSceneParameters* _sceneParameters;
	long long _userInterfaceStyle;
	CGRect _initialBounds;
	CGRect _bounds;

}

@property (assign,nonatomic) CGRect bounds;                                    //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) BOOL foreground;                                  //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) long long launchIntent;                           //@synthesize launchIntent=_launchIntent - In the implementation block
@property (assign,nonatomic) BOOL takeAssertionsWhenInBackground;              //@synthesize takeAssertionsWhenInBackground=_takeAssertionsWhenInBackground - In the implementation block
@property (assign,nonatomic) long long preferredDeferralMode;                  //@synthesize preferredDeferralMode=_preferredDeferralMode - In the implementation block
@property (assign,nonatomic) BOOL cancelSceneLoadingAfterTimeout;              //@synthesize cancelSceneLoadingAfterTimeout=_cancelSceneLoadingAfterTimeout - In the implementation block
@property (assign,nonatomic) double sceneLoadingTimeOutDuration;               //@synthesize sceneLoadingTimeOutDuration=_sceneLoadingTimeOutDuration - In the implementation block
@property (nonatomic,readonly) CGRect initialBounds;                           //@synthesize initialBounds=_initialBounds - In the implementation block
@property (nonatomic,copy) FBSSceneParameters * sceneParameters;               //@synthesize sceneParameters=_sceneParameters - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                     //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
+(id)stringForDeactivationReason:(unsigned long long)arg1 ;
+(id)defaultSiriSceneConfigurationWithInitialBounds:(CGRect)arg1 onDisplay:(id)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(long long)userInterfaceStyle;
-(void)setForeground:(BOOL)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(BOOL)foreground;
-(long long)launchIntent;
-(void)setLaunchIntent:(long long)arg1 ;
-(long long)preferredDeferralMode;
-(void)_setupPlatformSpecificDefaultSettings;
-(void)configureMutableSceneSettings:(id)arg1 ;
-(id)_initWithInitialBounds:(CGRect)arg1 displayConfiguration:(id)arg2 ;
-(void)setTakeAssertionsWhenInBackground:(BOOL)arg1 ;
-(void)setPreferredDeferralMode:(long long)arg1 ;
-(void)setSceneLoadingTimeOutDuration:(double)arg1 ;
-(void)setCancelSceneLoadingAfterTimeout:(BOOL)arg1 ;
-(void)setSceneParameters:(FBSSceneParameters *)arg1 ;
-(FBSSceneParameters *)sceneParameters;
-(BOOL)takeAssertionsWhenInBackground;
-(BOOL)cancelSceneLoadingAfterTimeout;
-(double)sceneLoadingTimeOutDuration;
-(CGRect)initialBounds;
@end

