/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>

@protocol STContentPrivacyViewModelCoordinator;
@class STRestrictionItem, NSString, STWebFilterDetailController;

@interface STWebFilterItemDetailController : PSListController {

	BOOL _isNamedSite;
	STRestrictionItem* _restriction;
	NSString* _pageURL;
	NSString* _pageTitle;
	id<STContentPrivacyViewModelCoordinator> _coordinator;
	STWebFilterDetailController* _parentWebFilterController;

}

@property (__weak) STWebFilterDetailController * parentWebFilterController;                     //@synthesize parentWebFilterController=_parentWebFilterController - In the implementation block
@property (nonatomic,retain) STRestrictionItem * restriction;                                   //@synthesize restriction=_restriction - In the implementation block
@property (assign,nonatomic) BOOL isNamedSite;                                                  //@synthesize isNamedSite=_isNamedSite - In the implementation block
@property (nonatomic,copy) NSString * pageURL;                                                  //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSString * pageTitle;                                                //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,retain) id<STContentPrivacyViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willResignActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setCoordinator:(id<STContentPrivacyViewModelCoordinator>)arg1 ;
-(id<STContentPrivacyViewModelCoordinator>)coordinator;
-(void)setPageURL:(NSString *)arg1 ;
-(NSString *)pageURL;
-(id)specifiers;
-(BOOL)shouldSelectResponderOnAppearance;
-(NSString *)pageTitle;
-(void)setPageTitle:(NSString *)arg1 ;
-(STRestrictionItem *)restriction;
-(void)setRestriction:(STRestrictionItem *)arg1 ;
-(void)setIsNamedSite:(BOOL)arg1 ;
-(BOOL)isNamedSite;
-(STWebFilterDetailController *)parentWebFilterController;
-(void)setParentWebFilterController:(STWebFilterDetailController *)arg1 ;
-(void)saveFilterItem;
@end

