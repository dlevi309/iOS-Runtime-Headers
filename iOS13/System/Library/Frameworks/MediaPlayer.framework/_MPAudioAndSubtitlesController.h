/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MPAVItem, UITableView, MPAlternateTrack, _UIBackdropView, NSString;

@interface _MPAudioAndSubtitlesController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	MPAVItem* _avItem;
	UITableView* _tableView;
	BOOL _hasAudio;
	BOOL _hasSubtitles;
	MPAlternateTrack* _originalAudioTrack;
	MPAlternateTrack* _originalSubtitleTrack;
	MPAlternateTrack* _newAudioTrack;
	MPAlternateTrack* _newSubtitleTrack;
	_UIBackdropView* _backdropView;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(id)initWithAVItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_configurePopover;
-(void)_applyChanges;
-(id)_trackAtIndexPath:(id)arg1 ;
@end

