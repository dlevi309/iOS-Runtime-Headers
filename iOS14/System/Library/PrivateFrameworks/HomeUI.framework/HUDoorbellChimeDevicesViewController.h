/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>

@class HUDoorbellChimeDevicesItemManager, NSString;

@interface HUDoorbellChimeDevicesViewController : HUItemTableViewController <HFItemManagerDelegate, HUSwitchCellDelegate, HUAccessorySettingsDetailsViewControllerProtocol> {

	HUDoorbellChimeDevicesItemManager* _doorbellChimeDevicesItemManager;

}

@property (nonatomic,retain) HUDoorbellChimeDevicesItemManager * doorbellChimeDevicesItemManager;              //@synthesize doorbellChimeDevicesItemManager=_doorbellChimeDevicesItemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(id)initWithAccessorySettingItem:(id)arg1 ;
-(HUDoorbellChimeDevicesItemManager *)doorbellChimeDevicesItemManager;
-(void)setDoorbellChimeDevicesItemManager:(HUDoorbellChimeDevicesItemManager *)arg1 ;
@end

