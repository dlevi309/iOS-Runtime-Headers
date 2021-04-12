/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitCore/PKMicaLayer.h>

@protocol PKCheckGlyphLayerDelegate;
@class CAShapeLayer, CAGradientLayer;

@interface PKCheckGlyphLayer : PKMicaLayer {

	CGColorRef _primaryColor;
	CAShapeLayer* _shapeLayer;
	CAGradientLayer* _maskLayer;
	BOOL _covered;
	CATransform3D _uncoveredTransform;
	CATransform3D _coveredTransform;
	BOOL _revealed;
	id<PKCheckGlyphLayerDelegate> _checkGlyphDelegate;

}

@property (assign,nonatomic,__weak) id<PKCheckGlyphLayerDelegate> checkGlyphDelegate;              //@synthesize checkGlyphDelegate=_checkGlyphDelegate - In the implementation block
@property (assign,nonatomic) BOOL revealed;                                                        //@synthesize revealed=_revealed - In the implementation block
-(id)init;
-(void)dealloc;
-(CGColorRef)primaryColor;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(double)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setRevealed:(BOOL)arg1 ;
-(void)setPrimaryColor:(CGColorRef)arg1 animated:(BOOL)arg2 ;
-(void)_createMask;
-(BOOL)revealed;
-(double)_updateCovered:(BOOL)arg1 ;
-(double)setCovered:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<PKCheckGlyphLayerDelegate>)checkGlyphDelegate;
-(void)setCheckGlyphDelegate:(id<PKCheckGlyphLayerDelegate>)arg1 ;
@end

