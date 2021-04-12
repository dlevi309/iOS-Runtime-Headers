/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIView;

@interface NUIContentScrollView : UIScrollView {

	BOOL _canScrollDocumentViewHorizontally;
	BOOL _canScrollDocumentViewVertically;
	UIView* _documentView;
	long long _horizontalAlignment;
	long long _verticalAlignment;

}

@property (nonatomic,retain) UIView * contentView; 
@property (nonatomic,retain) UIView * documentView;                               //@synthesize documentView=_documentView - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                       //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                         //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) BOOL canScrollDocumentViewHorizontally;              //@synthesize canScrollDocumentViewHorizontally=_canScrollDocumentViewHorizontally - In the implementation block
@property (assign,nonatomic) BOOL canScrollDocumentViewVertically;                //@synthesize canScrollDocumentViewVertically=_canScrollDocumentViewVertically - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)initWithDocumentView:(id)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(BOOL)_layoutHeightDependsOnWidth;
-(unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
-(UIView *)documentView;
-(void)setDocumentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(long long)horizontalAlignment;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(long long)verticalAlignment;
-(BOOL)canScrollDocumentViewHorizontally;
-(BOOL)canScrollDocumentViewVertically;
-(void)setCanScrollDocumentViewHorizontally:(BOOL)arg1 ;
-(void)setCanScrollDocumentViewVertically:(BOOL)arg1 ;
-(UIView *)contentView;
-(void)setVerticalAlignment:(long long)arg1 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
@end

