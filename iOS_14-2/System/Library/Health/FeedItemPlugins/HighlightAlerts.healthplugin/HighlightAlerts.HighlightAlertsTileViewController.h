/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/HighlightAlerts.healthplugin/HighlightAlerts
*/

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface HighlightAlerts.HighlightAlertsTileViewController : UIViewController {

	 context;
	 $__lazy_storage_$_typeImageView;
	 $__lazy_storage_$_bodyLabel;
	 $__lazy_storage_$_descriptionLabel;
	 $__lazy_storage_$_diagramImageView;
	 moreDetailsFont;
	 descriptionLabelConstraints;
	 descriptionBottomSpacingConstraint;
	 descriptionToDiagramSpacingConstraint;
	 diagramToBottomConstraints;
	 bodyLabelToDiagramSpacingConstraint;
	 bodyLabelToBottomSpacingConstraint;
	 bodyLabelAndIconHorizontalConstraints;
	 bodyLabelOnlyHorizontalConstraints;
	 bodyLabelVerticalConstraints;
	 viewModel;

}

@property (copy,nonatomic) NSString * title; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)handleTap;
@end

