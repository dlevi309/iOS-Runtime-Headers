/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_AV20 _neckOrientation;

}

@property (assign,nonatomic)  neckPosition;                                 //@synthesize neckPosition=_neckPosition - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV20 neckOrientation;               //@synthesize neckOrientation=_neckOrientation - In the implementation block
@property (assign,nonatomic) double bakedAnimationBlendFactor;              //@synthesize bakedAnimationBlendFactor=_bakedAnimationBlendFactor - In the implementation block
+(id)friendlyPose;
+(id)neutralPose;
+(id)posesForMemojiInPosePack:(id)arg1 ;
+(id)posesInPosePack:(id)arg1 avatarSelectionBlock:(/*^block*/id)arg2 ;
+(id)posesInPosePack:(id)arg1 ;
+(id)posesForAnimojiNamed:(id)arg1 inPosePack:(id)arg2 ;
-(id)_avtui_identifier;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(id)initWithScene:(id)arg1 ;
-(void)setWeights:(id)arg1 ;
-(id)poseByMergingPose:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWeight:(double)arg1 forBlendShapeNamed:(id)arg2 ;
-(void)setNeckPosition:;
-(void)setNeckOrientation:(SCD_Struct_AV20)arg1 ;
-(void)setBakedAnimationBlendFactor:(double)arg1 ;
-(double)weightForBlendShapeNamed:(id)arg1 ;
-()neckPosition;
-(SCD_Struct_AV20)neckOrientation;
-(double)bakedAnimationBlendFactor;
-(id)initWithWeights:(id)arg1 neckPosition:(2*)arg2 neckOrientation:(SCD_Struct_AV20*)arg3 bakedAnimationBlendFactor:(double)arg4 ;
-(BOOL)affectsPhysicsSimulation;
@end

