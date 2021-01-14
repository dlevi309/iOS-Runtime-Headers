/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <UIKitCore/UITableViewController.h>

@class MCDPlayableContentPlaybackManager;

@interface MCDPlayableContentQueueTableViewController : UITableViewController {

	MCDPlayableContentPlaybackManager* _contentManager;

}

@property (nonatomic,retain) MCDPlayableContentPlaybackManager * contentManager;              //@synthesize contentManager=_contentManager - In the implementation block
-(void)viewDidLoad;
-(void)setContentManager:(MCDPlayableContentPlaybackManager *)arg1 ;
-(MCDPlayableContentPlaybackManager *)contentManager;
-(id)initWithContentManager:(id)arg1 ;
@end

