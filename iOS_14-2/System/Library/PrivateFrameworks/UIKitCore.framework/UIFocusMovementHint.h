/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGVector)rotation;
-(CGVector)translation;
-(CATransform3D)perspectiveTransform;
-(double)translationAmount;
-(void)setRotationAmount:(double)arg1 ;
-(CATransform3D)interactionTransform;
-(void)setTranslationAmount:(double)arg1 ;
-(CGVector)movementDirection;
-(id)initWithMovementDirection:(CGVector)arg1 itemSize:(CGSize)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)rotationAmount;
@end

