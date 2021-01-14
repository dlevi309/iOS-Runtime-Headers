/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUIconContentViewDelegate, HFIconDescriptor;
@class UIVisualEffect;

@interface HUIconContentView : UIView {

	BOOL _disableContinuousAnimation;
	UIVisualEffect* _vibrancyEffect;
	id<HUIconContentViewDelegate> _delegate;
	unsigned long long _iconSize;
	double _aspectRatio;
	unsigned long long _displayContext;
	unsigned long long _displayStyle;
	long long _renderingMode;
	id<HFIconDescriptor> _iconDescriptor;
	long long _primaryState;

}

@property (assign,nonatomic) long long renderingMode;                                    //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor;                        //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (assign,nonatomic) long long primaryState;                                     //@synthesize primaryState=_primaryState - In the implementation block
@property (assign,nonatomic) double aspectRatio;                                         //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,retain) UIVisualEffect * vibrancyEffect;                            //@synthesize vibrancyEffect=_vibrancyEffect - In the implementation block
@property (assign,nonatomic,__weak) id<HUIconContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long iconSize;                                //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) unsigned long long displayContext;                          //@synthesize displayContext=_displayContext - In the implementation block
@property (assign,nonatomic) BOOL disableContinuousAnimation;                            //@synthesize disableContinuousAnimation=_disableContinuousAnimation - In the implementation block
@property (nonatomic,readonly) unsigned long long displayStyle;                          //@synthesize displayStyle=_displayStyle - In the implementation block
+(id)iconImageNamed:(id)arg1 withSize:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3 ;
+(Class)iconContentViewClassForIconDescriptor:(id)arg1 ;
-(long long)renderingMode;
-(unsigned long long)displayContext;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUIconContentViewDelegate>)delegate;
-(UIVisualEffect *)vibrancyEffect;
-(void)setRenderingMode:(long long)arg1 ;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(double)aspectRatio;
-(unsigned long long)iconSize;
-(void)setDelegate:(id<HUIconContentViewDelegate>)arg1 ;
-(void)setPrimaryState:(long long)arg1 ;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(long long)primaryState;
-(void)setAspectRatio:(double)arg1 ;
-(void)setVibrancyEffect:(UIVisualEffect *)arg1 ;
-(void)setIconSize:(unsigned long long)arg1 ;
-(void)setDisplayContext:(unsigned long long)arg1 ;
-(unsigned long long)displayStyle;
-(BOOL)wantsManagedVibrancyEffect;
-(id)managedVisualEffectViews;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)invalidateRenderingMode;
-(long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2 ;
-(void)setDisableContinuousAnimation:(BOOL)arg1 ;
-(BOOL)disableContinuousAnimation;
-(BOOL)shouldFlipForRTL;
-(void)_updateOverrideRenderingModeForSubviewsOfView:(id)arg1 ;
@end

