/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/_MCDNowPlayingContentManager.h>
#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class MCDPCModel, NSString;

@interface MCDPlayableContentPlaybackManager : _MCDNowPlayingContentManager <MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource> {

	BOOL _seeking;
	MCDPCModel* _model;
	long long _playingItemIndex;
	long long _totalItemCount;

}

@property (assign,getter=isSeeking,nonatomic) BOOL seeking;              //@synthesize seeking=_seeking - In the implementation block
@property (nonatomic,retain) MCDPCModel * model;                         //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) long long playingItemIndex;                 //@synthesize playingItemIndex=_playingItemIndex - In the implementation block
@property (assign,nonatomic) long long totalItemCount;                   //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MCDPCModel *)model;
-(void)setModel:(MCDPCModel *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)totalItemCount;
-(id)_itemAtIndexPath:(id)arg1 ;
-(BOOL)isSeeking;
-(void)setSeeking:(BOOL)arg1 ;
-(void)setTotalItemCount:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 bundleID:(id)arg3 ;
-(void)_processResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(id)arg4 tinted:(out BOOL*)arg5 ;
-(BOOL)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2 ;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3 ;
-(BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1 ;
-(void)nowPlayingViewControllerAddToLibrary:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanShowMore:(id)arg1 ;
-(void)nowPlayingViewControllerMore:(id)arg1 ;
-(long long)_numberOfItemsInPlaybackQueue;
-(void)_updateTrackQueueIndex;
-(long long)playingItemIndex;
-(id)_adjustedIndexPathForPlaybackQueue:(id)arg1 ;
-(double)_jumpBackwardInterval;
-(id)_skipIntervalButtonImageForInterval:(double)arg1 size:(long long)arg2 ;
-(double)_jumpForwardInterval;
-(void)_handleHamburgerActionSheet;
-(id)_alertActionForFeedbackCommand:(id)arg1 fallbackTitle:(id)arg2 ;
-(void)setPlayingItemIndex:(long long)arg1 ;
@end

