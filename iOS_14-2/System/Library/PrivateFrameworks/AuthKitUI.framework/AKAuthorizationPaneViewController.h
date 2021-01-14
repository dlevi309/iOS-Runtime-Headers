/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol AKAuthorizationPaneDelegate, AKAuthorizationEditableDataSources;
@class UIStackView, AKAuthorizationPaneContext, NSMutableArray, UITableView, NSLayoutConstraint, UIVisualEffectView, NSString;

@interface AKAuthorizationPaneViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _isWristDetectionEnabled;
	id<AKAuthorizationPaneDelegate> _paneDelegate;
	id<AKAuthorizationEditableDataSources> _editableDataSources;
	UIStackView* _paneHeaderStackView;
	UIStackView* _paneFooterStackView;
	AKAuthorizationPaneContext* _headerPaneContext;
	AKAuthorizationPaneContext* _footerPaneContext;
	NSMutableArray* _mutableConstraints;
	UITableView* _tableView;
	NSLayoutConstraint* _headerWidthConstraint;
	NSLayoutConstraint* _footerWidthConstraint;
	UIVisualEffectView* _blurryTray;

}

@property (nonatomic,readonly) NSLayoutConstraint * headerWidthConstraint;                                   //@synthesize headerWidthConstraint=_headerWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * footerWidthConstraint;                                   //@synthesize footerWidthConstraint=_footerWidthConstraint - In the implementation block
@property (nonatomic,retain) AKAuthorizationPaneContext * headerPaneContext;                                 //@synthesize headerPaneContext=_headerPaneContext - In the implementation block
@property (nonatomic,retain) AKAuthorizationPaneContext * footerPaneContext;                                 //@synthesize footerPaneContext=_footerPaneContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableConstraints;                                            //@synthesize mutableConstraints=_mutableConstraints - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurryTray;                                                //@synthesize blurryTray=_blurryTray - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                        //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<AKAuthorizationPaneDelegate> paneDelegate;                            //@synthesize paneDelegate=_paneDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AKAuthorizationEditableDataSources> editableDataSources;              //@synthesize editableDataSources=_editableDataSources - In the implementation block
@property (nonatomic,readonly) UIStackView * paneHeaderStackView;                                            //@synthesize paneHeaderStackView=_paneHeaderStackView - In the implementation block
@property (nonatomic,readonly) UIStackView * paneFooterStackView;                                            //@synthesize paneFooterStackView=_paneFooterStackView - In the implementation block
@property (nonatomic,readonly) BOOL isWristDetectionEnabled;                                                 //@synthesize isWristDetectionEnabled=_isWristDetectionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)maximumContentHeight;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_newContainerView;
-(id)_newStackView;
-(void)_setupContexts;
-(UIStackView *)paneHeaderStackView;
-(UIStackView *)paneFooterStackView;
-(NSLayoutConstraint *)headerWidthConstraint;
-(NSLayoutConstraint *)footerWidthConstraint;
-(void)sizeToFitPaneContent;
-(void)_adjustForPositionOfScrollView:(id)arg1 ;
-(UIVisualEffectView *)blurryTray;
-(void)setHeaderPaneContext:(AKAuthorizationPaneContext *)arg1 ;
-(void)setFooterPaneContext:(AKAuthorizationPaneContext *)arg1 ;
-(void)setMutableConstraints:(NSMutableArray *)arg1 ;
-(void)_setCompressedHeightForView:(id)arg1 ;
-(double)_contentTrayOffsetAdjustedForScrollInset:(BOOL)arg1 ;
-(void)_configureContentTrayIfNeeded;
-(void)_updateBlurForTray;
-(BOOL)_shouldEmbedContentTray;
-(BOOL)_isContentUnderTray;
-(id)_indexPathForLastRow;
-(double)_navigationBarHeaderHeight;
-(double)contentScrollOffset;
-(BOOL)shouldEmbedContentTrayIfNeeded;
-(double)intrinsicContentHeight;
-(long long)_safeIndexWithCount:(long long)arg1 ;
-(BOOL)_isContentUnderNavigationBar;
-(double)_deviceSafeAreaBottomInset;
-(id<AKAuthorizationPaneDelegate>)paneDelegate;
-(void)setPaneDelegate:(id<AKAuthorizationPaneDelegate>)arg1 ;
-(id<AKAuthorizationEditableDataSources>)editableDataSources;
-(void)setEditableDataSources:(id<AKAuthorizationEditableDataSources>)arg1 ;
-(AKAuthorizationPaneContext *)headerPaneContext;
-(AKAuthorizationPaneContext *)footerPaneContext;
-(NSMutableArray *)mutableConstraints;
-(BOOL)isWristDetectionEnabled;
-(void)setBlurryTray:(UIVisualEffectView *)arg1 ;
@end

