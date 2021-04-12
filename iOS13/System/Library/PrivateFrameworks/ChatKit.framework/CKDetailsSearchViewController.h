/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchViewController.h>
#import <libobjc.A.dylib/CKContainerSearchControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/CKDetailsSearchResultsFooterCellDelegate.h>

@protocol CKDetailsSearchControllerDelegate;
@class CKConversation, NSArray, CKQLPreviewController, CKDetailsSearchResultsTitleHeaderCell, CKDetailsSearchResultsFooterCell, CKSearchIndexingFooterCell, UIBarButtonItem, NSString;

@interface CKDetailsSearchViewController : CKSearchViewController <CKContainerSearchControllerDelegate, QLPreviewControllerDelegate, CKDetailsSearchResultsFooterCellDelegate> {

	BOOL _searchComplete;
	id<CKDetailsSearchControllerDelegate> _detailsDelegate;
	CKConversation* _conversation;
	NSArray* _chatGUIDs;
	CKQLPreviewController* _previewController;
	CKDetailsSearchResultsTitleHeaderCell* _titleSizingCell;
	CKDetailsSearchResultsFooterCell* _footerSizingCell;
	CKSearchIndexingFooterCell* _sizingIndexingFooterCell;
	UIBarButtonItem* _selectButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _flexibleItem;
	UIBarButtonItem* _saveButton;
	UIBarButtonItem* _deleteButton;

}

@property (nonatomic,retain) NSArray * chatGUIDs;                                                       //@synthesize chatGUIDs=_chatGUIDs - In the implementation block
@property (nonatomic,retain) CKQLPreviewController * previewController;                                 //@synthesize previewController=_previewController - In the implementation block
@property (nonatomic,retain) CKDetailsSearchResultsTitleHeaderCell * titleSizingCell;                   //@synthesize titleSizingCell=_titleSizingCell - In the implementation block
@property (nonatomic,retain) CKDetailsSearchResultsFooterCell * footerSizingCell;                       //@synthesize footerSizingCell=_footerSizingCell - In the implementation block
@property (nonatomic,retain) CKSearchIndexingFooterCell * sizingIndexingFooterCell;                     //@synthesize sizingIndexingFooterCell=_sizingIndexingFooterCell - In the implementation block
@property (assign,nonatomic) BOOL searchComplete;                                                       //@synthesize searchComplete=_searchComplete - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * selectButton;                                            //@synthesize selectButton=_selectButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                            //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * flexibleItem;                                            //@synthesize flexibleItem=_flexibleItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                              //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteButton;                                            //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsSearchControllerDelegate> detailsDelegate;              //@synthesize detailsDelegate=_detailsDelegate - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                             //@synthesize conversation=_conversation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)setDeleteButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)deleteButton;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(id)_selectedIndexPaths;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKQLPreviewController *)previewController;
-(void)setPreviewController:(CKQLPreviewController *)arg1 ;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)saveButton;
-(void)setSearchComplete:(BOOL)arg1 ;
-(void)searchWithText:(id)arg1 ;
-(void)_updateToolbar;
-(void)_saveSelectedAttachments:(id)arg1 ;
-(void)_deleteSelectedAttachments:(id)arg1 ;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searchControllerContentsDidChange:(id)arg1 ;
-(void)deleteMessageItem:(id)arg1 ;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2 ;
-(void)deleteTransferGUID:(id)arg1 ;
-(id)initWithSearchControllerClasses:(id)arg1 ;
-(void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3 ;
-(void)searchControllerDidBeginDragging:(id)arg1 ;
-(void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2 ;
-(void)setDetailsDelegate:(id<CKDetailsSearchControllerDelegate>)arg1 ;
-(void)rekickZKWSearchForAttachmentBatchUpdate;
-(void)searchDetailsFooterCellShowAllTapped:(id)arg1 ;
-(id)searchControllerChatGUIDsForDetailsSearch:(id)arg1 ;
-(UIBarButtonItem *)selectButton;
-(void)_selectButtonTapped:(id)arg1 ;
-(void)setSelectButton:(UIBarButtonItem *)arg1 ;
-(id<CKDetailsSearchControllerDelegate>)detailsDelegate;
-(id)globalLayoutConfiguration;
-(void)_registerCells;
-(CKDetailsSearchResultsTitleHeaderCell *)titleSizingCell;
-(Class)_searchResultsHeaderClass;
-(CKDetailsSearchResultsFooterCell *)footerSizingCell;
-(BOOL)searchComplete;
-(CKSearchIndexingFooterCell *)sizingIndexingFooterCell;
-(void)_configureIndexingCell:(id)arg1 ;
-(void)_deleteAttachmentsAtIndexPaths:(id)arg1 ;
-(NSArray *)chatGUIDs;
-(void)setChatGUIDs:(NSArray *)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(UIBarButtonItem *)flexibleItem;
-(void)setFlexibleItem:(UIBarButtonItem *)arg1 ;
-(id)_searchControllerForIndexPath:(id)arg1 ;
-(id)_newSnapshotForCurrentControllerState;
-(id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(void)setTitleSizingCell:(CKDetailsSearchResultsTitleHeaderCell *)arg1 ;
-(void)setFooterSizingCell:(CKDetailsSearchResultsFooterCell *)arg1 ;
-(void)setSizingIndexingFooterCell:(CKSearchIndexingFooterCell *)arg1 ;
@end

