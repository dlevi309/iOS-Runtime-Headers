/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface _TVInfoListView : UIView {

	long long _maxLineCount;
	double _lineSpacing;
	double _interitemSpacing;
	UIView* _headerView;
	UIView* _footerView;
	NSArray* _infos;
	NSArray* _groupedInfos;

}

@property (assign,nonatomic) long long maxLineCount;               //@synthesize maxLineCount=_maxLineCount - In the implementation block
@property (assign,nonatomic) double lineSpacing;                   //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double interitemSpacing;              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,retain) UIView * headerView;                  //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                  //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,copy) NSArray * infos;                        //@synthesize infos=_infos - In the implementation block
@property (nonatomic,copy) NSArray * groupedInfos;                 //@synthesize groupedInfos=_groupedInfos - In the implementation block
+(id)infoListViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(NSArray *)infos;
-(void)setInfos:(NSArray *)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(long long)maxLineCount;
-(void)setMaxLineCount:(long long)arg1 ;
-(NSArray *)groupedInfos;
-(double)_maxWidthForGroupInfos:(id)arg1 ;
-(void)_layouCellContentView:(id)arg1 inCellBounds:(CGRect)arg2 ;
-(void)setGroupedInfos:(NSArray *)arg1 ;
@end

