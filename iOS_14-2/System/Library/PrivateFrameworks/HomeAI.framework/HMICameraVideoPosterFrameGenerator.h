/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, NSMutableArray, HMICameraVideoPosterFrameGeneratorInput, NSString;

@interface HMICameraVideoPosterFrameGenerator : HMFObject <HMFLogging> {

	NSArray* _posterFrames;
	NSMutableArray* _posterFramesInternal;
	HMICameraVideoPosterFrameGeneratorInput* _input;
	SCD_Struct_HM3 _nextGenerationTime;

}

@property (retain) NSMutableArray * posterFramesInternal;                          //@synthesize posterFramesInternal=_posterFramesInternal - In the implementation block
@property (readonly) HMICameraVideoPosterFrameGeneratorInput * input;              //@synthesize input=_input - In the implementation block
@property (readonly) NSArray * posterFrames;                                       //@synthesize posterFrames=_posterFrames - In the implementation block
@property (assign) SCD_Struct_HM3 nextGenerationTime;                              //@synthesize nextGenerationTime=_nextGenerationTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMICameraVideoPosterFrameGeneratorInput *)input;
-(NSArray *)posterFrames;
-(id)initWithInput:(id)arg1 ;
-(void)startHandlingFrames;
-(BOOL)willHandleFramesFromVideoResource:(id)arg1 ;
-(BOOL)handleVideoFrame:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)posterFramesInternal;
-(SCD_Struct_HM3)nextGenerationTime;
-(void)setNextGenerationTime:(SCD_Struct_HM3)arg1 ;
-(BOOL)saveAsPosterFrame:(id)arg1 error:(id*)arg2 ;
-(void)setPosterFramesInternal:(NSMutableArray *)arg1 ;
@end

