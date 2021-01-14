/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class PVInstructionGraphSourceNode, PVColorSpace;

@interface PVCompositeDelegateContext : NSObject {

	PVInstructionGraphSourceNode* _sourceNode;
	id _preprocessData;
	PVColorSpace* _renderingColorSpace;

}

@property (nonatomic,__weak,readonly) PVInstructionGraphSourceNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) id preprocessData;                                             //@synthesize preprocessData=_preprocessData - In the implementation block
@property (nonatomic,readonly) PVColorSpace * renderingColorSpace;                            //@synthesize renderingColorSpace=_renderingColorSpace - In the implementation block
-(PVInstructionGraphSourceNode *)sourceNode;
-(id)initWithNode:(id)arg1 ;
-(id)preprocessData;
-(void)setPreprocessData:(id)arg1 ;
-(void)setRenderColorSpace:(id)arg1 ;
-(PVColorSpace *)renderingColorSpace;
@end

