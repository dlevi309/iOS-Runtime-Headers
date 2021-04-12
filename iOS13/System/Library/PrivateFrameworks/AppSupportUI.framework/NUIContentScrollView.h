/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class NUIMultilineSizingHelper, UIView;

@interface NUIContentScrollView : UIScrollView {

	NUIMultilineSizingHelper* _multilineSizeHelper;
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
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setDocumentView:(UIView *)arg1 ;
-(UIView *)documentView;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(id)initWithDocumentView:(id)arg1 ;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(BOOL)canScrollDocumentViewHorizontally;
-(BOOL)canScrollDocumentViewVertically;
-(void)setCanScrollDocumentViewHorizontally:(BOOL)arg1 ;
-(void)setCanScrollDocumentViewVertically:(BOOL)arg1 ;
@end

