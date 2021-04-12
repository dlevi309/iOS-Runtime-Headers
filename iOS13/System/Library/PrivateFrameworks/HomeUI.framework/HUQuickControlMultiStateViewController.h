/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFMultiStateControlItem;

@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic,readonly) HFMultiStateControlItem * controlItem; 
+(Class)controlItemClass;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)overrideStatusText;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)controlToViewValueTransformer;
-(void)modelValueDidChange;
-(BOOL)_isCharacteristicTypeRotationDirection;
-(BOOL)_useOverrideStatusText;
-(BOOL)_shouldUseWheelPickerView;
@end

