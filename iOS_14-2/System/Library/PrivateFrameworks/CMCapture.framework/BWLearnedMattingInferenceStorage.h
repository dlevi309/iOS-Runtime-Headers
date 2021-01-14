/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWInferenceProviderStorage.h>

@class NSArray;

@interface BWLearnedMattingInferenceStorage : BWInferenceProviderStorage {

	NSArray* _espressoStorages;

}

@property (nonatomic,readonly) NSArray * espressoStorages;              //@synthesize espressoStorages=_espressoStorages - In the implementation block
-(NSArray *)espressoStorages;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 espressoStorages:(id)arg3 ;
-(void)dealloc;
@end

