/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXViewSpec.h>

@class UIColor, UIFont, NSDictionary;

@interface PXLabelSpec : PXViewSpec {

	BOOL _adjustsFontSizeToFitWidth;
	BOOL _allowTruncation;
	UIColor* _textColor;
	UIFont* _font;
	NSDictionary* _textAttributes;
	NSDictionary* _fallbackTextAttributes;
	long long _textAlignment;
	unsigned long long _numberOfLines;
	long long _verticalAlignment;
	long long _capitalization;
	long long _fallbackCapitalization;
	double _minimumScaleFactor;
	double _minimumTruncatedScaleFactor;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,copy) UIColor * textColor;                                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIFont * font;                                      //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes;                      //@synthesize textAttributes=_textAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * fallbackTextAttributes;              //@synthesize fallbackTextAttributes=_fallbackTextAttributes - In the implementation block
@property (assign,nonatomic) long long textAlignment;                          //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines;                 //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                      //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) long long capitalization;                         //@synthesize capitalization=_capitalization - In the implementation block
@property (assign,nonatomic) long long fallbackCapitalization;                 //@synthesize fallbackCapitalization=_fallbackCapitalization - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth;                   //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                        //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL allowTruncation;                             //@synthesize allowTruncation=_allowTruncation - In the implementation block
@property (assign,nonatomic) double minimumTruncatedScaleFactor;               //@synthesize minimumTruncatedScaleFactor=_minimumTruncatedScaleFactor - In the implementation block
+(id)_memoriesLabelSpecForContext:(SCD_Struct_PX95)arg1 ;
+(id)memoriesLabelSpecForLabelKind:(long long)arg1 tileKind:(long long)arg2 specSet:(long long)arg3 variant:(long long)arg4 boundedBy:(CGRect)arg5 shouldScale:(BOOL)arg6 ;
+(id)memoriesLabelSpecForLabelKind:(long long)arg1 descriptor:(PXViewSpecDescriptor)arg2 featureSpec:(id)arg3 ;
+(id)memoriesLabelSpecForLabelKind:(long long)arg1 tileKind:(long long)arg2 featureSpec:(id)arg3 boundedByRect:(CGRect)arg4 ;
+(id)memoriesLabelSpecForLabelKind:(long long)arg1 tileKind:(long long)arg2 gadgetSpec:(id)arg3 boundedByRect:(CGRect)arg4 ;
+(id)px_headerTitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2 ;
+(id)px_headerSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)textColor;
-(id)init;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(double)minimumTruncatedScaleFactor;
-(UIEdgeInsets)contentInsets;
-(BOOL)adjustsFontSizeToFitWidth;
-(long long)capitalization;
-(void)setFallbackCapitalization:(long long)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSDictionary *)textAttributes;
-(BOOL)allowTruncation;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)setCapitalization:(long long)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)setMinimumTruncatedScaleFactor:(double)arg1 ;
-(void)setAllowTruncation:(BOOL)arg1 ;
-(unsigned long long)hash;
-(long long)verticalAlignment;
-(long long)fallbackCapitalization;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setFallbackTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)fallbackTextAttributes;
-(void)setVerticalAlignment:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfLines;
-(BOOL)isEqual:(id)arg1 ;
-(UIFont *)font;
-(double)minimumScaleFactor;
@end

