/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UITableViewController.h>

@class AVMediaSelectionOption, AVPlayerController;

@interface AVMediaSelectionTableViewController : UITableViewController {

	AVMediaSelectionOption* _selectedAudioMediaSelectionOption;
	AVMediaSelectionOption* _selectedLegibleMediaSelectionOption;
	AVPlayerController* _playerController;

}

@property (nonatomic,retain) AVPlayerController * playerController;              //@synthesize playerController=_playerController - In the implementation block
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)playerControllerMediaSelectionChanged:(id)arg1 ;
-(BOOL)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg1 ;
-(BOOL)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg1 ;
@end

