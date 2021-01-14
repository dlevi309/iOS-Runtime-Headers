/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchViewController.h>
#import <libobjc.A.dylib/CKContainerSearchControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/CKDetailsSearchResultsFooterCellDelegate.h>
#import <libobjc.A.dylib/CKDetailsSearchResultsTitleHeaderCellDelegate.h>

@protocol CKDetailsSearchControllerDelegate;
@class CKConversation, NSArray, CKQLPreviewControllerDataSource, CKQLPreviewController, CKDetailsSearchResultsTitleHeaderCell, CKDetailsSearchResultsFooterCell, CKSearchIndexingFooterCell, UIBarButtonItem, NSDate, UICollectionViewCell, NSString;

@interface CKDetailsSearchViewController : CKSearchViewController <CKContainerSearchControllerDelegate, QLPreviewControllerDelegate, CKDetailsSearchResultsFooterCellDelegate, CKDetailsSearchResultsTitleHeaderCellDelegate> {

	BOOL _searchComplete;
	id<CKDetailsSearchControllerDelegate> _detailsDelegate;
	CKConversation* _conversation;
	NSArray* _chatGUIDs;
	CKQLPreviewControllerDataSource* _qlPreviewDataSource;
	CKQLPreviewController* _previewController;
	CKDetailsSearchResultsTitleHeaderCell* _titleSizingCell;
	CKDetailsSearchResultsFooterCell* _footerSizingCell;
	CKSearchIndexingFooterCell* _sizingIndexingFooterCell;
	UIBarButtonItem* _selectButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _flexibleItem;
	UIBarButtonItem* _saveButton;
	UIBarButtonItem* _deleteButton;
	NSDate* _lastUserSelectedCellTime;
	UICollectionViewCell* _lastUserSelectedCell;

}

@property (nonatomic,retain) NSArray * chatGUIDs;                                                       //@synthesize chatGUIDs=_chatGUIDs - In the implementation block
@property (nonatomic,retain) CKQLPreviewControllerDataSource * qlPreviewDataSource;                     //@synthesize qlPreviewDataSource=_qlPreviewDataSource - In the implementation block
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
@property (nonatomic,retain) NSDate * lastUserSelectedCellTime;                                         //@synthesize lastUserSelectedCellTime=_lastUserSelectedCellTime - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * lastUserSelectedCell;                               //@synthesize lastUserSelectedCell=_lastUserSelectedCell - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsSearchControllerDelegate> detailsDelegate;              //@synthesize detailsDelegate=_detailsDelegate - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                             //@synthesize conversation=_conversation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(UIBarButtonItem *)cancelButton;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)setQlPreviewDataSource:(CKQLPreviewControllerDataSource *)arg1 ;
-(CKQLPreviewControllerDataSource *)qlPreviewDataSource;
-(void)setDetailsDelegate:(id<CKDetailsSearchControllerDelegate>)arg1 ;
-(void)rekickZKWSearchForAttachmentBatchUpdate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)searchEnded;
-(UIBarButtonItem *)selectButton;
-(void)_selectButtonTapped:(id)arg1 ;
-(void)setSelectButton:(UIBarButtonItem *)arg1 ;
-(id<CKDetailsSearchControllerDelegate>)detailsDelegate;
-(void)presentQuickLookView:(id)arg1 ;
-(NSDate *)lastUserSelectedCellTime;
-(UICollectionViewCell *)lastUserSelectedCell;
-(void)setSearchComplete:(BOOL)arg1 ;
-(void)setLastUserSelectedCellTime:(NSDate *)arg1 ;
-(void)setLastUserSelectedCell:(UICollectionViewCell *)arg1 ;
-(id)layoutSectionForController:(id)arg1 withEnvironment:(id)arg2 ;
-(id)globalLayoutConfiguration;
-(CKDetailsSearchResultsTitleHeaderCell *)titleSizingCell;
-(id)sizeAttributeForController:(id)arg1 sizingAttribute:(id)arg2 ;
-(Class)_searchResultsHeaderClass;
-(CKDetailsSearchResultsFooterCell *)footerSizingCell;
-(BOOL)searchComplete;
-(CKSearchIndexingFooterCell *)sizingIndexingFooterCell;
-(void)_configureIndexingCell:(id)arg1 ;
-(void)setupDetailsSearchController:(id)arg1 ;
-(void)_searchResultHeaderButtonTapped:(id)arg1 ;
-(void)_deleteAttachmentsAtIndexPaths:(id)arg1 ;
-(void)setChatGUIDs:(NSArray *)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(UIBarButtonItem *)flexibleItem;
-(void)setFlexibleItem:(UIBarButtonItem *)arg1 ;
-(id)_searchControllerForIndexPath:(id)arg1 ;
-(void)setFooterSizingCell:(CKDetailsSearchResultsFooterCell *)arg1 ;
-(id)_newSnapshotForCurrentControllerState;
-(id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(void)setTitleSizingCell:(CKDetailsSearchResultsTitleHeaderCell *)arg1 ;
-(id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(void)setSizingIndexingFooterCell:(CKSearchIndexingFooterCell *)arg1 ;
-(void)setDeleteButton:(UIBarButtonItem *)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)setPreviewController:(CKQLPreviewController *)arg1 ;
-(void)_registerCells;
-(void)searchResultsTitleCellShowAllButtonTapped:(id)arg1 ;
-(void)searchDetailsShowAllButtonTapped:(id)arg1 ;
-(void)searchDetailsFooterCellShowAllTapped:(id)arg1 ;
-(CKConversation *)conversation;
-(UIBarButtonItem *)saveButton;
-(id)searchControllerChatGUIDsForDetailsSearch:(id)arg1 ;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateToolbar;
-(void)_saveSelectedAttachments:(id)arg1 ;
-(void)_deleteSelectedAttachments:(id)arg1 ;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(CKQLPreviewController *)previewController;
-(id)_selectedIndexPaths;
-(NSArray *)chatGUIDs;
-(void)searchWithText:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(UIBarButtonItem *)deleteButton;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2 ;
-(void)deleteTransferGUID:(id)arg1 ;
-(void)loadView;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searchControllerContentsDidChange:(id)arg1 ;
-(void)deleteMessageItem:(id)arg1 ;
-(id)initWithSearchControllerClasses:(id)arg1 ;
-(void)searchControllerDidBeginDragging:(id)arg1 ;
-(void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2 ;
-(void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)wantsSpaceKeyCommandActive;
-(void)handleSpacePressed;
@end

