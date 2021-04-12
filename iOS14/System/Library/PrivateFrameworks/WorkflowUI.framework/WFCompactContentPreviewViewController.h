/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFCompactThumbnailViewControllerDelegate.h>

@protocol WFCompactContentPreviewViewControllerDelegate;
@class WFContentItem, UIActivityIndicatorView, WFCompactThumbnailViewController, UIView, NSString;

@interface WFCompactContentPreviewViewController : UIViewController <WFCompactThumbnailViewControllerDelegate> {

	WFContentItem* _contentItem;
	id<WFCompactContentPreviewViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _indicatorView;
	WFCompactThumbnailViewController* _thumbnailViewController;

}

@property (assign,nonatomic,__weak) UIActivityIndicatorView * indicatorView;                                 //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) WFCompactThumbnailViewController * thumbnailViewController;                     //@synthesize thumbnailViewController=_thumbnailViewController - In the implementation block
@property (nonatomic,retain) WFContentItem * contentItem;                                                    //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic,__weak) id<WFCompactContentPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * sourceViewForQuickLook; 
@property (nonatomic,readonly) BOOL contentAllowsScrolling; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFCompactContentPreviewViewControllerDelegate>)delegate;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)setContentItem:(WFContentItem *)arg1 ;
-(void)setDelegate:(id<WFCompactContentPreviewViewControllerDelegate>)arg1 ;
-(WFContentItem *)contentItem;
-(BOOL)_canShowWhileLocked;
-(UIActivityIndicatorView *)indicatorView;
-(void)setIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(WFCompactThumbnailViewController *)thumbnailViewController;
-(void)setThumbnailViewController:(WFCompactThumbnailViewController *)arg1 ;
-(void)invalidateContentSize;
-(void)thumbnailViewControllerDidInvalidateSize:(id)arg1 ;
-(UIView *)sourceViewForQuickLook;
-(BOOL)contentAllowsScrolling;
-(void)getThumbnailViewControllerForContentItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fileThumbnailViewControllerForContentItem:(id)arg1 ;
-(void)_getTypeSpecificThumbnailViewControllerForContentItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

