/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSBaseEntityContentViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <libobjc.A.dylib/CPSPointsOfInterestPickerInfoDelegate.h>
#import <libobjc.A.dylib/CPSActionButtonLayoutDelegate.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@protocol CPSPointsOfInterestPickerDelegate, UIFocusEnvironment;
@class UILabel, CPSPointsOfInterestTableView, CPSActionButton, NSArray, CPSPointsOfInterestPickerInfoView, UIViewPropertyAnimator, NSString;

@interface CPSPointsOfInterestPickerViewController : CPSBaseEntityContentViewController <UITableViewDataSource, UITableViewDelegate, CPSButtonDelegate, CPSPointsOfInterestPickerInfoDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding> {

	id<CPSPointsOfInterestPickerDelegate> _delegate;
	UILabel* _titleLabel;
	CPSPointsOfInterestTableView* _tableView;
	CPSActionButton* _cancelButton;
	NSArray* _layoutConstraints;
	double _scrollHeight;
	CPSPointsOfInterestPickerInfoView* _infoView;
	unsigned long long _pickerState;
	UIViewPropertyAnimator* _animator;
	id<UIFocusEnvironment> _requestedFocusItem;

}

@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CPSPointsOfInterestTableView * tableView;                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) CPSActionButton * cancelButton;                                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                        //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic) double scrollHeight;                                                //@synthesize scrollHeight=_scrollHeight - In the implementation block
@property (nonatomic,retain) CPSPointsOfInterestPickerInfoView * infoView;                       //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic) unsigned long long pickerState;                                     //@synthesize pickerState=_pickerState - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                                  //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) id<UIFocusEnvironment> requestedFocusItem;                          //@synthesize requestedFocusItem=_requestedFocusItem - In the implementation block
@property (assign,nonatomic,__weak) id<CPSPointsOfInterestPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL useRightHandDriveFocusGuide; 
-(UILabel *)titleLabel;
-(UIViewPropertyAnimator *)animator;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)updateViewConstraints;
-(void)completeTransition:(BOOL)arg1 ;
-(CPSActionButton *)cancelButton;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCancelButton:(CPSActionButton *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id<CPSPointsOfInterestPickerDelegate>)delegate;
-(CPSPointsOfInterestTableView *)tableView;
-(id)template;
-(CGSize)buttonSize;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)setDelegate:(id<CPSPointsOfInterestPickerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)selectedItem;
-(void)setTableView:(CPSPointsOfInterestTableView *)arg1 ;
-(void)setupViews;
-(void)loadView;
-(double)scrollHeight;
-(CPSPointsOfInterestPickerInfoView *)infoView;
-(void)cancelButtonPressed:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelectedItem:(id)arg1 ;
-(void)setInfoView:(CPSPointsOfInterestPickerInfoView *)arg1 ;
-(void)didSelectButton:(id)arg1 ;
-(id)pointsOfInterest;
-(id)initWithEntity:(id)arg1 resourceProvider:(id)arg2 ;
-(void)didUpdateEntity:(id)arg1 ;
-(id)_linearFocusItems;
-(void)transitionToPrimaryCard;
-(void)setScrollHeight:(double)arg1 ;
-(void)modelDidSelect:(id)arg1 ;
-(void)modelDidDeselect:(id)arg1 ;
-(void)transitionToSecondaryCard;
-(unsigned long long)pickerState;
-(void)setPickerState:(unsigned long long)arg1 ;
-(void)_updateFocusedItem:(id)arg1 ;
-(id<UIFocusEnvironment>)requestedFocusItem;
-(void)setRequestedFocusItem:(id<UIFocusEnvironment>)arg1 ;
-(void)actionButtonPressed:(id)arg1 forModel:(id)arg2 ;
-(CGSize)buttonGlyphSize;
@end

