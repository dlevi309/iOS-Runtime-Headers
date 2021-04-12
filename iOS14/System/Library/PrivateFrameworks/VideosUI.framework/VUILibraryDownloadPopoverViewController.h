/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDelegate:(id<VUILibraryDownloadPopoverViewControllerDelegate>)arg1 ;
-(VUILibraryListItemView *)listView;
-(void)loadView;
-(void)popoverPressed:(id)arg1 ;
-(void)setListView:(VUILibraryListItemView *)arg1 ;
@end

