/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PXFeedbackFormDelegate;
@class NSArray, NSMutableDictionary, UITextView, UITableViewController, NSString;

@interface PXFeedbackFormUIViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {

	BOOL _userLikedIt;
	BOOL _wantsCustomFeedbackSection;
	BOOL _wantsPositiveFeedbackSection;
	NSArray* _positiveFeedbackKeys;
	NSMutableDictionary* _positiveFeedbackValues;
	NSArray* _negativeFeedbackKeys;
	NSMutableDictionary* _negativeFeedbackValues;
	UITextView* _customFeedbackTextView;
	UITableViewController* _tableViewController;
	id<PXFeedbackFormDelegate> _delegate;

}

@property (nonatomic,retain) UITableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
@property (nonatomic,retain) id<PXFeedbackFormDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<PXFeedbackFormDelegate>)delegate;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<PXFeedbackFormDelegate>)arg1 ;
-(UITableViewController *)tableViewController;
-(void)setTableViewController:(UITableViewController *)arg1 ;
-(void)cancelFeedback:(id)arg1 ;
-(void)finishWithSuccess:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 positiveKeys:(id)arg2 negativeKeys:(id)arg3 wantsCustomFeedbackSection:(BOOL)arg4 ;
-(void)sendFeedback:(id)arg1 ;
-(void)_handleDoneButtonWasPressedOnCustomFeedbackView;
-(BOOL)_isSelectedRow:(id)arg1 inSection:(long long)arg2 ;
-(void)_setSelectionStateForKey:(id)arg1 inSection:(long long)arg2 to:(BOOL)arg3 ;
-(id)_feedbackKeyForIndexPath:(id)arg1 ;
-(void)_markCell:(id)arg1 asSelected:(BOOL)arg2 ;
-(long long)_feedbackFormSectionForSectionIndex:(long long)arg1 ;
@end

