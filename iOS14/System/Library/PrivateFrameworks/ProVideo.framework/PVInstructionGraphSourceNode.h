/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphNode.h>

@class PVTransformAnimation;

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode {

	BOOL _isOverlayTrack;
	int _textureWrapMode;
	PVTransformAnimation* _transformAnimation;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGAffineTransform transform;                            //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) PVTransformAnimation * transformAnimation;              //@synthesize transformAnimation=_transformAnimation - In the implementation block
@property (assign,nonatomic) int textureWrapMode;                                    //@synthesize textureWrapMode=_textureWrapMode - In the implementation block
@property (assign,nonatomic) BOOL isOverlayTrack;                                    //@synthesize isOverlayTrack=_isOverlayTrack - In the implementation block
-(BOOL)isPortrait;
-(id)init;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(PVTransformAnimation *)transformAnimation;
-(void)setTransformAnimation:(PVTransformAnimation *)arg1 ;
-(id)getAllSourceNodes;
-(id)instructionGraphNodeDescription;
-(int)textureWrapMode;
-(HGRef<HGNode>*)applyWrapModeToInput:(HGRef<HGNode>*)arg1 ;
-(void)setTextureWrapMode:(int)arg1 ;
-(BOOL)isOverlayTrack;
-(void)setIsOverlayTrack:(BOOL)arg1 ;
@end

