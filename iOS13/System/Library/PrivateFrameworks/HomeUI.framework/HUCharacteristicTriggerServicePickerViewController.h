/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUInstructionsTableViewController.h>

@class HUCharacteristicTriggerServicePickerContentViewController, HFCharacteristicTriggerBuilder;

@interface HUCharacteristicTriggerServicePickerViewController : HUInstructionsTableViewController

@property (nonatomic,readonly) HUCharacteristicTriggerServicePickerContentViewController * servicePickerContentViewController; 
@property (nonatomic,readonly) HFCharacteristicTriggerBuilder * characteristicTriggerBuilder; 
@property (nonatomic,readonly) unsigned long long mode; 
@property (nonatomic,readonly) unsigned long long source; 
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate; 
+(BOOL)adoptsDefaultGridLayoutMargins;
+(BOOL)canPickServicesFromSource:(unsigned long long)arg1 home:(id)arg2 ;
+(unsigned long long)sourceForCharacteristicTriggerBuilder:(id)arg1 ;
-(id<HUTriggerEditorDelegate>)delegate;
-(void)setDelegate:(id<HUTriggerEditorDelegate>)arg1 ;
-(unsigned long long)source;
-(unsigned long long)mode;
-(void)viewDidLoad;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 source:(unsigned long long)arg3 delegate:(id)arg4 ;
-(id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2 ;
-(HUCharacteristicTriggerServicePickerContentViewController *)servicePickerContentViewController;
-(HFCharacteristicTriggerBuilder *)characteristicTriggerBuilder;
@end

