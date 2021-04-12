/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class SCNMorpher, SCNNode;

@interface AVTCorrectiveMorpherDescriptor : NSObject {

	SCNMorpher* _correctiveWriteMorpher;
	long long _correctiveTargetIndex;
	SCNNode* _drivingReadMorpherNode0;
	SCNNode* _drivingReadMorpherNode1;
	SCNNode* _drivingReadMorpherNode2;
	SCNNode* _drivingReadMorpherNode3;
	long long _drivingTargetIndex0;
	long long _drivingTargetIndex1;
	long long _drivingTargetIndex2;
	long long _drivingTargetIndex3;
	long long _drivingTargetCount;

}

@property (nonatomic,retain) SCNMorpher * correctiveWriteMorpher;              //@synthesize correctiveWriteMorpher=_correctiveWriteMorpher - In the implementation block
@property (assign,nonatomic) long long correctiveTargetIndex;                  //@synthesize correctiveTargetIndex=_correctiveTargetIndex - In the implementation block
@property (nonatomic,retain) SCNNode * drivingReadMorpherNode0;                //@synthesize drivingReadMorpherNode0=_drivingReadMorpherNode0 - In the implementation block
@property (nonatomic,retain) SCNNode * drivingReadMorpherNode1;                //@synthesize drivingReadMorpherNode1=_drivingReadMorpherNode1 - In the implementation block
@property (nonatomic,retain) SCNNode * drivingReadMorpherNode2;                //@synthesize drivingReadMorpherNode2=_drivingReadMorpherNode2 - In the implementation block
@property (nonatomic,retain) SCNNode * drivingReadMorpherNode3;                //@synthesize drivingReadMorpherNode3=_drivingReadMorpherNode3 - In the implementation block
@property (assign,nonatomic) long long drivingTargetIndex0;                    //@synthesize drivingTargetIndex0=_drivingTargetIndex0 - In the implementation block
@property (assign,nonatomic) long long drivingTargetIndex1;                    //@synthesize drivingTargetIndex1=_drivingTargetIndex1 - In the implementation block
@property (assign,nonatomic) long long drivingTargetIndex2;                    //@synthesize drivingTargetIndex2=_drivingTargetIndex2 - In the implementation block
@property (assign,nonatomic) long long drivingTargetIndex3;                    //@synthesize drivingTargetIndex3=_drivingTargetIndex3 - In the implementation block
@property (assign,nonatomic) long long drivingTargetCount;                     //@synthesize drivingTargetCount=_drivingTargetCount - In the implementation block
-(SCNMorpher *)correctiveWriteMorpher;
-(void)setCorrectiveWriteMorpher:(SCNMorpher *)arg1 ;
-(long long)correctiveTargetIndex;
-(void)setCorrectiveTargetIndex:(long long)arg1 ;
-(SCNNode *)drivingReadMorpherNode0;
-(void)setDrivingReadMorpherNode0:(SCNNode *)arg1 ;
-(SCNNode *)drivingReadMorpherNode1;
-(void)setDrivingReadMorpherNode1:(SCNNode *)arg1 ;
-(SCNNode *)drivingReadMorpherNode2;
-(void)setDrivingReadMorpherNode2:(SCNNode *)arg1 ;
-(SCNNode *)drivingReadMorpherNode3;
-(void)setDrivingReadMorpherNode3:(SCNNode *)arg1 ;
-(long long)drivingTargetIndex0;
-(void)setDrivingTargetIndex0:(long long)arg1 ;
-(long long)drivingTargetIndex1;
-(void)setDrivingTargetIndex1:(long long)arg1 ;
-(long long)drivingTargetIndex2;
-(void)setDrivingTargetIndex2:(long long)arg1 ;
-(long long)drivingTargetIndex3;
-(void)setDrivingTargetIndex3:(long long)arg1 ;
-(long long)drivingTargetCount;
-(void)setDrivingTargetCount:(long long)arg1 ;
@end

