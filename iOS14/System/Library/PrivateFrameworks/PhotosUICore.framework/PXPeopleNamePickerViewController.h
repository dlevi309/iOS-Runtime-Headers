/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol PXPeopleNamePickerViewControllerDelegate;
@class PXPeopleNamePickerTitleView, NSArray, NSLayoutConstraint, PXPeopleNamePickerResultsTableViewController, NSString;

@interface PXPeopleNamePickerViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UIAdaptivePresentationControllerDelegate> {

	PXPeopleNamePickerTitleView* _titleView;
	id<PXPeopleNamePickerViewControllerDelegate> _delegate;
	NSArray* _savedRightBarItems;
	double _yOffset;
	NSLayoutConstraint* _resultsViewBottomConstraint;
	PXPeopleNamePickerResultsTableViewController* _resultsController;

}

@property (nonatomic,retain) NSArray * savedRightBarItems;                                                  //@synthesize savedRightBarItems=_savedRightBarItems - In the implementation block
@property (assign,nonatomic) double yOffset;                                                                //@synthesize yOffset=_yOffset - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * resultsViewBottomConstraint;                              //@synthesize resultsViewBottomConstraint=_resultsViewBottomConstraint - In the implementation block
@property (nonatomic,retain) PXPeopleNamePickerResultsTableViewController * resultsController;              //@synthesize resultsController=_resultsController - In the implementation block
@property (nonatomic,readonly) PXPeopleNamePickerTitleView * titleView;                                     //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic,__weak) id<PXPeopleNamePickerViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_applicationDidEnterBackground;
-(PXPeopleNamePickerTitleView *)titleView;
-(double)yOffset;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)init;
-(id<PXPeopleNamePickerViewControllerDelegate>)delegate;
-(PXPeopleNamePickerResultsTableViewController *)resultsController;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)setDelegate:(id<PXPeopleNamePickerViewControllerDelegate>)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setYOffset:(double)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(void)setResultsController:(PXPeopleNamePickerResultsTableViewController *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)adjustForAccessoryViewYOffset:(double)arg1 ;
-(void)endNamingSession;
-(double)_titleViewMaxWidthForEditing:(BOOL)arg1 ;
-(void)_showResultsView;
-(void)_hideResultsView;
-(void)_changePlaceholderTextOfTextField:(id)arg1 toColor:(id)arg2 ;
-(NSArray *)savedRightBarItems;
-(void)setSavedRightBarItems:(NSArray *)arg1 ;
-(NSLayoutConstraint *)resultsViewBottomConstraint;
-(void)setResultsViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

