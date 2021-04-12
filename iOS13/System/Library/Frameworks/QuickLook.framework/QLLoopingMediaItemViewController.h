/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLMediaItemBaseViewController.h>

@class AVQueuePlayer, UIColor;

@interface QLLoopingMediaItemViewController : QLMediaItemBaseViewController {

	AVQueuePlayer* _queuePlayer;
	BOOL _addedObservers;
	UIColor* _fullscreenBackgroundColor;

}
-(void)dealloc;
-(BOOL)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)play;
-(id)player;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)fullscreenBackgroundColor;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)startObservingItem;
-(void)stopObservingItem;
-(void)setupPlayerWithMediaAsset:(id)arg1 ;
@end

