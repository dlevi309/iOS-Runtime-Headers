/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSDictionary, UIView, UIVisualEffectView, UIImageView, NSNumber, UIImageSymbolConfiguration;

@interface CKConversationListAccessoryView : UIControl {

	BOOL _imageNeedsEdgeAntiAliasing;
	BOOL _needsVisualEffects;
	BOOL _needsVibrancy;
	NSDictionary* _configStateMap;
	UIView* _colorView;
	UIVisualEffectView* _backgroundView;
	UIVisualEffectView* _vibrancyView;
	UIImageView* _imageView;
	NSNumber* _lastKnownState;

}

@property (nonatomic,retain) NSDictionary * configStateMap;                                          //@synthesize configStateMap=_configStateMap - In the implementation block
@property (assign,nonatomic) BOOL needsVisualEffects;                                                //@synthesize needsVisualEffects=_needsVisualEffects - In the implementation block
@property (assign,nonatomic) BOOL needsVibrancy;                                                     //@synthesize needsVibrancy=_needsVibrancy - In the implementation block
@property (nonatomic,retain) UIView * colorView;                                                     //@synthesize colorView=_colorView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrancyView;                                      //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSNumber * lastKnownState;                                              //@synthesize lastKnownState=_lastKnownState - In the implementation block
@property (nonatomic,retain) UIImageSymbolConfiguration * preferredSymbolConfiguration; 
@property (assign,nonatomic) BOOL imageNeedsEdgeAntiAliasing;                                        //@synthesize imageNeedsEdgeAntiAliasing=_imageNeedsEdgeAntiAliasing - In the implementation block
+(id)defaultStateConfigMap;
+(double)defaultDiameter;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIImageView *)imageView;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIView *)colorView;
-(id)initWithDiameter:(double)arg1 ;
-(void)setTintColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setBlurEffect:(id)arg1 withVibrancyEffectStyle:(long long)arg2 forState:(unsigned long long)arg3 ;
-(void)setBlurEffect:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setImageNeedsEdgeAntiAliasing:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setConfigStateMap:(NSDictionary *)arg1 ;
-(void)setColorView:(UIView *)arg1 ;
-(BOOL)imageNeedsEdgeAntiAliasing;
-(void)_setNeedsVisualAppearanceUpdate;
-(void)_updateVisualAppearanceForCurrentStateIfNeeded;
-(BOOL)needsVibrancy;
-(NSDictionary *)configStateMap;
-(NSNumber *)lastKnownState;
-(void)setLastKnownState:(NSNumber *)arg1 ;
-(id)configForState:(unsigned long long)arg1 ;
-(BOOL)needsVisualEffects;
-(void)setNeedsVibrancy:(BOOL)arg1 ;
-(void)_setConfig:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setNeedsVisualEffects:(BOOL)arg1 ;
-(void)setVibrancyEffectStyle:(long long)arg1 forState:(unsigned long long)arg2 ;
-(UIVisualEffectView *)vibrancyView;
-(void)setVibrancyView:(UIVisualEffectView *)arg1 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(void)setHighlighted:(BOOL)arg1 ;
@end

