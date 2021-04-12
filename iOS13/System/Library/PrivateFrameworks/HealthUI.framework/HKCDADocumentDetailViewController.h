/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIViewController.h>

@class UIStackView, _HKReportSegmentControl, HKCDADocumentReportViewController, HKLargePlainTextViewController, UIBarButtonItem, HKBarButtonItemControl;

@interface HKCDADocumentDetailViewController : UIViewController {

	UIStackView* _stackView;
	_HKReportSegmentControl* _reportSegmentControl;
	HKCDADocumentReportViewController* _formattedReportController;
	HKLargePlainTextViewController* _plainTextReportController;
	UIBarButtonItem* _searchButton;
	HKBarButtonItemControl* _searchInSegmentControl;

}

@property (nonatomic,readonly) UIStackView * stackView;                                                    //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) _HKReportSegmentControl * reportSegmentControl;                             //@synthesize reportSegmentControl=_reportSegmentControl - In the implementation block
@property (nonatomic,readonly) HKCDADocumentReportViewController * formattedReportController;              //@synthesize formattedReportController=_formattedReportController - In the implementation block
@property (nonatomic,readonly) HKLargePlainTextViewController * plainTextReportController;                 //@synthesize plainTextReportController=_plainTextReportController - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * searchButton;                                             //@synthesize searchButton=_searchButton - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * searchInSegmentControl;                            //@synthesize searchInSegmentControl=_searchInSegmentControl - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIStackView *)stackView;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(UIBarButtonItem *)searchButton;
-(id)initWithReportData:(id)arg1 ;
-(void)searchButtonAction:(id)arg1 ;
-(void)changeReportDisplayed:(id)arg1 ;
-(void)_replaceLastArrangedViewWith:(id)arg1 ;
-(_HKReportSegmentControl *)reportSegmentControl;
-(HKCDADocumentReportViewController *)formattedReportController;
-(HKLargePlainTextViewController *)plainTextReportController;
-(HKBarButtonItemControl *)searchInSegmentControl;
@end

