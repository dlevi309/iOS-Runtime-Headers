/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxTransform : NSObject {

	FxTransformPriv* _priv;

}
+(id)identity;
+(id)transformWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)transformWithScale:(CGPoint)arg1 rotate:(float)arg2 translate:(CGPoint)arg3 shear:(CGPoint)arg4 ;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(CGPoint)scale;
-(CGPoint)shear;
-(void)setTranslation:(CGPoint)arg1 ;
-(CGPoint)translation;
-(void)setScale:(CGPoint)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(void)dealloc;
-(void)setShear:(CGPoint)arg1 ;
-(void)setCGAffineTransform:(CGAffineTransform)arg1 ;
-(id)initWithScale:(CGPoint)arg1 rotate:(float)arg2 translate:(CGPoint)arg3 shear:(CGPoint)arg4 ;
-(CGAffineTransform)cgAffineTransform;
@end

