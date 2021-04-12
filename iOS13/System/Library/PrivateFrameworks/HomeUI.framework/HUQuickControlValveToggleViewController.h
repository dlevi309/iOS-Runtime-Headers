/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)controlToViewValueTransformer;
-(void)setControlView:(HUQuickControlValveToggleView *)arg1 ;
@end

