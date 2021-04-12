/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

