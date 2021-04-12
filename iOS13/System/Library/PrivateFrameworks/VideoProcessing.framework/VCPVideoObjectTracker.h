/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCtrTracker;

@interface VCPVideoObjectTracker : NSObject {

	VCPCtrTracker* _correlationTracker;
	float _confidence;
	int _lostCount;
	SCD_Struct_VC6 _start;
	CGRect _objectBoundsInitial;
	CGRect _objectBounds;

}

@property (nonatomic,readonly) CGRect objectBoundsInitial;              //@synthesize objectBoundsInitial=_objectBoundsInitial - In the implementation block
@property (nonatomic,readonly) CGRect objectBounds;                     //@synthesize objectBounds=_objectBounds - In the implementation block
@property (nonatomic,readonly) float confidence;                        //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VC6 start;                    //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) int lostCount;                           //@synthesize lostCount=_lostCount - In the implementation block
-(SCD_Struct_VC6)start;
-(float)confidence;
-(id)initWithObjectBounds:(CGRect)arg1 inFrame:(CVBufferRef)arg2 timestamp:(SCD_Struct_VC6)arg3 ;
-(int)trackObjectInFrame:(CVBufferRef)arg1 ;
-(CGRect)objectBoundsInitial;
-(CGRect)objectBounds;
-(int)lostCount;
@end

