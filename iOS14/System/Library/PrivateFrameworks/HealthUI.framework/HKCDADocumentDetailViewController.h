/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIStackView *)stackView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(UIBarButtonItem *)searchButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithReportData:(id)arg1 ;
-(void)searchButtonAction:(id)arg1 ;
-(void)changeReportDisplayed:(id)arg1 ;
-(void)_replaceLastArrangedViewWith:(id)arg1 ;
-(_HKReportSegmentControl *)reportSegmentControl;
-(HKCDADocumentReportViewController *)formattedReportController;
-(HKLargePlainTextViewController *)plainTextReportController;
-(HKBarButtonItemControl *)searchInSegmentControl;
@end

