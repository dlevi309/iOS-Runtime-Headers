/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
*/


#import <SceneIntelligence/SceneIntelligence-Structs.h>
@interface SISceneSegmentationLegacy : NSObject {

	void* _context;
	void* _plan;
	SCD_Struct_SI0* _network;
	networkparams_t* _parameters;
	networkvariables_t* _variables;

}
-(id)init;
-(BOOL)initMLNetwork;
-(void)initMLVariables;
-(CVBufferRef)copyResultLabelsToPixelBuffer;
-(CGSize)inputResolution;
-(CGSize)outputResolution;
-(CVBufferRef)evaluateSemanticsForImage:(CVBufferRef)arg1 ;
@end

