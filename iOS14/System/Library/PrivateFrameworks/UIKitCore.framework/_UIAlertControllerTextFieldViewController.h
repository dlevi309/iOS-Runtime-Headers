/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UICollectionViewController.h>

@protocol _UIAlertControllerTextFieldViewControllerContaining;
@class NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout, NSArray;

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {

	NSMutableArray* textFieldViews;
	NSMutableArray* textFields;
	BOOL _textFieldsCanBecomeFirstResponder;
	UIAlertControllerVisualStyle* _visualStyle;
	UICollectionViewFlowLayout* _collectionViewLayout;
	BOOL _hidden;
	id<_UIAlertControllerTextFieldViewControllerContaining> _container;

}

@property (assign,nonatomic,__weak) id<_UIAlertControllerTextFieldViewControllerContaining> container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL textFieldsCanBecomeFirstResponder; 
@property (assign,nonatomic) UIAlertControllerVisualStyle * visualStyle; 
@property (readonly) NSArray * textFields; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                           //@synthesize hidden=_hidden - In the implementation block
-(UIAlertControllerVisualStyle *)visualStyle;
-(BOOL)resignFirstResponder;
-(void)viewWillLayoutSubviews;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)setVisualStyle:(UIAlertControllerVisualStyle *)arg1 ;
-(BOOL)isHidden;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(double)_bottomMarginForTextFields;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)textFieldAtIndex:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setContainer:(id<_UIAlertControllerTextFieldViewControllerContaining>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)textFieldsCanBecomeFirstResponder;
-(void)removeAllTextFields;
-(void)_returnKeyPressedInTextField:(id)arg1 ;
-(long long)numberOfTextFields;
-(id)textFieldContainerViews;
-(NSArray *)textFields;
-(id<_UIAlertControllerTextFieldViewControllerContaining>)container;
-(id)addTextFieldWithPlaceholder:(id)arg1 ;
-(void)updateTextFieldStyle;
@end

