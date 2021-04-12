/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLTransformOp.h>

@class NSString, MDLAnimatedScalar;

@interface MDLTransformRotateZOp : NSObject <MDLTransformOp> {

	BOOL _inverse;
	NSString* _name;
	MDLAnimatedScalar* _animatedValue;

}

@property (assign,nonatomic) BOOL inverse;                                     //@synthesize inverse=_inverse - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MDLAnimatedScalar * animatedValue;              //@synthesize animatedValue=_animatedValue - In the implementation block
-(BOOL)inverse;
-(NSString *)name;
-(void)setInverse:(BOOL)arg1 ;
-(MDLAnimatedScalar *)animatedValue;
-(SCD_Struct_MD1)float4x4AtTime:(double)arg1 ;
-(SCD_Struct_MD1)double4x4AtTime:(double)arg1 ;
-(BOOL)IsInverseOp;
-(id)initWithName:(id)arg1 inverse:(BOOL)arg2 data:(id)arg3 ;
@end

