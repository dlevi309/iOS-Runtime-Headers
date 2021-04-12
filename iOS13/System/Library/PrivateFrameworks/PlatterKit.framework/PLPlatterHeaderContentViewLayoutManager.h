/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/


#import <PlatterKit/PlatterKit-Structs.h>
@class PLPlatterHeaderContentView, NSArray, UILabel, NSDate, UIView, UIButton;

@interface PLPlatterHeaderContentViewLayoutManager : NSObject {

	PLPlatterHeaderContentView* _headerContentView;

}

@property (getter=_shouldReverseLayoutDirection,nonatomic,readonly) BOOL shouldReverseLayoutDirection; 
@property (getter=_heedsHorizontalLayoutMargins,nonatomic,readonly) BOOL heedsHorizontalLayoutMargins; 
@property (getter=_iconButtons,nonatomic,readonly) NSArray * iconButtons; 
@property (getter=_titleLabel,nonatomic,readonly) UILabel * titleLabel; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_dateLabel,nonatomic,readonly) UILabel * dateLabel; 
@property (getter=_utilityView,nonatomic,readonly) UIView * utilityView; 
@property (getter=_utilityButton,nonatomic,readonly) UIButton * utilityButton; 
@property (getter=_layoutMargins,nonatomic,readonly) UIEdgeInsets layoutMargins; 
@property (nonatomic,__weak,readonly) PLPlatterHeaderContentView * headerContentView;                               //@synthesize headerContentView=_headerContentView - In the implementation block
@property (nonatomic,readonly) double contentBaseline; 
+(double)_headerHeightWithFont:(id)arg1 forWidth:(double)arg2 ;
+(double)_titleLabelBaselineOffsetWithFont:(id)arg1 ;
+(double)contentBaselineToBoundsBottomWithFont:(id)arg1 boundsWidth:(double)arg2 scale:(double)arg3 ;
-(id)_date;
-(id)_titleLabel;
-(BOOL)_shouldReverseLayoutDirection;
-(UIEdgeInsets)_layoutMargins;
-(id)_dateLabel;
-(double)headerHeightForWidth:(double)arg1 ;
-(double)_titleLabelBaselineOffset;
-(id)_iconButtons;
-(CGSize)_measuringSizeForWidth:(double)arg1 ;
-(CGRect)_titleLabelBoundsForSize:(CGSize)arg1 withNumberOfLines:(double)arg2 ;
-(id)_utilityView;
-(id)_utilityButton;
-(BOOL)_heedsHorizontalLayoutMargins;
-(id)initWithPlatterHeaderContentView:(id)arg1 ;
-(double)contentBaseline;
-(void)layoutIconButtonsWithScale:(double)arg1 ;
-(void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2 ;
-(void)layoutUtilityButtonWithScale:(double)arg1 ;
-(void)layoutDateLabelWithScale:(double)arg1 ;
-(void)invalidateCachedSizeInfo;
-(PLPlatterHeaderContentView *)headerContentView;
@end

