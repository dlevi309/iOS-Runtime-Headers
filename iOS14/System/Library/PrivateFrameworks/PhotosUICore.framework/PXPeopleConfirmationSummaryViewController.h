/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@protocol PXPeopleSummaryDelegate;
@class NSLayoutConstraint, UILabel;

@interface PXPeopleConfirmationSummaryViewController : UIViewController {

	id<PXPeopleSummaryDelegate> _delegate;
	NSLayoutConstraint* _labelSpacingConstraint;
	UILabel* _summaryLabel;

}

@property (retain) NSLayoutConstraint * labelSpacingConstraint;              //@synthesize labelSpacingConstraint=_labelSpacingConstraint - In the implementation block
@property (retain) UILabel * summaryLabel;                                   //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (__weak) id<PXPeopleSummaryDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id<PXPeopleSummaryDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<PXPeopleSummaryDelegate>)arg1 ;
-(void)setSummaryLabel:(UILabel *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(UILabel *)summaryLabel;
-(void)_updateDynamicTypeSpacing;
-(NSLayoutConstraint *)labelSpacingConstraint;
-(void)setLabelSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

