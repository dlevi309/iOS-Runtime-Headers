/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class UIImageView, _MKBezierPathView, _MKUILabel, UIView, GEOFeatureStyleAttributes, MKWalletMerchantStylingInfo, UIColor, NSString, UIImage;

@interface MKMarkerAnnotationView : MKAnnotationView {

	UIImageView* _shadow;
	_MKBezierPathView* _markerView;
	UIImageView* _glyphImageView;
	_MKUILabel* _glyphLabel;
	_MKBezierPathView* _selectedMarkerView;
	UIImageView* _selectedGlyphImageView;
	_MKUILabel* _selectedGlyphLabel;
	_MKBezierPathView* _selectedDotView;
	UIView* _contentMaskView;
	GEOFeatureStyleAttributes* _customStyleAttributes;
	MKWalletMerchantStylingInfo* _walletMerchantStylingInfo;
	BOOL _isObserving;
	BOOL _animatesWhenAdded;
	UIColor* _markerTintColor;
	UIColor* _glyphTintColor;
	NSString* _glyphText;
	UIImage* _glyphImage;
	UIImage* _selectedGlyphImage;
	UIColor* _markerStrokeTintColor;
	double _markerStrokeWidth;

}

@property (setter=_setWalletMerchantStylingInfo:,getter=_walletMerchantStylingInfo,nonatomic,retain) MKWalletMerchantStylingInfo * walletMerchantStylingInfo; 
@property (nonatomic,copy) UIColor * markerStrokeTintColor;                                                                                                                //@synthesize markerStrokeTintColor=_markerStrokeTintColor - In the implementation block
@property (assign,nonatomic) double markerStrokeWidth;                                                                                                                     //@synthesize markerStrokeWidth=_markerStrokeWidth - In the implementation block
@property (nonatomic,retain) UIView * selectedContentView; 
@property (setter=_setStyleAttributes:,getter=_styleAttributes,nonatomic,retain) GEOFeatureStyleAttributes * styleAttributes;                                              //@synthesize customStyleAttributes=_customStyleAttributes - In the implementation block
@property (assign,nonatomic) long long titleVisibility; 
@property (assign,nonatomic) long long subtitleVisibility; 
@property (nonatomic,copy) UIColor * markerTintColor;                                                                                                                      //@synthesize markerTintColor=_markerTintColor - In the implementation block
@property (nonatomic,copy) UIColor * glyphTintColor;                                                                                                                       //@synthesize glyphTintColor=_glyphTintColor - In the implementation block
@property (nonatomic,copy) NSString * glyphText;                                                                                                                           //@synthesize glyphText=_glyphText - In the implementation block
@property (nonatomic,copy) UIImage * glyphImage;                                                                                                                           //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,copy) UIImage * selectedGlyphImage;                                                                                                                   //@synthesize selectedGlyphImage=_selectedGlyphImage - In the implementation block
@property (assign,nonatomic) BOOL animatesWhenAdded;                                                                                                                       //@synthesize animatesWhenAdded=_animatesWhenAdded - In the implementation block
+(Class)_mapkitLeafClass;
+(float)_defaultDisplayPriority;
-(void)prepareForDisplay;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)canShowCallout;
-(BOOL)_hasDataRequiringCallout;
-(long long)_currentMarkerState;
-(void)_updateContentForState:(long long)arg1 ;
-(id)_effectiveMarkerTintColorForState:(long long)arg1 ;
-(UIView *)selectedContentView;
-(void)_unhideForDisplay;
-(void)_updateContentForState:(long long)arg1 forceUpdate:(BOOL)arg2 ;
-(id)_effectiveMarkerStrokeTintColorForState:(long long)arg1 ;
-(id)_effectiveGlyphTintColorForState:(long long)arg1 ;
-(double)_effectiveMarkerStrokeWidthForState:(long long)arg1 ;
-(id)_effectiveGlyphText;
-(id)_effectiveGlyphImageForState:(long long)arg1 isSystemProvided:(BOOL*)arg2 ;
-(void)setSelectedContentView:(UIView *)arg1 ;
-(void)_setupNormalViewsIfNeeded;
-(SCD_Struct_MK13)_metricsForState:(long long)arg1 ;
-(void)_setupSelectedViewsIfNeededUsesCallout:(BOOL)arg1 ;
-(void)_configureViewsForState:(long long)arg1 usesCallout:(BOOL)arg2 animated:(BOOL)arg3 ;
-(double)_effectiveShadowAlphaForState:(long long)arg1 ;
-(void)setGlyphText:(NSString *)arg1 ;
-(void)_setShadowAlpha:(double)arg1 transform:(CGAffineTransform)arg2 duration:(double)arg3 ;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(long long)_stateForIsSelected:(BOOL)arg1 ;
-(id)_styleAttributes;
-(void)_configureAnimated:(BOOL)arg1 fromState:(long long)arg2 toState:(long long)arg3 ;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
-(UIColor *)markerTintColor;
-(void)setMarkerTintColor:(UIColor *)arg1 ;
-(void)_setStyleAttributes:(id)arg1 ;
-(void)setMarkerStrokeTintColor:(UIColor *)arg1 ;
-(void)setMarkerStrokeWidth:(double)arg1 ;
-(void)setGlyphTintColor:(UIColor *)arg1 ;
-(void)setTitleVisibility:(long long)arg1 ;
-(void)setSubtitleVisibility:(long long)arg1 ;
-(UIColor *)glyphTintColor;
-(void)_didDragWithVelocity:(CGPoint)arg1 ;
-(BOOL)_shouldDeselectWhenDragged;
-(BOOL)isProvidingCustomFeature;
-(id)_effectiveSubtitlesIsCollidable:(BOOL*)arg1 ;
-(BOOL)animatesWhenAdded;
-(void)setAnimatesWhenAdded:(BOOL)arg1 ;
-(UIColor *)markerStrokeTintColor;
-(UIEdgeInsets)alignmentRectInsets;
-(double)markerStrokeWidth;
-(id)_walletMerchantStylingInfo;
-(void)_setWalletMerchantStylingInfo:(id)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UIImage *)glyphImage;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)glyphText;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)selectedGlyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)prepareForSnapshotting;
-(void)setSelectedGlyphImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end

