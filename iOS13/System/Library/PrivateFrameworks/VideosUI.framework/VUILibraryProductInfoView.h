/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIView;

@interface VUILibraryProductInfoView : UIView {

	NSArray* _infos;
	NSArray* _groupedInfos;
	NSArray* _normalizedGroupedInfos;
	long long _layoutType;
	double _lineSpacing;
	UIView* _headerView;
	UIView* _footerView;
	UIEdgeInsets _headerMargin;
	UIEdgeInsets _footerMargin;

}

@property (nonatomic,readonly) long long maxLineCount; 
@property (nonatomic,readonly) double interitemSpacing; 
@property (nonatomic,readonly) UIEdgeInsets padding; 
@property (nonatomic,copy) NSArray * groupedInfos;                        //@synthesize groupedInfos=_groupedInfos - In the implementation block
@property (nonatomic,copy) NSArray * normalizedGroupedInfos;              //@synthesize normalizedGroupedInfos=_normalizedGroupedInfos - In the implementation block
@property (assign,nonatomic) long long layoutType;                        //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) double lineSpacing;                        //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,retain) UIView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargin;                   //@synthesize headerMargin=_headerMargin - In the implementation block
@property (nonatomic,retain) UIView * footerView;                         //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets footerMargin;                   //@synthesize footerMargin=_footerMargin - In the implementation block
@property (nonatomic,copy) NSArray * infos;                               //@synthesize infos=_infos - In the implementation block
-(double)lineSpacing;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIEdgeInsets)padding;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(NSArray *)infos;
-(void)setInfos:(NSArray *)arg1 ;
-(unsigned long long)_columnCount;
-(long long)layoutType;
-(void)setLayoutType:(long long)arg1 ;
-(double)interitemSpacing;
-(long long)maxLineCount;
-(UIEdgeInsets)headerMargin;
-(void)setHeaderMargin:(UIEdgeInsets)arg1 ;
-(void)setFooterMargin:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)footerMargin;
-(NSArray *)groupedInfos;
-(double)_maxWidthForGroupInfos:(id)arg1 ;
-(void)_layouCellContentView:(id)arg1 inCellBounds:(CGRect)arg2 ;
-(void)setGroupedInfos:(NSArray *)arg1 ;
-(id)_getNormalizedGroupedInfos;
-(NSArray *)normalizedGroupedInfos;
-(double)_sectionInfoWidth;
-(void)setNormalizedGroupedInfos:(NSArray *)arg1 ;
@end

