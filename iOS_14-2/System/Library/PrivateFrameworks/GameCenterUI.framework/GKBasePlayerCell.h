/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class UILabel, GKDashboardPlayerPhotoView, NSDictionary, GKPlayer;

@interface GKBasePlayerCell : GKCollectionViewCell {

	UILabel* _nameLabel;
	GKDashboardPlayerPhotoView* _iconView;
	NSDictionary* _metricsOverrides;

}

@property (nonatomic,retain) GKPlayer * player; 
@property (nonatomic,retain) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKDashboardPlayerPhotoView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsOverrides;                    //@synthesize metricsOverrides=_metricsOverrides - In the implementation block
+(void)initialize;
+(id)phoneMetrics;
+(id)itemHeightListForIdiom:(long long)arg1 ;
+(id)padMetrics;
+(double)defaultRowHeight;
+(id)itemHeightList;
+(BOOL)requiresConstraintBasedLayout;
-(void)_UIAppearance_setMetricsOverrides:(id)arg1 ;
-(GKPlayer *)player;
-(id)popoverSourceView;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMetricsOverrides:(NSDictionary *)arg1 ;
-(BOOL)canRemoveItem;
-(NSDictionary *)metricsOverrides;
-(void)prepareForReuse;
-(GKDashboardPlayerPhotoView *)iconView;
-(void)setIconView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)didUpdateModel;
-(CGRect)alignmentRectForText;
-(void)setRepresentedItem:(id)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)dealloc;
@end

