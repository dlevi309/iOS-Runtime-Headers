/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <QuartzCore/CALayer.h>

@class UIColor, UITraitCollection;

@interface _MKPuckAccuracyLayer : CALayer {

	unsigned long long _mapType;
	UIColor* _tintColor;
	BOOL _stale;
	double _minimumRadius;
	BOOL _externallyHidden;
	BOOL _internallyHidden;
	BOOL _shouldShowAnimationsIfAvailable;
	UIColor* _fullOpacityFillColor;
	double _baseOpacity;
	double _additionalOpacityMultiplier;
	UITraitCollection* _traitCollection;

}

@property (assign,nonatomic) double minimumRadius;                             //@synthesize minimumRadius=_minimumRadius - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                       //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,getter=isStale,nonatomic) BOOL stale;                        //@synthesize stale=_stale - In the implementation block
@property (nonatomic,readonly) double presentationFillOpacity; 
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(void)stopAnimations;
-(void)_updateColors;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(double)minimumRadius;
-(id)init;
-(unsigned long long)mapType;
-(void)setHidden:(BOOL)arg1 ;
-(void)updateLegacyConfiguration;
-(void)setMapType:(unsigned long long)arg1 ;
-(double)presentationFillOpacity;
-(void)setStale:(BOOL)arg1 ;
-(BOOL)isStale;
-(void)setMinimumRadius:(double)arg1 ;
-(void)startAnimationsIfNecessary;
-(void)setFillOpacity:(double)arg1 duration:(double)arg2 ;
-(UIColor *)tintColor;
-(void)setAccuracy:(double)arg1 duration:(double)arg2 ;
@end

