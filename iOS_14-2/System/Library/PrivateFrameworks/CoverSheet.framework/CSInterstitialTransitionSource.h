/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/CSCoverSheetViewTransitionSource.h>
#import <libobjc.A.dylib/CSExternalAppearanceProviding.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>

@protocol CSInterstitialTransitionDelegate;
@class CSComponent, NSString, NSSet, _UILegibilitySettings, UIColor;

@interface CSInterstitialTransitionSource : NSObject <CSCoverSheetViewTransitionSource, CSExternalAppearanceProviding, CSExternalBehaviorProviding> {

	long long _participantState;
	id<CSInterstitialTransitionDelegate> _transitioningDelegate;
	long long _transitionType;
	CSComponent* _homeAffordance;
	SCD_Struct_CS7 _transitionContext;

}

@property (assign,nonatomic) long long transitionType;                                                       //@synthesize transitionType=_transitionType - In the implementation block
@property (nonatomic,retain) CSComponent * homeAffordance;                                                   //@synthesize homeAffordance=_homeAffordance - In the implementation block
@property (assign,nonatomic,__weak) id<CSInterstitialTransitionDelegate> transitioningDelegate;              //@synthesize transitioningDelegate=_transitioningDelegate - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_CS8 transitionContext;                                             //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState;                                                   //@synthesize participantState=_participantState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
-(void)cancelTransition;
-(long long)transitionType;
-(void)setTransitionType:(long long)arg1 ;
-(void)conformsToCSExternalBehaviorProviding;
-(SCD_Struct_CS8)transitionContext;
-(long long)backgroundStyle;
-(long long)notificationBehavior;
-(void)conformsToCSBehaviorProviding;
-(long long)proximityDetectionMode;
-(NSString *)appearanceIdentifier;
-(UIColor *)backgroundColor;
-(NSSet *)components;
-(NSString *)coverSheetIdentifier;
-(void)conformsToCSAppearanceProviding;
-(void)setTransitioningDelegate:(id<CSInterstitialTransitionDelegate>)arg1 ;
-(void)prepareForPresentation;
-(_UILegibilitySettings *)legibilitySettings;
-(long long)participantState;
-(BOOL)isTransitioning;
-(id<CSInterstitialTransitionDelegate>)transitioningDelegate;
-(long long)scrollingStrategy;
-(CSComponent *)homeAffordance;
-(unsigned long long)restrictedCapabilities;
-(void)updatePresentationWithProgress:(double)arg1 ;
-(void)cleanupPresentation;
-(void)setHomeAffordance:(CSComponent *)arg1 ;
@end

