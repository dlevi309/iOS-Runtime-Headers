/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLMediaItemBaseViewController.h>

@class AVQueuePlayer;

@interface QLLoopingMediaItemViewController : QLMediaItemBaseViewController {

	AVQueuePlayer* _queuePlayer;
	BOOL _addedObservers;

}
-(id)player;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(BOOL)pause;
-(void)startObservingItem;
-(void)stopObservingItem;
-(void)setupPlayerWithMediaAsset:(id)arg1 ;
-(BOOL)play;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

