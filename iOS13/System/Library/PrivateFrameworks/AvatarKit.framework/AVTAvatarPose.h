/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface AVTAvatarPose : NSObject <NSCopying> {

	BOOL _hasNeckPosition;
	BOOL _hasNeckOrientation;
	double _bakedAnimationBlendFactor;
	NSMutableDictionary* _weights;
	 _neckPosition;
	SCD_Struct_AV19 _neckOrientation;

}

@property (assign,nonatomic)  neckPosition;                                 //@synthesize neckPosition=_neckPosition - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV19 neckOrientation;               //@synthesize neckOrientation=_neckOrientation - In the implementation block
@property (assign,nonatomic) double bakedAnimationBlendFactor;              //@synthesize bakedAnimationBlendFactor=_bakedAnimationBlendFactor - In the implementation block
+(id)friendlyPose;
+(id)neutralPose;
-(id)_avtui_identifier;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setWeights:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)poseByMergingPose:(id)arg1 ;
-(void)setWeight:(double)arg1 forBlendShapeNamed:(id)arg2 ;
-(void)setNeckPosition:;
-(void)setNeckOrientation:(SCD_Struct_AV19)arg1 ;
-(void)setBakedAnimationBlendFactor:(double)arg1 ;
-(double)weightForBlendShapeNamed:(id)arg1 ;
-()neckPosition;
-(SCD_Struct_AV19)neckOrientation;
-(double)bakedAnimationBlendFactor;
-(id)initWithWeights:(id)arg1 neckPosition:(2*)arg2 neckOrientation:(SCD_Struct_AV19*)arg3 bakedAnimationBlendFactor:(double)arg4 ;
-(BOOL)affectsPhysicsSimulation;
@end

