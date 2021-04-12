/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLTransformOp.h>

@class NSString, MDLAnimatedVector3;

@interface MDLTransformRotateOp : NSObject <MDLTransformOp> {

	BOOL _inverse;
	NSString* _name;
	MDLAnimatedVector3* _animatedValue;
	unsigned long long _order;

}

@property (assign,nonatomic) BOOL inverse;                                      //@synthesize inverse=_inverse - In the implementation block
@property (assign,nonatomic) unsigned long long order;                          //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MDLAnimatedVector3 * animatedValue;              //@synthesize animatedValue=_animatedValue - In the implementation block
-(NSString *)name;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(BOOL)inverse;
-(void)setInverse:(BOOL)arg1 ;
-(MDLAnimatedVector3 *)animatedValue;
-(SCD_Struct_MD1)float4x4AtTime:(double)arg1 ;
-(SCD_Struct_MD1)double4x4AtTime:(double)arg1 ;
-(BOOL)IsInverseOp;
-(id)initWithName:(id)arg1 inverse:(BOOL)arg2 order:(unsigned long long)arg3 data:(id)arg4 ;
@end

