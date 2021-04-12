/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)locationCanBeEdited;
-(id)_locationTitle;
-(HFLocationTriggerBuilder *)triggerBuilder;
-(id)initWithTriggerBuilder:(id)arg1 ;
-(BOOL)_locationIsHome;
@end

