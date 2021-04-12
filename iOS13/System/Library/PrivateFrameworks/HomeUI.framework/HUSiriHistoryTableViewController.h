/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>

@class HUSiriHistoryItemManager, NSString;

@interface HUSiriHistoryTableViewController : HUItemTableViewController <HFItemManagerDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol> {

	HUSiriHistoryItemManager* _siriHistoryItemManager;

}

@property (nonatomic,retain) HUSiriHistoryItemManager * siriHistoryItemManager;              //@synthesize siriHistoryItemManager=_siriHistoryItemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(HUSiriHistoryItemManager *)siriHistoryItemManager;
-(void)setSiriHistoryItemManager:(HUSiriHistoryItemManager *)arg1 ;
@end

