/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSliderValueTableViewCellDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUStepperCellDelegate.h>

@protocol HUAccessorySettingsItemModuleControllerDelegate;
@class NSMapTable, NSMutableSet, HUAccessorySettingsItemModule, NSString;

@interface HUAccessorySettingsItemModuleController : HUItemTableModuleController <HUSliderValueTableViewCellDelegate, HUSwitchCellDelegate, HUStepperCellDelegate> {

	id<HUAccessorySettingsItemModuleControllerDelegate> _delegate;
	NSMapTable* _cellToItemMap;
	NSMutableSet* _registeredButtonFutures;

}

@property (assign,nonatomic,__weak) id<HUAccessorySettingsItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMapTable * cellToItemMap;                                                                 //@synthesize cellToItemMap=_cellToItemMap - In the implementation block
@property (retain) NSMutableSet * registeredButtonFutures;                                                     //@synthesize registeredButtonFutures=_registeredButtonFutures - In the implementation block
@property (nonatomic,readonly) HUAccessorySettingsItemModule * module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUAccessorySettingsItemModuleControllerDelegate>)delegate;
-(void)setDelegate:(id<HUAccessorySettingsItemModuleControllerDelegate>)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(NSMapTable *)cellToItemMap;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2 ;
-(void)setCellToItemMap:(NSMapTable *)arg1 ;
-(id)initWithModule:(id)arg1 delegate:(id)arg2 ;
-(void)stepperCell:(id)arg1 steppedToValue:(id)arg2 ;
-(void)setRegisteredButtonFutures:(NSMutableSet *)arg1 ;
-(void)_setupCellAccessoryType:(id)arg1 forItem:(id)arg2 withKey:(id)arg3 ;
-(void)_registerButtonActionHandler:(id)arg1 item:(id)arg2 ;
-(void)_setupSliderCell:(id)arg1 forMinKey:(id)arg2 maxKey:(id)arg3 ;
-(void)_handleButtonPress:(id)arg1 ;
-(void)_selectOptionItem:(id)arg1 ;
-(void)_updateSwitchSettingItem:(id)arg1 withValue:(id)arg2 ;
-(NSMutableSet *)registeredButtonFutures;
@end

