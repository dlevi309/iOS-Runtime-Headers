/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBLayoutState.h>

@class NSString, NSSet;

@interface SBMainDisplayLayoutState : SBLayoutState {

	BOOL _floatingSwitcherVisible;
	long long _spaceConfiguration;
	long long _floatingConfiguration;
	long long _unlockedEnvironmentMode;
	NSString* _bundleIDShowingAppExpose;
	NSSet* _inlineAppExposeOverlayElements;

}

@property (nonatomic,readonly) long long spaceConfiguration;                                               //@synthesize spaceConfiguration=_spaceConfiguration - In the implementation block
@property (nonatomic,readonly) long long floatingConfiguration;                                            //@synthesize floatingConfiguration=_floatingConfiguration - In the implementation block
@property (nonatomic,readonly) long long unlockedEnvironmentMode;                                          //@synthesize unlockedEnvironmentMode=_unlockedEnvironmentMode - In the implementation block
@property (nonatomic,readonly) NSString * bundleIDShowingAppExpose;                                        //@synthesize bundleIDShowingAppExpose=_bundleIDShowingAppExpose - In the implementation block
@property (getter=isFloatingSwitcherVisible,nonatomic,readonly) BOOL floatingSwitcherVisible;              //@synthesize floatingSwitcherVisible=_floatingSwitcherVisible - In the implementation block
@property (nonatomic,readonly) NSSet * inlineAppExposeOverlayElements;                                     //@synthesize inlineAppExposeOverlayElements=_inlineAppExposeOverlayElements - In the implementation block
+(long long)_defaultInterfaceOrientation;
-(BOOL)isFloatingSwitcherVisible;
-(NSString *)bundleIDShowingAppExpose;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 unlockedEnvironmentMode:(long long)arg6 floatingSwitcherVisible:(BOOL)arg7 bundleIDShowingAppExpose:(id)arg8 inlineAppExposeOverlayElements:(id)arg9 ;
-(long long)interfaceOrientation;
-(long long)floatingConfiguration;
-(NSSet *)inlineAppExposeOverlayElements;
-(id)inlineAppExposeOverlayElementWithRole:(long long)arg1 ;
-(unsigned long long)hash;
-(id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3 ;
-(id)_transitionContextForResizingToSpaceConfiguration:(long long)arg1 ;
-(long long)unlockedEnvironmentMode;
-(id)_transitionContextForDismissingLeftApplication;
-(id)_transitionContextForDismissingRightApplication;
-(id)floatingItem;
-(long long)spaceConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)visibleFloatingItem;
@end

