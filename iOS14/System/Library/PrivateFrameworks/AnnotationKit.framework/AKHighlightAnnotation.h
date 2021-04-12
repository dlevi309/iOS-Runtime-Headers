/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKParentAnnotationProtocol.h>

@class AKAnnotation, UIColor, NSArray, NSString;

@interface AKHighlightAnnotation : AKAnnotation <AKParentAnnotationProtocol> {

	unsigned long long _style;
	UIColor* _color;
	NSArray* _quadPoints;

}

@property (assign) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (retain) UIColor * color;                                 //@synthesize color=_color - In the implementation block
@property (retain) NSArray * quadPoints;                            //@synthesize quadPoints=_quadPoints - In the implementation block
@property (__weak) AKAnnotation * childAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(UIColor *)color;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)displayName;
-(unsigned long long)style;
-(void)translateBy:(CGPoint)arg1 ;
-(NSArray *)quadPoints;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)setQuadPoints:(NSArray *)arg1 ;
@end

