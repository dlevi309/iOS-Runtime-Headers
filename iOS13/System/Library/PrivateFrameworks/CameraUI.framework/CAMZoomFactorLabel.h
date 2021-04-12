/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(UILabel *)_label;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(UIColor *)textColor;
-(double)zoomFactor;
-(void)_updateFont;
-(void)_updateLabelText;
-(void)setZoomFactor:(double)arg1 ;
-(UIEdgeInsets)_labelInsets;
-(BOOL)showZoomFactorSymbol;
-(BOOL)useLeadingZero;
-(void)setUseLeadingZero:(BOOL)arg1 ;
-(void)setShowZoomFactorSymbol:(BOOL)arg1 ;
@end

