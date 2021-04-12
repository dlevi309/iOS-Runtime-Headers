/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
*/


#import <SceneIntelligence/SceneIntelligence-Structs.h>
@class SIResourceFactory, SIPeopleSegmentation, SIScaler, SIUpsampler;

@interface SIPeopleSegmentationAlgorithm : NSObject {

	SIResourceFactory* _factory;
	SIPeopleSegmentation* _segmentation;
	SIScaler* _scalerOne;
	SIUpsampler* _scalerTwo;

}
-(id)initWithInputResolution:(CGSize)arg1 outputResolution:(CGSize)arg2 ;
-(void)runWithInput:(CVBufferRef)arg1 output:(id)arg2 ;
@end

