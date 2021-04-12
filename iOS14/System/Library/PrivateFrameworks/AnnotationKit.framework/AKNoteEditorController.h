/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <libobjc.A.dylib/AKNoteEditorViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol AKNoteEditorControllerDelegate;
@class AKPopupAnnotation, AKNoteEditorViewController, NSString;

@interface AKNoteEditorController : NSObject <AKNoteEditorViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	AKPopupAnnotation* _annotation;
	id<AKNoteEditorControllerDelegate> _delegate;
	AKNoteEditorViewController* _contentViewController;

}

@property (retain) AKNoteEditorViewController * contentViewController;                        //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) AKPopupAnnotation * annotation;                                  //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSString * editedText; 
@property (assign,nonatomic,__weak) id<AKNoteEditorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AKPopupAnnotation *)annotation;
-(void)show:(BOOL)arg1 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id<AKNoteEditorControllerDelegate>)delegate;
-(void)setAnnotation:(AKPopupAnnotation *)arg1 ;
-(void)setContentViewController:(AKNoteEditorViewController *)arg1 ;
-(void)finishEditing;
-(AKNoteEditorViewController *)contentViewController;
-(void)setDelegate:(id<AKNoteEditorControllerDelegate>)arg1 ;
-(void)hide;
-(id)_popupBackgroundColorForPopupAnnotation:(id)arg1 ;
-(void)noteEditorViewControllerDidBeginEditing:(id)arg1 ;
-(void)noteEditorViewControllerDidEndEditing:(id)arg1 ;
-(NSString *)editedText;
-(double)suggestedEditorHeightForWidth:(double)arg1 ;
-(void)beginEditing:(BOOL)arg1 ;
@end

