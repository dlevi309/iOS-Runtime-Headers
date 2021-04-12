/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxTransform : NSObject {

	FxTransformPriv* _priv;

}
+(id)identity;
+(id)transformWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)transformWithScale:(CGPoint)arg1 rotate:(float)arg2 translate:(CGPoint)arg3 shear:(CGPoint)arg4 ;
-(void)dealloc;
-(CGPoint)scale;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(void)setScale:(CGPoint)arg1 ;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
-(CGPoint)shear;
-(void)setShear:(CGPoint)arg1 ;
-(void)setCGAffineTransform:(CGAffineTransform)arg1 ;
-(id)initWithScale:(CGPoint)arg1 rotate:(float)arg2 translate:(CGPoint)arg3 shear:(CGPoint)arg4 ;
-(CGAffineTransform)cgAffineTransform;
@end

