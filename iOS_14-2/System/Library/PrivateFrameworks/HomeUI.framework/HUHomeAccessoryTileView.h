/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, HUGridServiceCell;

@interface HUHomeAccessoryTileView : UIView {

	BOOL _iconOnlyTile;
	UIImageView* _homeView;
	HUGridServiceCell* _tileView;

}

@property (nonatomic,readonly) UIImageView * homeView;                       //@synthesize homeView=_homeView - In the implementation block
@property (nonatomic,readonly) HUGridServiceCell * tileView;                 //@synthesize tileView=_tileView - In the implementation block
@property (nonatomic,readonly) BOOL iconOnlyTile;                            //@synthesize iconOnlyTile=_iconOnlyTile - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> item; 
@property (nonatomic,readonly) double aspectRatio; 
-(HFItem*<HFServiceLikeItem>)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(double)aspectRatio;
-(void)layoutSubviews;
-(HUGridServiceCell *)tileView;
-(UIImageView *)homeView;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 iconOnlyTile:(BOOL)arg3 ;
-(BOOL)iconOnlyTile;
-(id)initWithFrame:(CGRect)arg1 categoryType:(id)arg2 ;
@end

