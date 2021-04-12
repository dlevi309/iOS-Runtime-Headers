/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UICollectionViewCell, GKDashboardPlayerPhotoView, UIView, GKPlayer;

@interface GKDashboardPlayerShadowView : UIView {

	UICollectionViewCell* _parentCell;
	GKDashboardPlayerPhotoView* _photoView;

}

@property (nonatomic,readonly) UIView * parentView; 
@property (nonatomic,retain) GKPlayer * player; 
@property (assign,nonatomic) UICollectionViewCell * parentCell;                   //@synthesize parentCell=_parentCell - In the implementation block
@property (nonatomic,readonly) BOOL isUsingPlaceholder; 
@property (nonatomic,retain) GKDashboardPlayerPhotoView * photoView;              //@synthesize photoView=_photoView - In the implementation block
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupPhoto;
-(UICollectionViewCell *)parentCell;
-(void)setParentCell:(UICollectionViewCell *)arg1 ;
-(UIView *)parentView;
-(void)layoutSubviews;
-(void)setPhotoView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)awakeFromNib;
-(void)invalidatePhoto;
-(BOOL)isUsingPlaceholder;
-(GKDashboardPlayerPhotoView *)photoView;
@end

