/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactContentViewController.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery, CNCardiMessageEmailGroup, NSArray, CNStarkContactNameView;

@interface CNStarkContactViewController : CNContactContentViewController <CNPropertyBestIDSValueQueryDelegate> {

	CNPropertyBestIDSValueQuery* _bestiMessageQuery;
	CNCardiMessageEmailGroup* _iMessageEmailGroup;
	NSArray* _activatedConstraints;
	CNStarkContactNameView* _contactNameView;

}

@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestiMessageQuery;              //@synthesize bestiMessageQuery=_bestiMessageQuery - In the implementation block
@property (nonatomic,retain) CNCardiMessageEmailGroup * iMessageEmailGroup;                //@synthesize iMessageEmailGroup=_iMessageEmailGroup - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                               //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) CNStarkContactNameView * contactNameView;                     //@synthesize contactNameView=_contactNameView - In the implementation block
+(BOOL)enablesTransportButtons;
+(long long)tableViewStyle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)displayHeaderView;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(CGSize)setupTableHeaderView;
-(void)loadContactViewControllerViews;
-(BOOL)shouldDisplayAvatarHeaderView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)applyContactStyle;
-(BOOL)isScrollViewControllingHeaderResizeAnimation:(id)arg1 ;
-(void)initializeTableViewsForHeaderHeight;
-(void)viewDidLoad;
-(id)initWithContact:(id)arg1 ;
-(BOOL)isGeminiAvailable;
-(CNCardiMessageEmailGroup *)iMessageEmailGroup;
-(BOOL)hasTableViewHeaderFirstSection;
-(void)_initiateBestiMessagePropertyQuery;
-(CNPropertyBestIDSValueQuery *)bestiMessageQuery;
-(void)setBestiMessageQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
-(void)setIMessageEmailGroup:(CNCardiMessageEmailGroup *)arg1 ;
-(CNStarkContactNameView *)contactNameView;
-(void)setContactNameView:(CNStarkContactNameView *)arg1 ;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(void)setupConstraints;
-(void)queryComplete;
-(void)updateFontColors;
-(id)title;
-(void)dealloc;
@end

