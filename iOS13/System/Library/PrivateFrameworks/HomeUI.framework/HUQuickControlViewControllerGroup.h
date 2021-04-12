/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HUQuickControlViewController, NSSet;

@interface HUQuickControlViewControllerGroup : NSObject {

	HUQuickControlViewController* _primaryViewController;
	NSSet* _alternateViewControllers;

}

@property (nonatomic,readonly) HUQuickControlViewController * primaryViewController;              //@synthesize primaryViewController=_primaryViewController - In the implementation block
@property (nonatomic,readonly) NSSet * alternateViewControllers;                                  //@synthesize alternateViewControllers=_alternateViewControllers - In the implementation block
-(HUQuickControlViewController *)primaryViewController;
-(NSSet *)alternateViewControllers;
-(id)initWithPrimaryViewController:(id)arg1 alternateViewControllers:(id)arg2 ;
@end

