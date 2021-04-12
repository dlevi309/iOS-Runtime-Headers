/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFTVInputControlItem;

@interface HUQuickControlTVInputSourceViewController : HUQuickControlSingleControlViewController

@property (nonatomic,readonly) HFTVInputControlItem * controlItem; 
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)_filterInputValues:(id)arg1 ;
-(id)_toPickerViewItems:(id)arg1 ;
-(BOOL)_shouldWriteInputValue:(id)arg1 ;
@end

