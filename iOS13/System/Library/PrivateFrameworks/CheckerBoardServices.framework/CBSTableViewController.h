/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
*/

#import <CheckerBoardServices/CheckerBoardServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, BFFPaneHeaderView, NSString, NSAttributedString, UIView;

@interface CBSTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	BFFPaneHeaderView* _headerView;
	NSString* _titleText;
	NSString* _detailDescriptionText;
	NSAttributedString* _attributedDetailDescriptionText;
	UIView* _containerFooterView;
	CGRect _containerFooterViewFrame;

}

@property (assign,nonatomic) CGRect containerFooterViewFrame;                                 //@synthesize containerFooterViewFrame=_containerFooterViewFrame - In the implementation block
@property (nonatomic,retain) UIView * containerFooterView;                                    //@synthesize containerFooterView=_containerFooterView - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                              //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * detailDescriptionText;                                  //@synthesize detailDescriptionText=_detailDescriptionText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedDetailDescriptionText;              //@synthesize attributedDetailDescriptionText=_attributedDetailDescriptionText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)tableView;
-(void)viewDidLoad;
-(id)headerView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(id)footerView;
-(NSString *)titleText;
-(id)iconName;
-(void)_setupView;
-(void)_updateHeaderView;
-(void)_setupTableView;
-(void)_setupFooterView;
-(NSString *)detailDescriptionText;
-(NSAttributedString *)attributedDetailDescriptionText;
-(id)iconTintColor;
-(void)setContainerFooterView:(UIView *)arg1 ;
-(UIView *)containerFooterView;
-(void)setContainerFooterViewFrame:(CGRect)arg1 ;
-(double)headerToFooterViewSpacing;
-(void)setDetailDescriptionText:(NSString *)arg1 ;
-(void)setAttributedDetailDescriptionText:(NSAttributedString *)arg1 ;
-(BOOL)isTitleAlignedByLastBaseline;
-(CGRect)containerFooterViewFrame;
@end

