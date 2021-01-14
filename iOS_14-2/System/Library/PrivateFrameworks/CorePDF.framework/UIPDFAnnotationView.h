/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

