/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIPDFAnnotationControllerDelegate
@optional
-(BOOL)willTrackAnnotationAtPoint:(CGPoint)arg1 controller:(id)arg2;
-(CGSize*)marginNoteImageSize:(id)arg1;
-(void)annotation:(id)arg1 didEndTrackingAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(CGImageRef)underlineImage:(CGRect)arg1 controller:(id)arg2;
-(void)annotation:(id)arg1 wasTouchedAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotationWasRemoved:(id)arg1 controller:(id)arg2;
-(void)annotation:(id)arg1 isBeingPressedAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(id)marginNoteImage:(id)arg1 controller:(id)arg2;
-(CGImageRef)newHighlightMaskImage:(CGRect)arg1 controller:(id)arg2;

@end

