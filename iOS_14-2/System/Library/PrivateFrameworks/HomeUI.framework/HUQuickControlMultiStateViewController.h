/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFMultiStateControlItem;

@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic,readonly) HFMultiStateControlItem * controlItem; 
+(Class)controlItemClass;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)overrideStatusText;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)modelValueDidChange;
-(BOOL)_isCharacteristicTypeRotationDirection;
-(BOOL)_useOverrideStatusText;
-(BOOL)_shouldUseWheelPickerView;
@end

