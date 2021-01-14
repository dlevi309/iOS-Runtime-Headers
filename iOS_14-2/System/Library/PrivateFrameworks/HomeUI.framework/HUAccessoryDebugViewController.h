/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

