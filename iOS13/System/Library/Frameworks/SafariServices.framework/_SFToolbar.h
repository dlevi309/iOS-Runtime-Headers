/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIToolbar.h>
#import <libobjc.A.dylib/_SFBarCommon.h>
#import <libobjc.A.dylib/_SFBarRegistrationObserving.h>

@protocol _SFBarRegistrationToken;
@class UIVisualEffectView, UIBlurEffect, UIView, _SFBarTheme, NSString;

@interface _SFToolbar : UIToolbar <_SFBarCommon, _SFBarRegistrationObserving> {

	UIVisualEffectView* _backgroundView;
	UIBlurEffect* _customBackdropEffect;
	UIView* _separator;
	BOOL _usesLegacyDarkBackdrop;
	long long _placement;
	_SFBarTheme* _theme;
	id<_SFBarRegistrationToken> _barRegistration;
	UIView* _superviewOwningLayout;

}

@property (nonatomic,readonly) long long placement;                                           //@synthesize placement=_placement - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (nonatomic,retain) _SFBarTheme * theme;                                             //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic) BOOL usesLegacyDarkBackdrop;                                     //@synthesize usesLegacyDarkBackdrop=_usesLegacyDarkBackdrop - In the implementation block
@property (assign,nonatomic,__weak) id<_SFBarRegistrationToken> barRegistration;              //@synthesize barRegistration=_barRegistration - In the implementation block
@property (assign,nonatomic,__weak) UIView * superviewOwningLayout;                           //@synthesize superviewOwningLayout=_superviewOwningLayout - In the implementation block
@property (nonatomic,readonly) double baselineOffsetAdjustment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isMinibar;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(double)_contentMargin;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(long long)placement;
-(_SFBarTheme *)theme;
-(void)setTheme:(_SFBarTheme *)arg1 ;
-(id)initWithPlacement:(long long)arg1 ;
-(void)setSuperviewOwningLayout:(UIView *)arg1 ;
-(double)baselineOffsetAdjustment;
-(void)animateSafariIconLinkFromPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(void)animateLinkImage:(CGImageRef)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(/*^block*/id)arg5 afterDestinationLayerBouncesBlock:(/*^block*/id)arg6 ;
-(id)popoverSourceInfoForBarItem:(long long)arg1 ;
-(id<_SFBarRegistrationToken>)barRegistration;
-(void)didChangeArrangedBarItems:(id)arg1 ;
-(void)_cancelLinkAnimations;
-(void)_updateBackgroundViewEffects;
-(void)didCompleteBarRegistrationWithToken:(id)arg1 ;
-(void)setUsesLegacyDarkBackdrop:(BOOL)arg1 ;
-(BOOL)usesLegacyDarkBackdrop;
-(void)setBarRegistration:(id<_SFBarRegistrationToken>)arg1 ;
-(UIView *)superviewOwningLayout;
@end

