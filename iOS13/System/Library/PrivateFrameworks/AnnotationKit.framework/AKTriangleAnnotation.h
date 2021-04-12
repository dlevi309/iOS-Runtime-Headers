/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularShapeAnnotation.h>
#import <libobjc.A.dylib/AKFlippableAnnotationProtocol.h>

@class UIBezierPath, NSString;

@interface AKTriangleAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol> {

	BOOL _verticallyFlipped;
	BOOL _horizontallyFlipped;
	UIBezierPath* _path;

}

@property (retain) UIBezierPath * path;                             //@synthesize path=_path - In the implementation block
@property (assign) BOOL verticallyFlipped;                          //@synthesize verticallyFlipped=_verticallyFlipped - In the implementation block
@property (assign) BOOL horizontallyFlipped;                        //@synthesize horizontallyFlipped=_horizontallyFlipped - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(id)displayName;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(BOOL)verticallyFlipped;
-(void)setVerticallyFlipped:(BOOL)arg1 ;
-(BOOL)horizontallyFlipped;
-(void)setHorizontallyFlipped:(BOOL)arg1 ;
@end

