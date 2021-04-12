/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, HUGridServiceCell;

@interface HUHomeAccessoryTileView : UIView {

	UIImageView* _homeView;
	HUGridServiceCell* _tileView;

}

@property (nonatomic,readonly) UIImageView * homeView;                       //@synthesize homeView=_homeView - In the implementation block
@property (nonatomic,readonly) HUGridServiceCell * tileView;                 //@synthesize tileView=_tileView - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> item; 
@property (nonatomic,readonly) double aspectRatio; 
-(HFItem*<HFServiceLikeItem>)item;
-(double)aspectRatio;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithItem:(id)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HUGridServiceCell *)tileView;
-(UIImageView *)homeView;
@end

