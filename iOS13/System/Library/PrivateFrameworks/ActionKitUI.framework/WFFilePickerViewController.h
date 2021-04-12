/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/WFRemoteFileListViewDelegate.h>
#import <libobjc.A.dylib/WFRemoteFileStatusViewDelegate.h>
#import <libobjc.A.dylib/_UIContextMenuInteractionDelegate.h>

@protocol WFFileStorageService;
@class NSString, NSArray, NSError, NSMutableOrderedSet, UISearchController, WFRemoteFileListView, WFRemoteFileStatusView;

@interface WFFilePickerViewController : UIViewController <UISearchControllerDelegate, UISearchResultsUpdating, WFRemoteFileListViewDelegate, WFRemoteFileStatusViewDelegate, _UIContextMenuInteractionDelegate> {

	BOOL _hideSearchBar;
	BOOL _allowsMultipleSelection;
	BOOL _loading;
	id<WFFileStorageService> _service;
	NSString* _path;
	long long _mode;
	/*^block*/id _pickCompletionHandler;
	/*^block*/id _saveCompletionHandler;
	NSArray* _files;
	NSError* _error;
	NSMutableOrderedSet* _selectedFiles;
	UISearchController* _searchController;
	WFRemoteFileListView* _fileListView;
	WFRemoteFileStatusView* _statusView;

}

@property (nonatomic,readonly) long long mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleSelection;                            //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,readonly) id pickCompletionHandler;                                //@synthesize pickCompletionHandler=_pickCompletionHandler - In the implementation block
@property (nonatomic,readonly) id saveCompletionHandler;                                //@synthesize saveCompletionHandler=_saveCompletionHandler - In the implementation block
@property (nonatomic,copy) NSArray * files;                                             //@synthesize files=_files - In the implementation block
@property (nonatomic,copy) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL loading;                                              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSMutableOrderedSet * selectedFiles;                         //@synthesize selectedFiles=_selectedFiles - In the implementation block
@property (nonatomic,readonly) UISearchController * searchController;                   //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,__weak,readonly) WFRemoteFileListView * fileListView;              //@synthesize fileListView=_fileListView - In the implementation block
@property (nonatomic,__weak,readonly) WFRemoteFileStatusView * statusView;              //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,readonly) id<WFFileStorageService> service;                        //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * path;                                         //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) BOOL hideSearchBar;                                        //@synthesize hideSearchBar=_hideSearchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(void)cancel;
-(NSString *)path;
-(void)setError:(NSError *)arg1 ;
-(long long)mode;
-(void)finish;
-(id<WFFileStorageService>)service;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(UISearchController *)searchController;
-(BOOL)allowsMultipleSelection;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(WFRemoteFileStatusView *)statusView;
-(void)didPresentSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(void)updateToolbar;
-(id)saveCompletionHandler;
-(void)statusViewDidPressRecoveryButton:(id)arg1 ;
-(void)fileListView:(id)arg1 didSelectFile:(id)arg2 ;
-(BOOL)fileListView:(id)arg1 shouldSelectFile:(id)arg2 ;
-(BOOL)fileListView:(id)arg1 shouldDisplayCheckmarkForFile:(id)arg2 ;
-(id)initForPickingFilesAtPath:(id)arg1 service:(id)arg2 allowsMultipleSelection:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initForSavingFilesAtPath:(id)arg1 service:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPath:(id)arg1 selectedFiles:(id)arg2 service:(id)arg3 mode:(long long)arg4 allowsMultipleSelection:(BOOL)arg5 pickCompletionHandler:(/*^block*/id)arg6 saveCompletionHandler:(/*^block*/id)arg7 ;
-(void)setHideSearchBar:(BOOL)arg1 ;
-(void)loadFiles;
-(void)updateStatusViewAnimated:(BOOL)arg1 ;
-(BOOL)caseInsensitiveArray:(id)arg1 isEqualToArray:(id)arg2 ;
-(void)navigateToSubdirectoryAtPath:(id)arg1 ;
-(BOOL)hideSearchBar;
-(id)pickCompletionHandler;
-(NSMutableOrderedSet *)selectedFiles;
-(void)setSelectedFiles:(NSMutableOrderedSet *)arg1 ;
-(WFRemoteFileListView *)fileListView;
@end

