/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class CKConversation, NSMutableArray, UITextView, STLockoutViewController, STConversationContext, UIView, NSString;

@interface CKBlackholeTranscriptViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _isShowingLockoutView;
	CKConversation* _conversation;
	NSMutableArray* _messages;
	UITextView* _headerTextView;
	STLockoutViewController* _lockoutViewController;
	STConversationContext* _conversationContext;
	UIView* _lockoutView;

}

@property (nonatomic,retain) CKConversation * conversation;                                //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSMutableArray * messages;                                    //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) UITextView * headerTextView;                                  //@synthesize headerTextView=_headerTextView - In the implementation block
@property (assign,nonatomic) BOOL isShowingLockoutView;                                    //@synthesize isShowingLockoutView=_isShowingLockoutView - In the implementation block
@property (nonatomic,retain) STLockoutViewController * lockoutViewController;              //@synthesize lockoutViewController=_lockoutViewController - In the implementation block
@property (nonatomic,retain) STConversationContext * conversationContext;                  //@synthesize conversationContext=_conversationContext - In the implementation block
@property (nonatomic,retain) UIView * lockoutView;                                         //@synthesize lockoutView=_lockoutView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessages:(NSMutableArray *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_updateTranscriptHistory;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)generateHeader;
-(void)setHeaderTextView:(UITextView *)arg1 ;
-(void)_restoreConverstion;
-(UITextView *)headerTextView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIView *)lockoutView;
-(BOOL)isChatAllowedByScreenTime:(id)arg1 ;
-(void)updateScreenTimeShieldIfNeededForChat:(id)arg1 ;
-(void)removeLockoutControllerIfNeeded;
-(void)showScreenTimeShieldIfNeeded;
-(void)chatAllowedByScreenTimeChanged:(id)arg1 ;
-(BOOL)isShowingLockoutView;
-(STLockoutViewController *)lockoutViewController;
-(void)setLockoutViewController:(STLockoutViewController *)arg1 ;
-(void)setLockoutView:(UIView *)arg1 ;
-(void)setIsShowingLockoutView:(BOOL)arg1 ;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(void)setConversationContext:(STConversationContext *)arg1 ;
-(STConversationContext *)conversationContext;
-(id)_handleIDsForCurrentConversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)layoutLockoutView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithConversation:(id)arg1 ;
-(id)_alertTitleForDelete;
-(void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_deleteConversation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_conversationList;
-(CKConversation *)conversation;
-(NSMutableArray *)messages;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

