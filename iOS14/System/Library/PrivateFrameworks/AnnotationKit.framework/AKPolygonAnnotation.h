/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularShapeAnnotation.h>
#import <libobjc.A.dylib/AKFlippableAnnotationProtocol.h>

@class NSString;

@interface AKPolygonAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol> {

	BOOL _verticallyFlipped;
	unsigned long long _pointCount;

}

@property (assign) unsigned long long pointCount;                   //@synthesize pointCount=_pointCount - In the implementation block
@property (assign) BOOL verticallyFlipped;                          //@synthesize verticallyFlipped=_verticallyFlipped - In the implementation block
@property (assign) BOOL horizontallyFlipped; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPointCount:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(unsigned long long)pointCount;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(id)keysForValuesToObserveForAdornments;
-(BOOL)verticallyFlipped;
-(void)setVerticallyFlipped:(BOOL)arg1 ;
@end

