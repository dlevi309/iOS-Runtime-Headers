/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@interface AKRedactionRectAnnotation : AKRectangularShapeAnnotation {

	BOOL _isOpaque;
	BOOL _isHighlighted;

}

@property (assign) BOOL isOpaque;                   //@synthesize isOpaque=_isOpaque - In the implementation block
@property (assign) BOOL isHighlighted;              //@synthesize isHighlighted=_isHighlighted - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isOpaque;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isHighlighted;
-(void)setIsHighlighted:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(BOOL)shouldBurnIn;
-(void)setIsOpaque:(BOOL)arg1 ;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
@end

