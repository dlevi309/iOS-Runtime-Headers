/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>

@class HUPlaybackInfluencesItemManager, NSString;

@interface HUPlaybackInfluencesViewController : HUItemTableViewController <HFItemManagerDelegate, UITextViewDelegate, HUSwitchCellDelegate, HUAccessorySettingsDetailsViewControllerProtocol> {

	HUPlaybackInfluencesItemManager* _playbackInfluencesItemManager;

}

@property (nonatomic,retain) HUPlaybackInfluencesItemManager * playbackInfluencesItemManager;              //@synthesize playbackInfluencesItemManager=_playbackInfluencesItemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(void)dismissPrivacyController;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(id)initWithAccessorySettingItem:(id)arg1 ;
-(HUPlaybackInfluencesItemManager *)playbackInfluencesItemManager;
-(void)setPlaybackInfluencesItemManager:(HUPlaybackInfluencesItemManager *)arg1 ;
@end

