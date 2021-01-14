/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSDisplayConfiguration, FBSSceneParameters;

@interface AFUISceneConfiguration : NSObject <NSCopying> {

	FBSDisplayConfiguration* _displayConfiguration;
	BOOL _foreground;
	BOOL _cancelSceneLoadingAfterTimeout;
	long long _launchIntent;
	long long _preferredDeferralMode;
	double _sceneLoadingTimeOutDuration;
	FBSSceneParameters* _sceneParameters;
	long long _userInterfaceStyle;
	unsigned long long _deactivationReasonMask;
	CGRect _initialBounds;
	UIEdgeInsets _initialSafeAreaInsets;
	CGRect _bounds;

}

@property (assign,nonatomic) CGRect bounds;                                          //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) BOOL foreground;                                        //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) long long launchIntent;                                 //@synthesize launchIntent=_launchIntent - In the implementation block
@property (assign,nonatomic) long long preferredDeferralMode;                        //@synthesize preferredDeferralMode=_preferredDeferralMode - In the implementation block
@property (assign,nonatomic) BOOL cancelSceneLoadingAfterTimeout;                    //@synthesize cancelSceneLoadingAfterTimeout=_cancelSceneLoadingAfterTimeout - In the implementation block
@property (assign,nonatomic) double sceneLoadingTimeOutDuration;                     //@synthesize sceneLoadingTimeOutDuration=_sceneLoadingTimeOutDuration - In the implementation block
@property (nonatomic,readonly) CGRect initialBounds;                                 //@synthesize initialBounds=_initialBounds - In the implementation block
@property (assign,nonatomic) UIEdgeInsets initialSafeAreaInsets;                     //@synthesize initialSafeAreaInsets=_initialSafeAreaInsets - In the implementation block
@property (nonatomic,copy) FBSSceneParameters * sceneParameters;                     //@synthesize sceneParameters=_sceneParameters - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                           //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (assign,nonatomic) unsigned long long deactivationReasonMask;              //@synthesize deactivationReasonMask=_deactivationReasonMask - In the implementation block
+(id)stringForInvalidationReason:(unsigned long long)arg1 ;
+(id)defaultSiriSceneConfigurationWithInitialBounds:(CGRect)arg1 onDisplay:(id)arg2 ;
-(CGRect)bounds;
-(void)setForeground:(BOOL)arg1 ;
-(long long)userInterfaceStyle;
-(CGRect)initialBounds;
-(id)init;
-(void)setLaunchIntent:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(long long)launchIntent;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(BOOL)foreground;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)preferredDeferralMode;
-(void)setDeactivationReasonMask:(unsigned long long)arg1 ;
-(void)_setupPlatformSpecificDefaultSettings;
-(void)configureMutableSceneSettings:(id)arg1 ;
-(id)_initWithInitialBounds:(CGRect)arg1 displayConfiguration:(id)arg2 ;
-(void)setPreferredDeferralMode:(long long)arg1 ;
-(void)setSceneLoadingTimeOutDuration:(double)arg1 ;
-(void)setCancelSceneLoadingAfterTimeout:(BOOL)arg1 ;
-(void)setSceneParameters:(FBSSceneParameters *)arg1 ;
-(void)setInitialSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(FBSSceneParameters *)sceneParameters;
-(BOOL)cancelSceneLoadingAfterTimeout;
-(double)sceneLoadingTimeOutDuration;
-(UIEdgeInsets)initialSafeAreaInsets;
-(unsigned long long)deactivationReasonMask;
@end

