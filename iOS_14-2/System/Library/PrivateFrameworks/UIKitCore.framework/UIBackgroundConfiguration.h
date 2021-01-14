/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBackgroundConfigurationInternal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIView, UIColor, UIVisualEffect, NSString;

@interface UIBackgroundConfiguration : NSObject <_UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding> {

	struct {
		unsigned hasCustomizedCustomView : 1;
		unsigned hasCustomizedCornerRadius : 1;
		unsigned hasCustomizedBackgroundInsets : 1;
		unsigned hasCustomizedEdgesAddingLayoutMarginsToBackgroundInsets : 1;
		unsigned hasCustomizedBackgroundColor : 1;
		unsigned hasCustomizedBackgroundColorTransformer : 1;
		unsigned hasCustomizedVisualEffect : 1;
		unsigned hasCustomizedStrokeColor : 1;
		unsigned hasCustomizedStrokeColorTransformer : 1;
		unsigned hasCustomizedStrokeWidth : 1;
		unsigned hasCustomizedStrokeOutset : 1;
	}  _configurationFlags;
	UIView* _customView;
	double _cornerRadius;
	unsigned long long _edgesAddingLayoutMarginsToBackgroundInsets;
	UIColor* _backgroundColor;
	/*^block*/id _backgroundColorTransformer;
	UIVisualEffect* _visualEffect;
	UIColor* _strokeColor;
	/*^block*/id _strokeColorTransformer;
	double _strokeWidth;
	double _strokeOutset;
	long long _defaultStyle;
	long long _backgroundColorTransformerIdentifier;
	long long _strokeColorTransformerIdentifier;
	unsigned long long _maskedCorners;
	long long _shadowType;
	NSDirectionalEdgeInsets _backgroundInsets;

}

@property (nonatomic,retain) UIView * customView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) NSDirectionalEdgeInsets backgroundInsets; 
@property (assign,nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,copy) id backgroundColorTransformer; 
@property (nonatomic,copy) UIVisualEffect * visualEffect; 
@property (nonatomic,retain) UIColor * strokeColor; 
@property (nonatomic,copy) id strokeColorTransformer; 
@property (assign,nonatomic) double strokeWidth; 
@property (assign,nonatomic) double strokeOutset; 
@property (assign,setter=_setMaskedCorners:,getter=_maskedCorners,nonatomic) unsigned long long maskedCorners;              //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,setter=_setCornerRadius:,nonatomic) double _cornerRadius;                                                 //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,setter=_setShadowType:,nonatomic) long long _shadowType;                                                  //@synthesize shadowType=_shadowType - In the implementation block
@property (getter=_hasBackgroundColor,nonatomic,readonly) BOOL hasBackgroundColor; 
@property (getter=_hasStroke,nonatomic,readonly) BOOL hasStroke; 
@property (getter=_hasBackgroundFill,nonatomic,readonly) BOOL hasBackgroundFill; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)listAccompaniedSidebarCellConfiguration;
+(id)listGroupedHeaderFooterConfiguration;
+(id)listPlainHeaderFooterConfiguration;
+(id)listSidebarHeaderConfiguration;
+(id)listGroupedCellConfiguration;
+(id)listSidebarCellConfiguration;
+(id)listPlainCellConfiguration;
+(id)clearConfiguration;
-(void)setVisualEffect:(UIVisualEffect *)arg1 ;
-(UIColor *)strokeColor;
-(UIVisualEffect *)visualEffect;
-(unsigned long long)_maskedCorners;
-(id)resolvedBackgroundColorForTintColor:(id)arg1 ;
-(NSDirectionalEdgeInsets)backgroundInsets;
-(BOOL)_hasStroke;
-(void)_setMaskedCorners:(unsigned long long)arg1 ;
-(id)resolvedStrokeColorForTintColor:(id)arg1 ;
-(double)_cornerRadius;
-(BOOL)_hasBackgroundFill;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setEdgesAddingLayoutMarginsToBackgroundInsets:(unsigned long long)arg1 ;
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(void)_setShadowType:(long long)arg1 ;
-(BOOL)_hasBackgroundColor;
-(BOOL)_backgroundFillIsEqual:(id)arg1 withTintColor:(id)arg2 ;
-(void)setBackgroundInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSString *)description;
-(UIView *)customView;
-(id)_updatedConfigurationForState:(id)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(double)strokeWidth;
-(void)setBackgroundColorTransformer:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)updatedConfigurationForState:(id)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setStrokeOutset:(double)arg1 ;
-(long long)_shadowType;
-(void)setCornerRadius:(double)arg1 ;
-(id)backgroundColorTransformer;
-(void)setStrokeColorTransformer:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)strokeColorTransformer;
-(void)setStrokeWidth:(double)arg1 ;
-(double)strokeOutset;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)edgesAddingLayoutMarginsToBackgroundInsets;
@end

