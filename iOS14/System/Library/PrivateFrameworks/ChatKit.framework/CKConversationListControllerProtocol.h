/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

@class NSString, CKMessagesController;


@protocol CKConversationListControllerProtocol <NSObject>
@property (nonatomic,retain) NSString * deferredSearchQuery; 
@property (assign,nonatomic,__weak) CKMessagesController * messagesController; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isSearchActiveAndDisplayingResultsForSearchText; 
@property (nonatomic,readonly) BOOL isSearchActive; 
@property (assign,nonatomic) unsigned long long filterMode; 
@required
-(CKMessagesController *)messagesController;
-(id)searchResultsController;
-(void)performResumeDeferredSetup;
-(void)setFilterMode:(unsigned long long)arg1;
-(void)updateConversationListForMessageSentToConversation:(id)arg1;
-(void)significantTimeChange;
-(void)reloadData;
-(BOOL)isVisible;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(BOOL)isSearchActive;
-(id)conversationList;
-(void)updateConversationList;
-(void)composeButtonClicked:(id)arg1;
-(void)updateConversationSelection;
-(void)noteUnreadCountsChanged;
-(void)selectDefaultConversationAnimated:(BOOL)arg1;
-(void)updateSyncProgressIfNeeded;
-(void)batchDeleteButtonTapped:(id)arg1;
-(void)showMeCardViewController;
-(void)removePendingConversationCell;
-(void)compositionSent;
-(void)conversationWillBeMarkedRead:(id)arg1;
-(void)selectDefaultConversationAnimated:(BOOL)arg1 removingPendingConversationCell:(BOOL)arg2;
-(void)selectNextSequentialConversation:(BOOL)arg1;
-(void)selectPinnedConversationForItem:(long long)arg1;
-(void)selectFirstActiveConversation;
-(void)deleteSelectedConversation;
-(void)performSearch:(id)arg1 completion:(/*^block*/id)arg2;
-(void)registerForCloudKitEventsImmediately;
-(void)beginHoldingConversationListUpdatesForPPTTests;
-(void)endHoldingConversationListUpdatesForPPTTests;
-(NSString *)deferredSearchQuery;
-(void)setDeferredSearchQuery:(id)arg1;
-(void)setMessagesController:(id)arg1;
-(BOOL)isSearchActiveAndDisplayingResultsForSearchText;
-(unsigned long long)filterMode;

@end

