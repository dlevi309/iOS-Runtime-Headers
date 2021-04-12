/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier {

	CATransform3D _transform3D;
	CATransform3D _proposedTransform3D;

}

@property (nonatomic,readonly) CATransform3D transform3D;                    //@synthesize transform3D=_transform3D - In the implementation block
@property (assign,nonatomic) CATransform3D proposedTransform3D;              //@synthesize proposedTransform3D=_proposedTransform3D - In the implementation block
-(id)description;
-(CATransform3D)transform3D;
-(void)setGLUniformWithShader:(id)arg1 ;
-(id)initWithTransform3D:(CATransform3D)arg1 ;
-(void)setProposedTransform3D:(CATransform3D)arg1 ;
-(CATransform3D)proposedTransform3D;
@end

