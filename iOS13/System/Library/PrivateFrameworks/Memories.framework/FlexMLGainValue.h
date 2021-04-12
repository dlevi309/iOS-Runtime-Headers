/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface FlexMLGainValue : NSObject {

	float _gain;
	SCD_Struct_PM5 _segmentTime;

}

@property (nonatomic,readonly) float gain;                              //@synthesize gain=_gain - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PM5 segmentTime;              //@synthesize segmentTime=_segmentTime - In the implementation block
-(long long)compare:(id)arg1 ;
-(float)gain;
-(id)initWithGain:(float)arg1 segmentTime:(SCD_Struct_PM5)arg2 ;
-(SCD_Struct_PM5)segmentTime;
@end

