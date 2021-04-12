/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBAppLayout, NSString;

@interface SBSwitcherTransitionRequest : NSObject <BSDescriptionProviding> {

	SBAppLayout* _appLayout;
	long long _appLayoutEnvironment;
	long long _unlockedEnvironmentMode;
	long long _preferredInterfaceOrientation;
	long long _floatingConfiguration;
	long long _floatingSwitcherVisible;
	long long _dismissInlineAppExpose;
	long long _animationDisabled;
	long long _source;

}

@property (nonatomic,retain) SBAppLayout * appLayout;                              //@synthesize appLayout=_appLayout - In the implementation block
@property (assign,nonatomic) long long appLayoutEnvironment;                       //@synthesize appLayoutEnvironment=_appLayoutEnvironment - In the implementation block
@property (assign,nonatomic) long long unlockedEnvironmentMode;                    //@synthesize unlockedEnvironmentMode=_unlockedEnvironmentMode - In the implementation block
@property (assign,nonatomic) long long preferredInterfaceOrientation;              //@synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation - In the implementation block
@property (assign,nonatomic) long long floatingConfiguration;                      //@synthesize floatingConfiguration=_floatingConfiguration - In the implementation block
@property (assign,nonatomic) long long floatingSwitcherVisible;                    //@synthesize floatingSwitcherVisible=_floatingSwitcherVisible - In the implementation block
@property (assign,nonatomic) long long dismissInlineAppExpose;                     //@synthesize dismissInlineAppExpose=_dismissInlineAppExpose - In the implementation block
@property (assign,nonatomic) long long animationDisabled;                          //@synthesize animationDisabled=_animationDisabled - In the implementation block
@property (assign,nonatomic) long long source;                                     //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForActivatingAppLayout:(id)arg1 ;
+(id)requestForActivatingHomeScreen;
+(id)requestForActivatingAppSwitcher;
+(id)requestForActivatingFloatingSwitcher;
+(id)requestForDeactivatingFloatingSwitcher;
+(id)requestForStashingFloatingApplication;
+(id)requestForDismissingInlineSwitcher;
-(id)init;
-(NSString *)description;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)preferredInterfaceOrientation;
-(void)setPreferredInterfaceOrientation:(long long)arg1 ;
-(void)setAnimationDisabled:(long long)arg1 ;
-(long long)unlockedEnvironmentMode;
-(long long)floatingConfiguration;
-(long long)animationDisabled;
-(SBAppLayout *)appLayout;
-(void)setAppLayout:(SBAppLayout *)arg1 ;
-(void)setUnlockedEnvironmentMode:(long long)arg1 ;
-(void)setFloatingSwitcherVisible:(long long)arg1 ;
-(void)setFloatingConfiguration:(long long)arg1 ;
-(void)setDismissInlineAppExpose:(long long)arg1 ;
-(long long)appLayoutEnvironment;
-(void)setAppLayoutEnvironment:(long long)arg1 ;
-(long long)floatingSwitcherVisible;
-(long long)dismissInlineAppExpose;
@end

