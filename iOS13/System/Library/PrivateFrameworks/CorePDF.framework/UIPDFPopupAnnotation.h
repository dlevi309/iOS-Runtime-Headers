/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(UIPDFAnnotation *)parent;
-(void)setParent:(UIPDFAnnotation *)arg1 ;
-(CGRect)bounds;
-(Class)viewClass;
-(int)annotationType;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
-(BOOL)recognizeGestures;
-(CGRect)adjustedBounds;
-(void)setAdjustedBounds:(CGRect)arg1 ;
@end

