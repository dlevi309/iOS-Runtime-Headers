/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegatePrivate.h>
#import <libobjc.A.dylib/_SFTableViewDiffableDataSourceDelegate.h>
#import <libobjc.A.dylib/SFPrivacyReportExplanationTableViewCellDelegate.h>
#import <libobjc.A.dylib/SFPrivacyReportGridViewDelegate.h>
#import <libobjc.A.dylib/SFPrivacyReportDetailToggleTableViewCellDelegate.h>

@class UITableView, WBSPrivacyReportData, _SFTableViewDiffableDataSource, NSString;

@interface SFPrivacyReportViewController : UIViewController <UITableViewDelegatePrivate, _SFTableViewDiffableDataSourceDelegate, SFPrivacyReportExplanationTableViewCellDelegate, SFPrivacyReportGridViewDelegate, SFPrivacyReportDetailToggleTableViewCellDelegate> {

	UITableView* _tableView;
	BOOL _showExplanationDetailView;
	WBSPrivacyReportData* _privacyReportData;
	_SFTableViewDiffableDataSource* _diffableDataSource;
	BOOL _needsRowHeightUpdate;
	long long _listDetailType;
	double _maxCountForDetailList;
	BOOL _showingCurrentWebsite;
	BOOL _usesInsetStyle;
	NSString* _domain;

}

@property (nonatomic,copy,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithDomain:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(NSString *)domain;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)_doneBarButtonItemAction:(id)arg1 ;
-(void)_updateUsesInsetStyle;
-(void)_createTableViewIfNeededLoadingReport:(BOOL)arg1 ;
-(void)_reloadDataLoadingReport:(BOOL)arg1 ;
-(id)_cellForRowWithIndexPath:(id)arg1 itemIdentifier:(id)arg2 ;
-(void)setNeedsUpdateRowHeight;
-(long long)_sectionTypeFromSectionIndex:(long long)arg1 ;
-(id)dataSource:(id)arg1 headerTextForSection:(long long)arg2 ;
-(void)cellDidToggleExpandDetailedExplanation:(id)arg1 ;
-(void)gridViewDidUpdateContentSize:(id)arg1 ;
-(void)_updateLayoutMargins;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)cellDidToggleDetailType:(id)arg1 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

