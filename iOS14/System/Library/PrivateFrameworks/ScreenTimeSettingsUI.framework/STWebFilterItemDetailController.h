/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(id)init;
-(void)setCoordinator:(id<STContentPrivacyViewModelCoordinator>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)pageURL;
-(void)setPageTitle:(NSString *)arg1 ;
-(void)setPageURL:(NSString *)arg1 ;
-(NSString *)pageTitle;
-(void)willResignActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(id<STContentPrivacyViewModelCoordinator>)coordinator;
-(STRestrictionItem *)restriction;
-(void)setRestriction:(STRestrictionItem *)arg1 ;
-(void)setIsNamedSite:(BOOL)arg1 ;
-(BOOL)isNamedSite;
-(STWebFilterDetailController *)parentWebFilterController;
-(void)setParentWebFilterController:(STWebFilterDetailController *)arg1 ;
-(void)saveFilterItem;
@end

