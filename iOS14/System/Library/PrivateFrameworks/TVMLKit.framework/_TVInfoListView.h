/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)footerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMaxLineCount:(long long)arg1 ;
-(double)interitemSpacing;
-(double)lineSpacing;
-(long long)maxLineCount;
-(NSArray *)infos;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLineSpacing:(double)arg1 ;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setInfos:(NSArray *)arg1 ;
-(UIView *)headerView;
-(void)setInteritemSpacing:(double)arg1 ;
-(double)_maxWidthForGroupInfos:(id)arg1 ;
-(void)_layouCellContentView:(id)arg1 inCellBounds:(CGRect)arg2 ;
-(NSArray *)groupedInfos;
-(void)setGroupedInfos:(NSArray *)arg1 ;
@end

