/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@class HFCharacteristicTriggerBuilder, UINavigationItem, NSString;

@interface HUCharacteristicTriggerServicePickerContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {

	HFCharacteristicTriggerBuilder* _characteristicTriggerBuilder;
	unsigned long long _mode;
	unsigned long long _source;
	UINavigationItem* _effectiveNavigationItem;

}

@property (nonatomic,retain) HFCharacteristicTriggerBuilder * characteristicTriggerBuilder;              //@synthesize characteristicTriggerBuilder=_characteristicTriggerBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                                                //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) UINavigationItem * effectiveNavigationItem;                               //@synthesize effectiveNavigationItem=_effectiveNavigationItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)source;
-(unsigned long long)mode;
-(void)viewDidLoad;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(void)_next:(id)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 source:(unsigned long long)arg3 effectiveNavigationItem:(id)arg4 delegate:(id)arg5 ;
-(HFCharacteristicTriggerBuilder *)characteristicTriggerBuilder;
-(UINavigationItem *)effectiveNavigationItem;
-(void)_validateNextButton;
-(void)didChangeSelection;
-(void)_addCharacteristicEventsForAlarmItem:(id)arg1 ;
-(void)_addCharacteristicEventsForOtherDeviceItem:(id)arg1 ;
-(void)setCharacteristicTriggerBuilder:(HFCharacteristicTriggerBuilder *)arg1 ;
@end

