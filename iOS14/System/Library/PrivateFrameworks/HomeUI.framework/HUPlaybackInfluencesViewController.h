/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)dismissPrivacyController;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(id)initWithAccessorySettingItem:(id)arg1 ;
-(HUPlaybackInfluencesItemManager *)playbackInfluencesItemManager;
-(void)setPlaybackInfluencesItemManager:(HUPlaybackInfluencesItemManager *)arg1 ;
@end

