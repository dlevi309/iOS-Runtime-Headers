/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>

@class HUAccessorySettingsSiriOutputVoiceItemManager, NSString;

@interface HUAccessorySettingsSiriOutputVoiceViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>

@property (nonatomic,readonly) HUAccessorySettingsSiriOutputVoiceItemManager * itemManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
@end

