/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat3 : TSDGLShaderQualifier {

	CGAffineTransform _affineTransform;
	CGAffineTransform _proposedAffineTransform;

}

@property (nonatomic,readonly) CGAffineTransform affineTransform;                    //@synthesize affineTransform=_affineTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform proposedAffineTransform;              //@synthesize proposedAffineTransform=_proposedAffineTransform - In the implementation block
-(id)description;
-(CGAffineTransform)affineTransform;
-(void)setGLUniformWithShader:(id)arg1 ;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
-(void)setProposedAffineTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)proposedAffineTransform;
@end

