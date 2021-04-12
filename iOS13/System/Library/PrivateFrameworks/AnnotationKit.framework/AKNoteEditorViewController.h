/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIViewController.h>

@protocol AKNoteEditorViewControllerDelegate;
@class UITextView, AKPopupAnnotation;

@interface AKNoteEditorViewController : UIViewController {

	UITextView* _textView;
	AKPopupAnnotation* _annotation;
	id<AKNoteEditorViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) UITextView * textView;                                               //@synthesize textView=_textView - In the implementation block
@property (retain) AKPopupAnnotation * annotation;                                                //@synthesize annotation=_annotation - In the implementation block
@property (assign,nonatomic,__weak) id<AKNoteEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AKNoteEditorViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AKNoteEditorViewControllerDelegate>)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(AKPopupAnnotation *)annotation;
-(void)setAnnotation:(AKPopupAnnotation *)arg1 ;
@end

