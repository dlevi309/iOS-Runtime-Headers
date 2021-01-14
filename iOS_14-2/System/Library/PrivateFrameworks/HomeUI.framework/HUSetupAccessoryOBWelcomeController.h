/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HUHomeAccessoryTileView *)homeAccessoryTileView;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 item:(id)arg4 ;
@end

