/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


#import <HomeAI/HomeAI-Structs.h>
@interface HMICameraVideoPosterFrameGeneratorInput : NSObject {

	unsigned long long _frameHeight;
	SCD_Struct_HM3 _generationFrequency;

}

@property (readonly) SCD_Struct_HM3 generationFrequency;              //@synthesize generationFrequency=_generationFrequency - In the implementation block
@property (readonly) unsigned long long frameHeight;                  //@synthesize frameHeight=_frameHeight - In the implementation block
-(unsigned long long)frameHeight;
-(id)initWithGenerationFrequency:(SCD_Struct_HM3)arg1 andPosterFrameHeight:(unsigned long long)arg2 ;
-(SCD_Struct_HM3)generationFrequency;
@end

