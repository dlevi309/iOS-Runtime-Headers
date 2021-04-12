/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUMediaServiceSettingsItemModuleControllerDelegate;
@interface HUMediaServiceSettingsItemModuleController : HUItemTableModuleController {

	id<HUMediaServiceSettingsItemModuleControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUMediaServiceSettingsItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HUMediaServiceSettingsItemModuleControllerDelegate>)delegate;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)setDelegate:(id<HUMediaServiceSettingsItemModuleControllerDelegate>)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
@end

