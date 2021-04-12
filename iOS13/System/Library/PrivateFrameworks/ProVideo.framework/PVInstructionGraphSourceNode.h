/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphNode.h>

@class PVTransformAnimation;

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode {

	int _textureWrapMode;
	PVTransformAnimation* _transformAnimation;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGAffineTransform transform;                            //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) PVTransformAnimation * transformAnimation;              //@synthesize transformAnimation=_transformAnimation - In the implementation block
@property (assign,nonatomic) int textureWrapMode;                                    //@synthesize textureWrapMode=_textureWrapMode - In the implementation block
-(id)init;
-(CGAffineTransform)transform;
-(BOOL)isPortrait;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(PVTransformAnimation *)transformAnimation;
-(void)setTransformAnimation:(PVTransformAnimation *)arg1 ;
-(id)getAllSourceNodes;
-(id)instructionGraphNodeDescription;
-(int)textureWrapMode;
-(HGRef<HGNode>*)applyWrapModeToInput:(HGRef<HGNode>*)arg1 ;
-(void)setTextureWrapMode:(int)arg1 ;
@end

