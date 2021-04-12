/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <UIKitCore/UIView.h>

@class UIPDFAnnotation;

@interface UIPDFAnnotationView : UIView {

	UIPDFAnnotation* _annotation;

}

@property (assign,nonatomic) UIPDFAnnotation * annotation;              //@synthesize annotation=_annotation - In the implementation block
-(UIPDFAnnotation *)annotation;
-(void)setAnnotation:(UIPDFAnnotation *)arg1 ;
@end

