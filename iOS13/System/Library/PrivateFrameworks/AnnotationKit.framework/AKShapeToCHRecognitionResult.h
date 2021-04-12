/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class CHRecognitionResult, UIBezierPath, PKDrawing, AKAnnotation;

@interface AKShapeToCHRecognitionResult : NSObject {

	BOOL _doodlePathIsPrestroked;
	long long _tag;
	CHRecognitionResult* _result;
	UIBezierPath* _doodlePath;
	PKDrawing* _inkDrawing;
	AKAnnotation* _annotation;
	CGRect _doodlePathBoundsInInputView;

}

@property (assign) long long tag;                                   //@synthesize tag=_tag - In the implementation block
@property (retain) CHRecognitionResult * result;                    //@synthesize result=_result - In the implementation block
@property (retain) UIBezierPath * doodlePath;                       //@synthesize doodlePath=_doodlePath - In the implementation block
@property (retain) PKDrawing * inkDrawing;                          //@synthesize inkDrawing=_inkDrawing - In the implementation block
@property (retain) AKAnnotation * annotation;                       //@synthesize annotation=_annotation - In the implementation block
@property (assign) CGRect doodlePathBoundsInInputView;              //@synthesize doodlePathBoundsInInputView=_doodlePathBoundsInInputView - In the implementation block
@property (assign) BOOL doodlePathIsPrestroked;                     //@synthesize doodlePathIsPrestroked=_doodlePathIsPrestroked - In the implementation block
-(CHRecognitionResult *)result;
-(void)setResult:(CHRecognitionResult *)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(AKAnnotation *)annotation;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(id)initWith:(long long)arg1 result:(id)arg2 ;
-(UIBezierPath *)doodlePath;
-(CGRect)doodlePathBoundsInInputView;
-(BOOL)doodlePathIsPrestroked;
-(void)setDoodlePath:(UIBezierPath *)arg1 ;
-(void)setDoodlePathIsPrestroked:(BOOL)arg1 ;
-(void)setDoodlePathBoundsInInputView:(CGRect)arg1 ;
-(void)setInkDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)inkDrawing;
@end

