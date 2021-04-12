/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol WFRemoteFileListViewDelegate;
@class NSArray, WFRemoteFileListView;

@interface WFFilePickerResultsViewController : UIViewController {

	NSArray* _files;
	id<WFRemoteFileListViewDelegate> _delegate;
	WFRemoteFileListView* _fileListView;

}

@property (nonatomic,__weak,readonly) WFRemoteFileListView * fileListView;                    //@synthesize fileListView=_fileListView - In the implementation block
@property (nonatomic,copy) NSArray * files;                                                   //@synthesize files=_files - In the implementation block
@property (nonatomic,__weak,readonly) id<WFRemoteFileListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<WFRemoteFileListViewDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(void)updateContentInset;
-(WFRemoteFileListView *)fileListView;
-(id)initWithFileListDelegate:(id)arg1 ;
@end

