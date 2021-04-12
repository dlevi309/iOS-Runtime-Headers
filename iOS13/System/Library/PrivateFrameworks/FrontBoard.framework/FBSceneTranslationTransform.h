/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneTranslationTransform : FBSceneTransform {

	CGPoint _translation;

}

@property (assign,nonatomic) CGPoint translation;              //@synthesize translation=_translation - In the implementation block
-(id)description;
-(CGPoint)translation;
-(void)_updateTransform;
-(void)setTranslation:(CGPoint)arg1 ;
-(id)initWithTranslation:(CGPoint)arg1 ;
@end

