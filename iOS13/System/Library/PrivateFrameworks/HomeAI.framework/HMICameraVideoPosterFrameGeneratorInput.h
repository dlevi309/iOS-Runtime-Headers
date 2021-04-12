/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


#import <HomeAI/HomeAI-Structs.h>
@interface HMICameraVideoPosterFrameGeneratorInput : NSObject {

	unsigned long long _frameHeight;
	SCD_Struct_HM4 _generationFrequency;

}

@property (readonly) SCD_Struct_HM4 generationFrequency;              //@synthesize generationFrequency=_generationFrequency - In the implementation block
@property (readonly) unsigned long long frameHeight;                  //@synthesize frameHeight=_frameHeight - In the implementation block
-(unsigned long long)frameHeight;
-(id)initWithGenerationFrequency:(SCD_Struct_HM4)arg1 andPosterFrameHeight:(unsigned long long)arg2 ;
-(SCD_Struct_HM4)generationFrequency;
@end

