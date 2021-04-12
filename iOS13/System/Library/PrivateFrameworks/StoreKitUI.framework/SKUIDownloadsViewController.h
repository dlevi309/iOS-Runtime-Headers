/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SKUIDownloadsChildViewControllerDelegate.h>

@class SKUIImageDataConsumer, SSDownloadManager, NSMutableDictionary, NSCache, SKUIIPhoneDownloadsViewController, SKUIIPadDownloadsViewController, UIImage, NSArray, NSString;

@interface SKUIDownloadsViewController : SKUIViewController <SSDownloadManagerObserver, SKUIDownloadsChildViewControllerDelegate> {

	SKUIImageDataConsumer* _consumer;
	SSDownloadManager* _downloadManager;
	NSMutableDictionary* _imageOperations;
	NSCache* _images;
	SKUIIPhoneDownloadsViewController* _iphoneViewController;
	SKUIIPadDownloadsViewController* _ipadViewController;
	UIImage* _nullImage;
	NSArray* _downloads;

}

@property (copy) NSArray * downloads;                               //@synthesize downloads=_downloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_sizeClassForSize:(CGSize)arg1 ;
-(void)dealloc;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)downloads;
-(void)setDownloads:(NSArray *)arg1 ;
-(id)childViewController:(id)arg1 artworkForDownload:(id)arg2 ;
-(void)childViewController:(id)arg1 performActionForDownload:(id)arg2 ;
-(void)childViewController:(id)arg1 removeDownloads:(id)arg2 ;
-(void)_reloadView;
-(void)_reloadManagerFromServer;
-(void)_reloadBadge;
-(void)_reloadViewControllerWithSize:(CGSize)arg1 ;
-(void)_setArtwork:(id)arg1 forURLString:(id)arg2 ;
@end
