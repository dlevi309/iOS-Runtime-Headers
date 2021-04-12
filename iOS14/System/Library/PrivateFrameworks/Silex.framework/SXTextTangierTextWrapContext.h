/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol TSWPLayoutTarget;
#import <Silex/Silex-Structs.h>
@class TSWPColumn, TSDLayout, TSDWrapPolygon, TSUPointerKeyDictionary;

@interface SXTextTangierTextWrapContext : NSObject {

	TSWPColumn* _column;
	TSDLayout*<TSWPLayoutTarget> _target;
	TSDWrapPolygon* _interiorWrapPolygon;
	TSUPointerKeyDictionary* _wrapPathInverseTransformInRootDictionary;
	CGAffineTransform _targetInverseTransformInRoot;

}

@property (nonatomic,retain) TSUPointerKeyDictionary * wrapPathInverseTransformInRootDictionary;              //@synthesize wrapPathInverseTransformInRootDictionary=_wrapPathInverseTransformInRootDictionary - In the implementation block
@property (nonatomic,readonly) TSWPColumn * column;                                                           //@synthesize column=_column - In the implementation block
@property (nonatomic,__weak,readonly) TSDLayout*<TSWPLayoutTarget> target;                                    //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) TSDWrapPolygon * interiorWrapPolygon;                                          //@synthesize interiorWrapPolygon=_interiorWrapPolygon - In the implementation block
@property (nonatomic,readonly) CGAffineTransform targetInverseTransformInRoot;                                //@synthesize targetInverseTransformInRoot=_targetInverseTransformInRoot - In the implementation block
-(void)setTarget:(TSDLayout*<TSWPLayoutTarget>)arg1 ;
-(TSWPColumn *)column;
-(TSDLayout*<TSWPLayoutTarget>)target;
-(TSUPointerKeyDictionary *)wrapPathInverseTransformInRootDictionary;
-(id)initWithColumn:(id)arg1 targetLayout:(id)arg2 ;
-(id)transformedWrapPolygonForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(CGAffineTransform)arg2 ;
-(TSDWrapPolygon *)interiorWrapPolygon;
-(CGAffineTransform)targetInverseTransformInRoot;
-(void)setWrapPathInverseTransformInRootDictionary:(TSUPointerKeyDictionary *)arg1 ;
@end

