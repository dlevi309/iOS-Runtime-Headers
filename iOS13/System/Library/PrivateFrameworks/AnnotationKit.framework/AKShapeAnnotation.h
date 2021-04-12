/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AKStrokedAnnotation.h>
#import <libobjc.A.dylib/AKFilledAnnotationProtocol.h>

@class UIColor, NSString;

@interface AKShapeAnnotation : AKStrokedAnnotation <AKFilledAnnotationProtocol> {

	UIColor* _fillColor;

}

@property (retain) UIColor * fillColor;                             //@synthesize fillColor=_fillColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
@end

