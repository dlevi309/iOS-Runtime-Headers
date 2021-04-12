/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLDetailItemViewController.h>

@protocol QLDownloadingItemViewControllerDelegate;
@class QLRoundProgressView, QLDetailItemViewControllerState, UIImageView, UIImage, QLItem;

@interface QLDownloadingItemViewController : QLDetailItemViewController {

	BOOL _downloading;
	BOOL _downloaded;
	BOOL _didDisappear;
	id _progressSubscriber;
	QLRoundProgressView* _progressView;
	QLDetailItemViewControllerState* _readyForDownloadState;
	QLDetailItemViewControllerState* _cancelableDownloadingState;
	QLDetailItemViewControllerState* _nonCancelableDownloadingState;
	QLDetailItemViewControllerState* _completedDownloadState;
	QLDetailItemViewControllerState* _previewLoadingState;
	UIImageView* _downloadImageView;
	UIImage* _cloudImage;
	QLItem* _previewItem;
	BOOL _showsLoadingPreviewSpinner;
	id<QLDownloadingItemViewControllerDelegate> _downloadingDelegate;

}

@property (assign,nonatomic) BOOL downloaded;                                                                     //@synthesize downloaded=_downloaded - In the implementation block
@property (nonatomic,readonly) QLRoundProgressView * progressView;                                                //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id<QLDownloadingItemViewControllerDelegate> downloadingDelegate;              //@synthesize downloadingDelegate=_downloadingDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingPreviewSpinner;                                                     //@synthesize showsLoadingPreviewSpinner=_showsLoadingPreviewSpinner - In the implementation block
-(void)viewDidLoad;
-(void)performAction;
-(BOOL)downloaded;
-(void)setDownloaded:(BOOL)arg1 ;
-(QLRoundProgressView *)progressView;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowsLoadingPreviewSpinner:(BOOL)arg1 ;
-(void)setDownloadingDelegate:(id<QLDownloadingItemViewControllerDelegate>)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)_startDownload:(BOOL)arg1 ;
-(BOOL)shouldAutoDownloadInNetworkState:(unsigned long long)arg1 downloadSize:(id)arg2 ;
-(void)_updateFileSizeWithProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_toggleDownload:(BOOL)arg1 ;
-(void)_stopDownload:(BOOL)arg1 ;
-(void)_startDownloadOperation;
-(void)_setDownloading:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_presentConnectivityAlert;
-(id<QLDownloadingItemViewControllerDelegate>)downloadingDelegate;
-(BOOL)showsLoadingPreviewSpinner;
@end

