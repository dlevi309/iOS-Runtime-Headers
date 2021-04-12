/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol VUILibraryDownloadPopoverViewControllerDelegate;
@class VUILibraryListItemView, NSString;

@interface VUILibraryDownloadPopoverViewController : UIViewController <UIGestureRecognizerDelegate> {

	id<VUILibraryDownloadPopoverViewControllerDelegate> _delegate;
	VUILibraryListItemView* _listView;

}

@property (nonatomic,retain) VUILibraryListItemView * listView;                                                //@synthesize listView=_listView - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryDownloadPopoverViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VUILibraryDownloadPopoverViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VUILibraryDownloadPopoverViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(VUILibraryListItemView *)listView;
-(void)setListView:(VUILibraryListItemView *)arg1 ;
-(void)popoverPressed:(id)arg1 ;
@end

