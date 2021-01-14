/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactListViewController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class NSArray, CNContactListTableView, CNStarkNoContentBannerView, UITableViewHeaderFooterView, AVExternalDevice, NSString;

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate, CNContactContentViewControllerDelegate> {

	BOOL _limitedUI;
	NSArray* _displayedContactProperties;
	CNContactListTableView* _contactListTableView;
	CNStarkNoContentBannerView* _overlayView;
	UITableViewHeaderFooterView* _siriHeaderView;
	AVExternalDevice* _externalDevice;

}

@property (nonatomic,retain) NSArray * displayedContactProperties;                       //@synthesize displayedContactProperties=_displayedContactProperties - In the implementation block
@property (nonatomic,retain) CNContactListTableView * contactListTableView;              //@synthesize contactListTableView=_contactListTableView - In the implementation block
@property (nonatomic,retain) CNStarkNoContentBannerView * overlayView;                   //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UITableViewHeaderFooterView * siriHeaderView;               //@synthesize siriHeaderView=_siriHeaderView - In the implementation block
@property (assign,nonatomic) BOOL limitedUI;                                             //@synthesize limitedUI=_limitedUI - In the implementation block
@property (nonatomic,retain) AVExternalDevice * externalDevice;                          //@synthesize externalDevice=_externalDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeContactsDisplayedProperties;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)updateLimitedUI;
-(id)initWithDataSource:(id)arg1 searchable:(BOOL)arg2 environment:(id)arg3 shouldUseLargeTitle:(BOOL)arg4 ;
-(id)createTableView;
-(void)setupDataSource;
-(NSArray *)displayedContactProperties;
-(void)setContactListTableView:(CNContactListTableView *)arg1 ;
-(UITableViewHeaderFooterView *)siriHeaderView;
-(id)init;
-(AVExternalDevice *)externalDevice;
-(CNStarkNoContentBannerView *)overlayView;
-(CNContactListTableView *)contactListTableView;
-(id)contactListStyleApplier;
-(void)postMessageOverlayIfNecessary;
-(BOOL)limitedUI;
-(void)setDisplayedContactProperties:(NSArray *)arg1 ;
-(void)showOverlayView;
-(void)refreshTableViewHeaderWithSize:(CGSize)arg1 ;
-(void)setOverlayView:(CNStarkNoContentBannerView *)arg1 ;
-(void)setExternalDevice:(AVExternalDevice *)arg1 ;
-(void)showContactListTableView;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)limitedUINotification:(id)arg1 ;
-(void)viewDidLoad;
-(void)setLimitedUI:(BOOL)arg1 ;
-(void)handleSiriHeaderViewTap:(id)arg1 ;
-(void)setSiriHeaderView:(UITableViewHeaderFooterView *)arg1 ;
-(void)dealloc;
@end

