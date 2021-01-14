/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(UITextView *)textView;
-(AKPopupAnnotation *)annotation;
-(id<AKNoteEditorViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setAnnotation:(AKPopupAnnotation *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setDelegate:(id<AKNoteEditorViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
@end

