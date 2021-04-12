/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <UIKitCore/UITableViewController.h>

@class MCDPlayableContentPlaybackManager;

@interface MCDPlayableContentQueueTableViewController : UITableViewController {

	MCDPlayableContentPlaybackManager* _contentManager;

}

@property (nonatomic,retain) MCDPlayableContentPlaybackManager * contentManager;              //@synthesize contentManager=_contentManager - In the implementation block
-(void)viewDidLoad;
-(MCDPlayableContentPlaybackManager *)contentManager;
-(void)setContentManager:(MCDPlayableContentPlaybackManager *)arg1 ;
-(id)initWithContentManager:(id)arg1 ;
@end

