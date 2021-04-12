/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject {

	double _translationMagnitude;
	double _scale;
	double _rotation;
	CGPoint _translation;
	CGPoint _absoluteTranslation;

}

@property (assign,setter=_setTranslation:,nonatomic) CGPoint translation;                               //@synthesize translation=_translation - In the implementation block
@property (assign,setter=_setTranslationMagnitude:,nonatomic) double translationMagnitude;              //@synthesize translationMagnitude=_translationMagnitude - In the implementation block
@property (assign,setter=_setAbsoluteTranslation:,nonatomic) CGPoint absoluteTranslation;               //@synthesize absoluteTranslation=_absoluteTranslation - In the implementation block
@property (assign,setter=_setScale:,nonatomic) double scale;                                            //@synthesize scale=_scale - In the implementation block
@property (assign,setter=_setRotation:,nonatomic) double rotation;                                      //@synthesize rotation=_rotation - In the implementation block
-(double)rotation;
-(double)scale;
-(void)_setRotation:(double)arg1 ;
-(void)_setScale:(double)arg1 ;
-(id)description;
-(CGPoint)translation;
-(CGPoint)absoluteTranslation;
-(void)_reset;
-(void)_setTranslation:(CGPoint)arg1 ;
-(void)_setTranslationMagnitude:(double)arg1 ;
-(void)_setAbsoluteTranslation:(CGPoint)arg1 ;
-(double)translationMagnitude;
@end

