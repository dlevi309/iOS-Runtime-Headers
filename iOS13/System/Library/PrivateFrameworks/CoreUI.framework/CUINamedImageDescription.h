/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString;

@interface CUINamedImageDescription : NSObject {

	double _scale;
	long long _idiom;
	long long _subtype;
	long long _sizeClassHorizontal;
	long long _sizeClassVertical;
	long long _displayGamut;
	long long _layoutDirection;
	int _blendMode;
	long long _templateRenderingMode;
	long long _imageType;
	SCD_Struct_CS11 _edgeInsets;
	SCD_Struct_CS11 _alignmentEdgeInsets;
	long long _resizingMode;
	int _exifOrientation;
	NSString* _appearanceName;

}

@property (assign,nonatomic) double scale;                                     //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long idiom;                                  //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) long long subtype;                                //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) long long sizeClassHorizontal;                    //@synthesize sizeClassHorizontal=_sizeClassHorizontal - In the implementation block
@property (assign,nonatomic) long long sizeClassVertical;                      //@synthesize sizeClassVertical=_sizeClassVertical - In the implementation block
@property (assign,nonatomic) int blendMode;                                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) long long templateRenderingMode;                  //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,nonatomic) long long imageType;                              //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) SCD_Struct_CS11 edgeInsets;                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) SCD_Struct_CS11 alignmentEdgeInsets;              //@synthesize alignmentEdgeInsets=_alignmentEdgeInsets - In the implementation block
@property (assign,nonatomic) long long resizingMode;                           //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;                              //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (assign,nonatomic) long long displayGamut;                           //@synthesize displayGamut=_displayGamut - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                        //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,copy) NSString * appearanceName;                          //@synthesize appearanceName=_appearanceName - In the implementation block
-(void)dealloc;
-(id)description;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(long long)subtype;
-(void)setEdgeInsets:(SCD_Struct_CS11)arg1 ;
-(SCD_Struct_CS11)edgeInsets;
-(long long)idiom;
-(void)setIdiom:(long long)arg1 ;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(long long)displayGamut;
-(long long)resizingMode;
-(void)setAppearanceName:(NSString *)arg1 ;
-(int)exifOrientation;
-(SCD_Struct_CS11)alignmentEdgeInsets;
-(long long)templateRenderingMode;
-(NSString *)appearanceName;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(void)setAlignmentEdgeInsets:(SCD_Struct_CS11)arg1 ;
-(void)setResizingMode:(long long)arg1 ;
-(void)setImageType:(long long)arg1 ;
-(void)setExifOrientation:(int)arg1 ;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setDisplayGamut:(long long)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(void)setSizeClassHorizontal:(long long)arg1 ;
-(void)setSizeClassVertical:(long long)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(long long)imageType;
-(long long)sizeClassHorizontal;
-(long long)sizeClassVertical;
@end

