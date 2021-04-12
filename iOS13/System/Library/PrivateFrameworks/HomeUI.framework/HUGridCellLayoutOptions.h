/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUGridDisplayOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HUGridCellBackgroundDisplayOptions, UIVisualEffect, UIFont, NSString;

@interface HUGridCellLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying> {

	BOOL _drawsBorderForOnState;
	unsigned long long _contentColorStyle;
	HUGridCellBackgroundDisplayOptions* _backgroundDisplayOptions;
	UIVisualEffect* _vibrancyEffect;
	UIVisualEffect* _secondaryVibrancyEffect;
	double _secondaryContentDimmingFactor;
	UIFont* _font;
	double _iconSize;
	long long _iconContentMode;
	double _cellInnerMargin;
	double _cellCornerRadius;
	double _cellScaleFactor;
	long long _cellSizeSubclass;

}

@property (nonatomic,copy) HUGridCellBackgroundDisplayOptions * backgroundDisplayOptions;              //@synthesize backgroundDisplayOptions=_backgroundDisplayOptions - In the implementation block
@property (nonatomic,retain) UIVisualEffect * vibrancyEffect;                                          //@synthesize vibrancyEffect=_vibrancyEffect - In the implementation block
@property (nonatomic,retain) UIVisualEffect * secondaryVibrancyEffect;                                 //@synthesize secondaryVibrancyEffect=_secondaryVibrancyEffect - In the implementation block
@property (assign,nonatomic) double secondaryContentDimmingFactor;                                     //@synthesize secondaryContentDimmingFactor=_secondaryContentDimmingFactor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                            //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double iconSize;                                                          //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) long long iconContentMode;                                                //@synthesize iconContentMode=_iconContentMode - In the implementation block
@property (assign,nonatomic) double cellInnerMargin;                                                   //@synthesize cellInnerMargin=_cellInnerMargin - In the implementation block
@property (assign,nonatomic) double cellCornerRadius;                                                  //@synthesize cellCornerRadius=_cellCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL drawsBorderForOnState;                                               //@synthesize drawsBorderForOnState=_drawsBorderForOnState - In the implementation block
@property (assign,nonatomic) double cellScaleFactor;                                                   //@synthesize cellScaleFactor=_cellScaleFactor - In the implementation block
@property (nonatomic,readonly) long long cellSizeSubclass;                                             //@synthesize cellSizeSubclass=_cellSizeSubclass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long contentColorStyle;                                     //@synthesize contentColorStyle=_contentColorStyle - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(double)iconSize;
-(void)setIconSize:(double)arg1 ;
-(void)setVibrancyEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)vibrancyEffect;
-(HUGridCellBackgroundDisplayOptions *)backgroundDisplayOptions;
-(void)setSecondaryVibrancyEffect:(UIVisualEffect *)arg1 ;
-(void)setCellInnerMargin:(double)arg1 ;
-(unsigned long long)contentColorStyle;
-(void)setContentColorStyle:(unsigned long long)arg1 ;
-(double)secondaryContentDimmingFactor;
-(double)cellCornerRadius;
-(double)cellInnerMargin;
-(UIVisualEffect *)secondaryVibrancyEffect;
-(void)setSecondaryContentDimmingFactor:(double)arg1 ;
-(BOOL)drawsBorderForOnState;
-(long long)iconContentMode;
-(void)setDrawsBorderForOnState:(BOOL)arg1 ;
-(long long)cellSizeSubclass;
-(id)initWithCellSizeSubclass:(long long)arg1 ;
-(void)setBackgroundDisplayOptions:(HUGridCellBackgroundDisplayOptions *)arg1 ;
-(void)setCellCornerRadius:(double)arg1 ;
-(void)setCellScaleFactor:(double)arg1 ;
-(void)setIconContentMode:(long long)arg1 ;
-(double)cellScaleFactor;
@end

