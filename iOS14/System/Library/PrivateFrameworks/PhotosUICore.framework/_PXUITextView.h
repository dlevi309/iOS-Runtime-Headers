/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, NSString;

@interface _PXUITextView : UITextView <PKScribbleInteractionDelegate, UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(double)_distanceFromContentToGivenPoint:(CGPoint)arg1 charIndexAtPoint:(unsigned long long*)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(void)_handleTapGesture:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_linkTappedByGesture:(id)arg1 charIndexAtPoint:(unsigned long long*)arg2 ;
@end

