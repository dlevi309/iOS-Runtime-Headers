/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol NTKComplicationImageView, CLKMonochromeFilterProvider, NTKUtilityFlatComplicationViewDelegate;
@class UIView, NTKColoringLabel, NTKCurvedColoringLabel, UIImageView, NSString;

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView> {

	UIView*<NTKComplicationImageView> _imageView;
	NTKColoringLabel* _label;
	NTKCurvedColoringLabel* _curvedLabel;
	UIImageView* _curvedHighlightView;
	NTKColoringLabel* _activeLabel;
	id<CLKMonochromeFilterProvider> _filterProvider;
	id<NTKUtilityFlatComplicationViewDelegate> _delegate;
	double _textWidthInRadians;

}

@property (assign,nonatomic) double textWidthInRadians;                                               //@synthesize textWidthInRadians=_textWidthInRadians - In the implementation block
@property (assign,nonatomic,__weak) id<NTKUtilityFlatComplicationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double circleRadius; 
@property (assign,nonatomic) double maxAngularWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;                   //@synthesize filterProvider=_filterProvider - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(void)circleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 interior:(BOOL*)arg4 forPlacement:(unsigned long long)arg5 forDevice:(id)arg6 ;
-(id<NTKUtilityFlatComplicationViewDelegate>)delegate;
-(void)setDelegate:(id<NTKUtilityFlatComplicationViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setForegroundColor:(id)arg1 ;
-(void)setPlacement:(unsigned long long)arg1 ;
-(void)setCircleRadius:(double)arg1 ;
-(void)setMaxAngularWidth:(double)arg1 ;
-(double)circleRadius;
-(double)maxAngularWidth;
-(unsigned long long)imagePlacement;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
-(double)textWidthInRadians;
-(void)setShouldUseBackgroundPlatter:(BOOL)arg1 ;
-(void)setUseBlockyHighlightCorners:(BOOL)arg1 ;
-(void)_updateForTemplateChange;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(/*^block*/id)arg1 ;
-(double)_widthThatFits;
-(id)_backgroundPlatterImage;
-(void)_updateContentForMaxSizeChange;
-(void)_updateHighlightViewCornerRadius;
-(void)setTextWidthInRadians:(double)arg1 ;
-(void)_updateLabelMaxWidth;
-(BOOL)_shouldLayoutWithImageView;
-(void)updateTextWidthIfNeeded;
@end

