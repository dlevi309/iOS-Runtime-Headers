/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIColor;

@interface CAMZoomFactorLabel : UIView {

	BOOL _showZoomFactorSymbol;
	BOOL _useLeadingZero;
	double _zoomFactor;
	NSString* _contentSizeCategory;
	UILabel* __label;

}

@property (nonatomic,readonly) UILabel * _label;                        //@synthesize _label=__label - In the implementation block
@property (assign,nonatomic) double zoomFactor;                         //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) BOOL showZoomFactorSymbol;                 //@synthesize showZoomFactorSymbol=_showZoomFactorSymbol - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) BOOL useLeadingZero;                       //@synthesize useLeadingZero=_useLeadingZero - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
-(UILabel *)_label;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabelText;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(double)zoomFactor;
-(NSString *)contentSizeCategory;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)setZoomFactor:(double)arg1 ;
-(UIEdgeInsets)_labelInsets;
-(void)_updateFont;
-(BOOL)showZoomFactorSymbol;
-(BOOL)useLeadingZero;
-(void)setUseLeadingZero:(BOOL)arg1 ;
-(void)setShowZoomFactorSymbol:(BOOL)arg1 ;
@end

