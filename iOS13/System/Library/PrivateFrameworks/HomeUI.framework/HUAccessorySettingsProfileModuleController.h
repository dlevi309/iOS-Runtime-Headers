/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/MCProfileViewControllerDelegate.h>

@protocol HUAccessorySettingsProfileModuleControllerDelegate;
@class HUAccessorySettingsProfileModule, NSString;

@interface HUAccessorySettingsProfileModuleController : HUItemTableModuleController <MCProfileViewControllerDelegate> {

	id<HUAccessorySettingsProfileModuleControllerDelegate> _delegate;

}

@property (nonatomic,readonly) HUAccessorySettingsProfileModule * module; 
@property (assign,nonatomic,__weak) id<HUAccessorySettingsProfileModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUAccessorySettingsProfileModuleControllerDelegate>)delegate;
-(void)setDelegate:(id<HUAccessorySettingsProfileModuleControllerDelegate>)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
@end

