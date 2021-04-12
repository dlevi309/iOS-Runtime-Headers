/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKitCore/_UIClickInteractionDelegateInternal.h>

@class UIView, UIImageView, UIVisualEffectView, NSArray, _UIClickInteraction, UIImage, UIColor, NSString;

@interface UICoverSheetButton : UIControl <_UIClickInteractionDelegateInternal> {

	UIView* _containerView;
	UIImageView* _contentView;
	UIVisualEffectView* _backgroundEffectView;
	NSArray* _backgroundEffects;
	NSArray* _selectedBackgroundEffects;
	UIView* _backgroundHighlightView;
	_UIClickInteraction* _clickInteraction;
	BOOL _interactive;
	BOOL _didActivateDuringInteraction;
	double _maxForceDuringInteraction;
	double _highlightProgress;
	BOOL _pronounced;
	BOOL _latching;
	UIImage* _image;
	UIImage* _selectedImage;
	UIColor* _selectedTintColor;
	NSString* _localizedAccessoryTitle;
	NSString* _backgroundEffectViewGroupName;
	NSString* _statisticsIdentifier;
	UIEdgeInsets _edgeInsets;

}

@property (assign,getter=isPronounced,nonatomic) BOOL pronounced;                 //@synthesize pronounced=_pronounced - In the implementation block
@property (assign,getter=isLatching,nonatomic) BOOL latching;                     //@synthesize latching=_latching - In the implementation block
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;                             //@synthesize selectedImage=_selectedImage - In the implementation block
@property (nonatomic,retain) UIColor * selectedTintColor;                         //@synthesize selectedTintColor=_selectedTintColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                             //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) NSString * localizedAccessoryTitle;                    //@synthesize localizedAccessoryTitle=_localizedAccessoryTitle - In the implementation block
@property (nonatomic,copy) NSString * backgroundEffectViewGroupName;              //@synthesize backgroundEffectViewGroupName=_backgroundEffectViewGroupName - In the implementation block
@property (nonatomic,copy) NSString * statisticsIdentifier;                       //@synthesize statisticsIdentifier=_statisticsIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)image;
-(BOOL)isPronounced;
-(void)layoutIfNeededAnimated;
-(id)_interactionDurationStat;
-(void)setPronounced:(BOOL)arg1 ;
-(BOOL)isLatching;
-(void)layoutSubviews;
-(NSString *)statisticsIdentifier;
-(id)_firstActivationDurationStat;
-(id)_backgroundEffectsWithBrightness:(double)arg1 ;
-(void)setLocalizedAccessoryTitle:(NSString *)arg1 ;
-(void)_animateEffectUpdateWithProgress:(double)arg1 ended:(BOOL)arg2 ;
-(NSString *)localizedAccessoryTitle;
-(id)_interactionCountStatWithActivation:(BOOL)arg1 ;
-(id)_maxForceStatWithActivation:(BOOL)arg1 ;
-(void)clickInteraction:(id)arg1 didObserveForce:(double)arg2 ;
-(NSString *)backgroundEffectViewGroupName;
-(void)setBackgroundEffectViewGroupName:(NSString *)arg1 ;
-(void)setStatisticsIdentifier:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)_clickInteractionDefaultDriverType:(id)arg1 ;
-(void)clickInteractionDidClickUp:(id)arg1 ;
-(BOOL)clickInteractionShouldBegin:(id)arg1 ;
-(void)clickInteractionDidEnd:(id)arg1 ;
-(id)highlightEffectForClickInteraction:(id)arg1 ;
-(UIImage *)selectedImage;
-(UIColor *)selectedTintColor;
-(void)setLatching:(BOOL)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)setSelectedTintColor:(UIColor *)arg1 ;
@end

