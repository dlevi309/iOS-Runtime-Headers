/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCompactThumbnailViewController.h>

@class AVPlayerItem;

@interface WFCompactMediaThumbnailViewController : WFCompactThumbnailViewController {

	AVPlayerItem* _playerItem;

}

@property (nonatomic,readonly) AVPlayerItem * playerItem;              //@synthesize playerItem=_playerItem - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)loadView;
-(AVPlayerItem *)playerItem;
-(void)dealloc;
-(id)initWithAVPlayerItem:(id)arg1 ;
@end

