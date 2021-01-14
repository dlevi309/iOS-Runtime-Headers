/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKShapeAnnotation.h>
#import <libobjc.A.dylib/AKTextAnnotationProtocol.h>

@class NSTextStorage, NSDictionary, NSString;

@interface AKArrowAnnotation : AKShapeAnnotation <AKTextAnnotationProtocol> {

	unsigned long long _arrowHeadStyle;
	NSTextStorage* _annotationText;
	NSDictionary* _typingAttributes;
	CGPoint _startPoint;
	CGPoint _endPoint;
	CGPoint _midPoint;

}

@property (assign) CGPoint startPoint;                              //@synthesize startPoint=_startPoint - In the implementation block
@property (assign) CGPoint endPoint;                                //@synthesize endPoint=_endPoint - In the implementation block
@property (assign) CGPoint midPoint;                                //@synthesize midPoint=_midPoint - In the implementation block
@property (assign) unsigned long long arrowHeadStyle;               //@synthesize arrowHeadStyle=_arrowHeadStyle - In the implementation block
@property (retain) NSTextStorage * annotationText;                  //@synthesize annotationText=_annotationText - In the implementation block
@property (copy) NSDictionary * typingAttributes;                   //@synthesize typingAttributes=_typingAttributes - In the implementation block
@property (assign) BOOL isEditingText; 
@property (assign) BOOL textIsFixedWidth; 
@property (assign) BOOL textIsFixedHeight; 
@property (assign) BOOL textIsClipped; 
@property (assign) BOOL shouldUsePlaceholderText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)typingAttributes;
-(NSTextStorage *)annotationText;
-(void)setAnnotationText:(NSTextStorage *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(void)translateBy:(CGPoint)arg1 ;
-(void)setMidPoint:(CGPoint)arg1 ;
-(void)setArrowHeadStyle:(unsigned long long)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(CGPoint)midPoint;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(id)keysForValuesToObserveForAdornments;
-(unsigned long long)arrowHeadStyle;
@end

