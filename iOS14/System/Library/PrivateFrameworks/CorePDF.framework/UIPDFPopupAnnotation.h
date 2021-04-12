/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFAnnotation.h>

@class UIPDFAnnotation;

@interface UIPDFPopupAnnotation : UIPDFAnnotation {

	UIPDFAnnotation* parent;
	CGRect _adjustedBounds;

}

@property (assign,nonatomic) UIPDFAnnotation * parent; 
@property (assign,nonatomic) CGRect adjustedBounds;                 //@synthesize adjustedBounds=_adjustedBounds - In the implementation block
-(CGRect)bounds;
-(UIPDFAnnotation *)parent;
-(id)init;
-(void)setParent:(UIPDFAnnotation *)arg1 ;
-(Class)viewClass;
-(int)annotationType;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
-(BOOL)recognizeGestures;
-(CGRect)adjustedBounds;
-(void)setAdjustedBounds:(CGRect)arg1 ;
@end

