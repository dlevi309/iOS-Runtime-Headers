/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIFocusMovementHint : NSObject <NSCopying> {

	double _translationAmount;
	double _rotationAmount;
	CGVector _movementDirection;

}

@property (assign,nonatomic) double translationAmount;                          //@synthesize translationAmount=_translationAmount - In the implementation block
@property (assign,nonatomic) double rotationAmount;                             //@synthesize rotationAmount=_rotationAmount - In the implementation block
@property (nonatomic,readonly) CGVector movementDirection;                      //@synthesize movementDirection=_movementDirection - In the implementation block
@property (nonatomic,readonly) CATransform3D perspectiveTransform; 
@property (nonatomic,readonly) CGVector rotation; 
@property (nonatomic,readonly) CGVector translation; 
@property (nonatomic,readonly) CATransform3D interactionTransform; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGVector)rotation;
-(CGVector)translation;
-(CATransform3D)perspectiveTransform;
-(id)initWithMovementDirection:(CGVector)arg1 itemSize:(CGSize)arg2 ;
-(CATransform3D)interactionTransform;
-(CGVector)movementDirection;
-(double)translationAmount;
-(void)setTranslationAmount:(double)arg1 ;
-(double)rotationAmount;
-(void)setRotationAmount:(double)arg1 ;
@end

