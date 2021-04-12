/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUISlideshowViewControllerDataSource.h>
#import <libobjc.A.dylib/SKUISlideshowViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol SKUIScreenshotsDelegate;
@class SKUIClientContext, UICollectionView, SKUIScreenshotDataConsumer, NSOperationQueue, NSArray, NSMutableArray, SKUIVideoImageDataConsumer, NSString;

@interface SKUIScreenshotsViewController : UIViewController <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {

	SKUIClientContext* _clientContext;
	UICollectionView* _collectionView;
	SKUIScreenshotDataConsumer* _dataConsumer;
	id<SKUIScreenshotsDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	NSArray* _screenshots;
	NSMutableArray* _screenshotImages;
	NSMutableArray* _screenshotRawImages;
	CGSize _screenshotMaxSize;
	SKUIVideoImageDataConsumer* _trailerConsumer;
	NSArray* _trailers;
	NSMutableArray* _trailerImages;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                      //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIScreenshotsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSOperationQueue *)operationQueue;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<SKUIScreenshotsDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(SKUIClientContext *)clientContext;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setDelegate:(id<SKUIScreenshotsDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)reloadData;
-(void)loadView;
-(void)_setImage:(id)arg1 forIndex:(long long)arg2 ;
-(long long)numberOfItemsInSlideshowViewController:(id)arg1 ;
-(id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2 ;
-(id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2 ;
-(id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2 ;
-(id)slideshowViewController:(id)arg1 poppedImageViewAtIndex:(long long)arg2 ;
-(void)slideshowViewController:(id)arg1 scrollToImageAtIndex:(long long)arg2 ;
-(id)initWithTrailers:(id)arg1 screenshots:(id)arg2 clientContext:(id)arg3 ;
-(void)_setTrailerImage:(id)arg1 forIndex:(long long)arg2 ;
@end

