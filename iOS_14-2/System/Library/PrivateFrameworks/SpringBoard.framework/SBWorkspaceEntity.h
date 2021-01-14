/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SBActivationSettings.h>
#import <libobjc.A.dylib/SBDeactivationSettings.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBLayoutElementDescriptor.h>

@class NSString, SBActivationSettings, SBDeactivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor> {

	NSString* _identifier;
	long long _layoutRole;
	SBActivationSettings* _activationSettings;
	SBDeactivationSettings* _deactivationSettings;
	long long __mainDisplayPreferredInterfaceOrientation;

}

@property (nonatomic,readonly) BOOL isPreviousWorkspaceEntity; 
@property (nonatomic,readonly) BOOL isEmptyWorkspaceEntity; 
@property (nonatomic,readonly) BOOL isHomeScreenEntity; 
@property (assign,setter=_setMainDisplayPreferredInterfaceOrientation:,getter=_mainDisplayPreferredInterfaceOrientation,nonatomic) long long _mainDisplayPreferredInterfaceOrientation;              //@synthesize _mainDisplayPreferredInterfaceOrientation=__mainDisplayPreferredInterfaceOrientation - In the implementation block
@property (assign,nonatomic) long long layoutRole;                                                                                                                                                   //@synthesize layoutRole=_layoutRole - In the implementation block
@property (nonatomic,readonly) SBActivationSettings * activationSettings;                                                                                                                            //@synthesize activationSettings=_activationSettings - In the implementation block
@property (nonatomic,readonly) SBDeactivationSettings * deactivationSettings;                                                                                                                        //@synthesize deactivationSettings=_deactivationSettings - In the implementation block
@property (nonatomic,readonly) BOOL supportsPresentationAtAnySize; 
@property (nonatomic,readonly) BOOL wantsExclusiveForeground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long supportedLayoutRoles; 
@property (nonatomic,readonly) unsigned long long layoutAttributes; 
@property (nonatomic,readonly) Class viewControllerClass; 
@property (nonatomic,copy,readonly) id entityGenerator; 
+(id)entity;
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2 ;
-(void)applyDeactivationSettings:(id)arg1 ;
-(long long)layoutRole;
-(unsigned long long)layoutAttributes;
-(void)clearDeactivationSettings;
-(id)init;
-(BOOL)supportsPresentationAtAnySize;
-(BOOL)boolForActivationSetting:(unsigned)arg1 ;
-(void)setFlag:(long long)arg1 forActivationSetting:(unsigned)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(Class)viewControllerClass;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(void)setObject:(id)arg1 forActivationSetting:(unsigned)arg2 ;
-(BOOL)isPreviousWorkspaceEntity;
-(NSString *)uniqueIdentifier;
-(id)appClipPlaceholderEntity;
-(BOOL)isAnalogousToEntity:(id)arg1 ;
-(unsigned long long)supportedLayoutRoles;
-(BOOL)isApplicationSceneEntity;
-(BOOL)isHomeScreenEntity;
-(id)entityGenerator;
-(/*^block*/id)_generator;
-(SBActivationSettings *)activationSettings;
-(NSString *)description;
-(id)copyDeactivationSettings;
-(id)applicationSceneEntity;
-(BOOL)isDeviceApplicationSceneEntity;
-(BOOL)hasLayoutAttributes:(unsigned long long)arg1 ;
-(long long)_mainDisplayPreferredInterfaceOrientation;
-(id)deviceApplicationSceneEntity;
-(BOOL)isAppClipPlaceholderEntity;
-(void)applyActivationSettings:(id)arg1 ;
-(void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1 ;
-(id)inlineAppExposeWorkspaceEntity;
-(id)objectForActivationSetting:(unsigned)arg1 ;
-(long long)preferredInterfaceOrientationOnDisplayWithIdentity:(id)arg1 ;
-(SBDeactivationSettings *)deactivationSettings;
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(BOOL)isEmptyWorkspaceEntity;
-(long long)flagForActivationSetting:(unsigned)arg1 ;
-(void)setPreferredInterfaceOrientation:(long long)arg1 onDisplayWithIdentity:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isInlineAppExposeWorkspaceEntity;
-(id)succinctDescriptionBuilder;
-(id)copyActivationSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearActivationSettings;
-(id)objectForDeactivationSetting:(unsigned)arg1 ;
-(void)setLayoutRole:(long long)arg1 ;
-(BOOL)supportsLayoutRole:(long long)arg1 ;
-(BOOL)wantsExclusiveForeground;
-(long long)flagForDeactivationSetting:(unsigned)arg1 ;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1 ;
@end

