/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFTVInputControlItem;

@interface HUQuickControlTVInputSourceViewController : HUQuickControlSingleControlViewController

@property (nonatomic,readonly) HFTVInputControlItem * controlItem; 
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)controlToViewValueTransformer;
-(id)_filterInputValues:(id)arg1 ;
-(id)_toPickerViewItems:(id)arg1 ;
-(BOOL)_shouldWriteInputValue:(id)arg1 ;
@end

