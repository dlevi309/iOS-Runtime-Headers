/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class PVFace;

@interface VCPFacePair : NSObject {

	PVFace* _face1;
	PVFace* _face2;
	double _score;

}

@property (nonatomic,readonly) PVFace * face1;              //@synthesize face1=_face1 - In the implementation block
@property (nonatomic,readonly) PVFace * face2;              //@synthesize face2=_face2 - In the implementation block
@property (nonatomic,readonly) double score;                //@synthesize score=_score - In the implementation block
-(id)initWithFace:(id)arg1 andFace:(id)arg2 andScore:(double)arg3 ;
-(PVFace *)face1;
-(PVFace *)face2;
-(double)score;
@end

