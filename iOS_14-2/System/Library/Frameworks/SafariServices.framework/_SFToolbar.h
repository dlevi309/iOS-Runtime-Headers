/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_SFBarTheme *)theme;
-(void)_updateBackgroundViewEffects;
-(long long)placement;
-(void)animateLinkImage:(CGImageRef)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(/*^block*/id)arg5 afterDestinationLayerBouncesBlock:(/*^block*/id)arg6 ;
-(UIView *)superviewOwningLayout;
-(double)_contentMargin;
-(void)didCompleteBarRegistrationWithToken:(id)arg1 ;
-(void)setTheme:(_SFBarTheme *)arg1 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBarRegistration:(id<_SFBarRegistrationToken>)arg1 ;
-(void)setUsesLegacyDarkBackdrop:(BOOL)arg1 ;
-(BOOL)usesLegacyDarkBackdrop;
-(id)initWithPlacement:(long long)arg1 ;
-(void)layoutSubviews;
-(void)animateSafariIconLinkFromPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)baselineOffsetAdjustment;
-(NSString *)backdropGroupName;
-(void)_cancelLinkAnimations;
-(void)setSuperviewOwningLayout:(UIView *)arg1 ;
-(BOOL)isMinibar;
-(id<_SFBarRegistrationToken>)barRegistration;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(id)popoverSourceInfoForBarItem:(long long)arg1 ;
-(void)didChangeArrangedBarItems:(id)arg1 ;
-(void)dealloc;
@end

