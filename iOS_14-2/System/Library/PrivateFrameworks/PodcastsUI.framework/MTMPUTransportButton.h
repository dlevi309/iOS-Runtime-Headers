/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/MTMPUTransportButton.h>
@class MTMPUTransportButtonEventHandler;


@protocol MTMPUTransportButton <NSObject>
@property (nonatomic,readonly) MTMPUTransportButtonEventHandler * transportButtonEventHandler; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) long long transportButtonImageViewContentMode; 
@required
+(id)transportButton;
-(void)prepareForReuse;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
-(BOOL)adjustsImageWhenHighlighted;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MT3)arg1;
-(BOOL)wantsCustomHighlightAppearance;
-(MTMPUTransportButtonEventHandler *)transportButtonEventHandler;
-(long long)transportButtonImageViewContentMode;
-(void)setTransportButtonImageViewContentMode:(long long)arg1;

@end


@class MTMPUTransportButtonEventHandler, CALayer, UIColor, UIImage, NSString;

@interface MTMPUTransportButton : UIButton <MTMPUTransportButton> {

	MTMPUTransportButtonEventHandler* _transportButtonEventHandler;
	CALayer* _selectionIndicatorLayer;
	BOOL _shouldInferColorsFromTintColor;
	BOOL _shouldShowBackgroundForSelectedState;
	UIColor* _regularColor;
	UIColor* _disabledColor;
	UIColor* _highlightedColor;
	UIColor* _selectedColor;
	UIImage* _transportButtonImage;

}

@property (nonatomic,retain) UIColor * regularColor;                                                        //@synthesize regularColor=_regularColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledColor;                                                       //@synthesize disabledColor=_disabledColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedColor;                                                    //@synthesize highlightedColor=_highlightedColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor;                                                       //@synthesize selectedColor=_selectedColor - In the implementation block
@property (assign,nonatomic) BOOL shouldInferColorsFromTintColor;                                           //@synthesize shouldInferColorsFromTintColor=_shouldInferColorsFromTintColor - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBackgroundForSelectedState;                                     //@synthesize shouldShowBackgroundForSelectedState=_shouldShowBackgroundForSelectedState - In the implementation block
@property (nonatomic,retain) UIImage * transportButtonImage;                                                //@synthesize transportButtonImage=_transportButtonImage - In the implementation block
@property (nonatomic,readonly) MTMPUTransportButtonEventHandler * transportButtonEventHandler; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) long long transportButtonImageViewContentMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transportButton;
+(id)defaultRegularColor;
+(id)defaultHighlightedColor;
+(id)defaultDisabledColor;
+(id)defaultSelectedColor;
+(id)_stringForDisplayedSkipInterval:(double)arg1 ;
+(id)skipIntervalImageForInterval:(double)arg1 baseImage:(id)arg2 font:(id)arg3 scale:(double)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)shouldTrack;
-(void)prepareForReuse;
-(void)setDisabledColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(UIColor *)selectedColor;
-(UIColor *)disabledColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(BOOL)isEnabled;
-(UIColor *)highlightedColor;
-(void)setHighlightedColor:(UIColor *)arg1 ;
-(BOOL)shouldShowBackgroundForSelectedState;
-(void)setTransportButtonImage:(UIImage *)arg1 ;
-(void)_updateDisabledTransportButtonImage;
-(void)_updateHighlightedTransportButtonImage;
-(void)_updateRegularTransportButtonImage;
-(void)_updateSelectedTransportButtonImage;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MT3)arg1 ;
-(BOOL)wantsCustomHighlightAppearance;
-(MTMPUTransportButtonEventHandler *)transportButtonEventHandler;
-(long long)transportButtonImageViewContentMode;
-(void)setTransportButtonImageViewContentMode:(long long)arg1 ;
-(void)setRegularColor:(UIColor *)arg1 ;
-(void)setShouldInferColorsFromTintColor:(BOOL)arg1 ;
-(UIColor *)regularColor;
-(BOOL)shouldInferColorsFromTintColor;
-(void)setShouldShowBackgroundForSelectedState:(BOOL)arg1 ;
-(UIImage *)transportButtonImage;
@end

