/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HUQuickControlValveToggleView;

@interface HUQuickControlValveToggleViewController : HUQuickControlSingleControlViewController {

	HUQuickControlValveToggleView* _controlView;

}

@property (nonatomic,readonly) HFControlItem*<HFPrimaryStateWriter> controlItem; 
@property (nonatomic,retain) HUQuickControlValveToggleView * controlView;                     //@synthesize controlView=_controlView - In the implementation block
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(HUQuickControlValveToggleView *)controlView;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)setControlView:(HUQuickControlValveToggleView *)arg1 ;
@end

