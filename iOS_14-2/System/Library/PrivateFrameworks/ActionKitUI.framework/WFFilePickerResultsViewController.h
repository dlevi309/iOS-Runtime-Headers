/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(NSArray *)files;
-(id<WFRemoteFileListViewDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateContentInset;
-(void)loadView;
-(void)dealloc;
-(void)setFiles:(NSArray *)arg1 ;
-(WFRemoteFileListView *)fileListView;
-(id)initWithFileListDelegate:(id)arg1 ;
@end

