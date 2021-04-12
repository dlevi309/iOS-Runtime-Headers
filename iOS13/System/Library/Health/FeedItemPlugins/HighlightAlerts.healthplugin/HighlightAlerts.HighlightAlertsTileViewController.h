/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/HighlightAlerts.healthplugin/HighlightAlerts
*/

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface HighlightAlerts.HighlightAlertsTileViewController : UIViewController {

	 context;
	 $__lazy_storage_$_typeImageView;
	 $__lazy_storage_$_bodyLabel;
	 $__lazy_storage_$_descriptionLabel;
	 $__lazy_storage_$_separatorView;
	 $__lazy_storage_$_diagramImageView;
	 descriptionLabelConstraints;
	 descriptionBottomSpacingConstraint;
	 descriptionSeparatorSpacingConstraint;
	 diagramAndSeparatorConstraints;
	 bodyLabelToSeparatorConstraint;
	 bodyLabelToBottomConstraint;
	 bodyLabelAndIconHorizontalConstraints;
	 bodyLabelOnlyHorizontalConstraints;
	 bodyLabelVerticalConstraints;
	 viewModel;

}

@property (copy,nonatomic) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(void)handleTap;
@end

