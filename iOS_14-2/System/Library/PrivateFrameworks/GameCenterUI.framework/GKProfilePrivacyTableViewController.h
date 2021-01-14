/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol GKProfilePrivacyTableViewControllerDelegate;
@class GKLocalPlayer, NSMutableArray;

@interface GKProfilePrivacyTableViewController : UITableViewController {

	BOOL _isSendingRequest;
	int _currentPrivacySettings;
	int _initialPrivacySettings;
	GKLocalPlayer* _localPlayer;
	id<GKProfilePrivacyTableViewControllerDelegate> _delegate;
	NSMutableArray* _availblePrivacySettings;

}

@property (assign,nonatomic) int currentPrivacySettings;                                                   //@synthesize currentPrivacySettings=_currentPrivacySettings - In the implementation block
@property (assign,nonatomic) int initialPrivacySettings;                                                   //@synthesize initialPrivacySettings=_initialPrivacySettings - In the implementation block
@property (nonatomic,retain) NSMutableArray * availblePrivacySettings;                                     //@synthesize availblePrivacySettings=_availblePrivacySettings - In the implementation block
@property (assign,nonatomic) BOOL isSendingRequest;                                                        //@synthesize isSendingRequest=_isSendingRequest - In the implementation block
@property (nonatomic,retain) GKLocalPlayer * localPlayer;                                                  //@synthesize localPlayer=_localPlayer - In the implementation block
@property (assign,nonatomic,__weak) id<GKProfilePrivacyTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(GKLocalPlayer *)localPlayer;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setLocalPlayer:(GKLocalPlayer *)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<GKProfilePrivacyTableViewControllerDelegate>)delegate;
-(int)getLocalPlayerProfilePrivacy;
-(void)setCurrentPrivacySettings:(int)arg1 ;
-(int)currentPrivacySettings;
-(void)setInitialPrivacySettings:(int)arg1 ;
-(void)setIsSendingRequest:(BOOL)arg1 ;
-(void)updateTableViewLayoutMargins;
-(id)titleForPrivacy:(int)arg1 ;
-(id)tableFooterForPrivacy:(int)arg1 ;
-(BOOL)isSendingRequest;
-(int)initialPrivacySettings;
-(NSMutableArray *)availblePrivacySettings;
-(void)setAvailblePrivacySettings:(NSMutableArray *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<GKProfilePrivacyTableViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

