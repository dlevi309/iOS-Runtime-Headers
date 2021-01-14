/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ARSceneReconstructionOptions : NSObject <NSCopying> {

	BOOL _deterministicMode;
	BOOL _lowQosSchedulingEnabled;
	long long _voxelSize;
	long long _bucketsCount;
	long long _preset;

}

@property (assign,nonatomic) long long voxelSize;                       //@synthesize voxelSize=_voxelSize - In the implementation block
@property (assign,nonatomic) long long bucketsCount;                    //@synthesize bucketsCount=_bucketsCount - In the implementation block
@property (assign,nonatomic) long long preset;                          //@synthesize preset=_preset - In the implementation block
@property (assign,nonatomic) BOOL deterministicMode;                    //@synthesize deterministicMode=_deterministicMode - In the implementation block
@property (assign,nonatomic) BOOL lowQosSchedulingEnabled;              //@synthesize lowQosSchedulingEnabled=_lowQosSchedulingEnabled - In the implementation block
-(id)init;
-(void)setPreset:(long long)arg1 ;
-(long long)preset;
-(long long)bucketsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)lowQosSchedulingEnabled;
-(long long)voxelSize;
-(void)setVoxelSize:(long long)arg1 ;
-(BOOL)deterministicMode;
-(void)setDeterministicMode:(BOOL)arg1 ;
-(void)setLowQosSchedulingEnabled:(BOOL)arg1 ;
-(void)setBucketsCount:(long long)arg1 ;
@end

