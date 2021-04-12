/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HFLocationTriggerBuilder;

@interface HULocationTriggerSelectedLocationItem : HFItem {

	HFLocationTriggerBuilder* _triggerBuilder;

}

@property (nonatomic,readonly) HFLocationTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,readonly) BOOL locationCanBeEdited; 
-(id)init;
-(id)_locationTitle;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)locationCanBeEdited;
-(HFLocationTriggerBuilder *)triggerBuilder;
-(id)initWithTriggerBuilder:(id)arg1 ;
-(BOOL)_locationIsHome;
@end

