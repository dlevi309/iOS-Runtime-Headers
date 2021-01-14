/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	/*^block*/id _filter;

}

@property (nonatomic,retain) HFCharacteristicTriggerBuilder * characteristicTriggerBuilder;              //@synthesize characteristicTriggerBuilder=_characteristicTriggerBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                                                //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) UINavigationItem * effectiveNavigationItem;                               //@synthesize effectiveNavigationItem=_effectiveNavigationItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate; 
@property (nonatomic,copy) id filter;                                                                    //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(unsigned long long)mode;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(void)viewDidLoad;
-(void)_next:(id)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(unsigned long long)source;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(void)didChangeSelection;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 source:(unsigned long long)arg3 effectiveNavigationItem:(id)arg4 delegate:(id)arg5 ;
-(HFCharacteristicTriggerBuilder *)characteristicTriggerBuilder;
-(UINavigationItem *)effectiveNavigationItem;
-(void)_validateNextButton;
-(void)_addCharacteristicEventsForAlarmItem:(id)arg1 ;
-(void)_addCharacteristicEventsForOtherDeviceItem:(id)arg1 ;
-(void)setCharacteristicTriggerBuilder:(HFCharacteristicTriggerBuilder *)arg1 ;
@end

