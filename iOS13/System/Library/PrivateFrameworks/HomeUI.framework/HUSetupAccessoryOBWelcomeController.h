/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class HUHomeAccessoryTileView;

@interface HUSetupAccessoryOBWelcomeController : HUCenterFillOBWelcomeController {

	HUHomeAccessoryTileView* _homeAccessoryTileView;

}

@property (nonatomic,readonly) HUHomeAccessoryTileView * homeAccessoryTileView;              //@synthesize homeAccessoryTileView=_homeAccessoryTileView - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> item; 
-(HFItem*<HFServiceLikeItem>)item;
-(double)_contentAspectRatio;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 item:(id)arg4 ;
-(HUHomeAccessoryTileView *)homeAccessoryTileView;
@end

