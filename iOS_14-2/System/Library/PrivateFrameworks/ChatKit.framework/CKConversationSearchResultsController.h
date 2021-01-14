/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol CKConversationResultsControllerDelegate;
@class NSArray, CKSpotlightQuery, CSSearchQuery, NSString;

@interface CKConversationSearchResultsController : UITableViewController <UISearchResultsUpdating> {

	BOOL _gotTopConversationResults;
	id<CKConversationResultsControllerDelegate> _delegate;
	NSArray* _topConversationsResults;
	NSArray* _messageResults;
	CKSpotlightQuery* _currentQuery;
	CSSearchQuery* _topConversationsQuery;
	NSString* _selectedChatGUID;

}

@property (nonatomic,readonly) NSArray * searchResults; 
@property (nonatomic,retain) NSArray * topConversationsResults;                                        //@synthesize topConversationsResults=_topConversationsResults - In the implementation block
@property (nonatomic,retain) NSArray * messageResults;                                                 //@synthesize messageResults=_messageResults - In the implementation block
@property (nonatomic,retain) CKSpotlightQuery * currentQuery;                                          //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,retain) CSSearchQuery * topConversationsQuery;                                    //@synthesize topConversationsQuery=_topConversationsQuery - In the implementation block
@property (nonatomic,retain) NSString * selectedChatGUID;                                              //@synthesize selectedChatGUID=_selectedChatGUID - In the implementation block
@property (assign,nonatomic) BOOL gotTopConversationResults;                                           //@synthesize gotTopConversationResults=_gotTopConversationResults - In the implementation block
@property (assign,nonatomic,__weak) id<CKConversationResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKSpotlightQuery *)currentQuery;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<CKConversationResultsControllerDelegate>)delegate;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)cancelCurrentQuery;
-(void)_updateTableViewRowHeights;
-(Class)_conversationListCellClass;
-(NSArray *)messageResults;
-(void)setSelectedChatGUID:(NSString *)arg1 ;
-(NSArray *)topConversationsResults;
-(void)setTopConversationsResults:(NSArray *)arg1 ;
-(void)setMessageResults:(NSArray *)arg1 ;
-(id)_topConversationsQueryForText:(id)arg1 ;
-(void)setTopConversationsQuery:(CSSearchQuery *)arg1 ;
-(void)setGotTopConversationResults:(BOOL)arg1 ;
-(NSString *)selectedChatGUID;
-(void)_reloadDataForNewResults;
-(void)_selectChatGUID:(id)arg1 ;
-(void)topConversationsQueryCompletedWithResults:(id)arg1 ;
-(BOOL)gotTopConversationResults;
-(CSSearchQuery *)topConversationsQuery;
-(void)searchEnded;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)setCurrentSearchResultSelected:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<CKConversationResultsControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)setCurrentQuery:(CKSpotlightQuery *)arg1 ;
-(NSArray *)searchResults;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

