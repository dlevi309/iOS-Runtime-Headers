/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUDataAnalyticsModuleControllerDelegate;
@interface HUDataAnalyticsModuleController : HUItemTableModuleController {

	id<HUDataAnalyticsModuleControllerDelegate> _dataAnalyticsModuleControllerDelegate;

}

@property (assign,nonatomic,__weak) id<HUDataAnalyticsModuleControllerDelegate> dataAnalyticsModuleControllerDelegate;              //@synthesize dataAnalyticsModuleControllerDelegate=_dataAnalyticsModuleControllerDelegate - In the implementation block
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)module;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(id<HUDataAnalyticsModuleControllerDelegate>)dataAnalyticsModuleControllerDelegate;
-(void)setDataAnalyticsModuleControllerDelegate:(id<HUDataAnalyticsModuleControllerDelegate>)arg1 ;
@end

