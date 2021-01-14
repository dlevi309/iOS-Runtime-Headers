/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PUPhotoStreamCreateTitleDelegate;
@class UITextField, UILabel, UITextView, UINavigationItem, NSArray, NSLayoutConstraint, NSString;

@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate> {

	UITextField* _titleField;
	UILabel* _descriptionLabel;
	UITextView* _textView;
	UILabel* _textPlaceholderLabel;
	UINavigationItem* _navItem;
	UILabel* _instructionLabel;
	NSArray* _constraints;
	BOOL _hidePlaceholder;
	UILabel* _axPlaceholderLabel;
	NSLayoutConstraint* _standardHeightConstraint;
	NSLayoutConstraint* _axHeightConstraint;
	id<PUPhotoStreamCreateTitleDelegate> _titleDelegate;

}

@property (assign,nonatomic) id<PUPhotoStreamCreateTitleDelegate> titleDelegate;              //@synthesize titleDelegate=_titleDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_setTitle:(id)arg1 ;
-(id)navigationItem;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTitleDelegate:(id<PUPhotoStreamCreateTitleDelegate>)arg1 ;
-(void)contentSizeChanged;
-(void)_addConstraintsForTraitCollection:(id)arg1 ;
-(void)_cancelPost:(id)arg1 ;
-(id<PUPhotoStreamCreateTitleDelegate>)titleDelegate;
-(void)viewDidLoad;
-(void)textViewDidChange:(id)arg1 ;
-(void)loadView;
-(CGSize)contentSizeForViewInPopover;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

