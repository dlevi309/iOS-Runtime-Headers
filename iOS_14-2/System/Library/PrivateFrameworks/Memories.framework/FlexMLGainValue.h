/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface FlexMLGainValue : NSObject {

	float _gain;
	SCD_Struct_PM8 _segmentTime;

}

@property (nonatomic,readonly) float gain;                              //@synthesize gain=_gain - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PM8 segmentTime;              //@synthesize segmentTime=_segmentTime - In the implementation block
-(float)gain;
-(long long)compare:(id)arg1 ;
-(id)initWithGain:(float)arg1 segmentTime:(SCD_Struct_PM8)arg2 ;
-(SCD_Struct_PM8)segmentTime;
@end

