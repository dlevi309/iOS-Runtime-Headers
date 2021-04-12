/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@protocol HFHomeKitObject;
@class HUAccessoryDebugModuleController;

@interface HUAccessoryDebugViewController : HUItemTableViewController {

	id<HFHomeKitObject> _homeKitObject;
	HUAccessoryDebugModuleController* _debugModuleController;

}

@property (nonatomic,retain) HUAccessoryDebugModuleController * debugModuleController;              //@synthesize debugModuleController=_debugModuleController - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject;                                   //@synthesize homeKitObject=_homeKitObject - In the implementation block
-(id<HFHomeKitObject>)homeKitObject;
-(id)initWithHomeKitObject:(id)arg1 ;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(void)setDebugModuleController:(HUAccessoryDebugModuleController *)arg1 ;
-(HUAccessoryDebugModuleController *)debugModuleController;
@end

