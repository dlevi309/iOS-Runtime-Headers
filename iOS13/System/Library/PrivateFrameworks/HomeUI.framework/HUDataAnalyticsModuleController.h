/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUDataAnalyticsModuleControllerDelegate;
@interface HUDataAnalyticsModuleController : HUItemTableModuleController {

	id<HUDataAnalyticsModuleControllerDelegate> _dataAnalyticsModuleControllerDelegate;

}

@property (assign,nonatomic,__weak) id<HUDataAnalyticsModuleControllerDelegate> dataAnalyticsModuleControllerDelegate;              //@synthesize dataAnalyticsModuleControllerDelegate=_dataAnalyticsModuleControllerDelegate - In the implementation block
-(id)module;
-(id)initWithModule:(id)arg1 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(id<HUDataAnalyticsModuleControllerDelegate>)dataAnalyticsModuleControllerDelegate;
-(void)setDataAnalyticsModuleControllerDelegate:(id<HUDataAnalyticsModuleControllerDelegate>)arg1 ;
@end

