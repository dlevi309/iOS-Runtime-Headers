/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol PVCompositeDelegate;
@interface JFXCustomRenderProperties : NSObject {

	BOOL _animojiTapPoint;
	id<PVCompositeDelegate> _renderingDelegate;
	id _metadata;

}

@property (nonatomic,readonly) id<PVCompositeDelegate> renderingDelegate;              //@synthesize renderingDelegate=_renderingDelegate - In the implementation block
@property (nonatomic,readonly) id metadata;                                            //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL animojiTapPoint;                                     //@synthesize animojiTapPoint=_animojiTapPoint - In the implementation block
+(id)newCustomRenderProperties:(id)arg1 metadata:(id)arg2 ;
-(id)metadata;
-(id<PVCompositeDelegate>)renderingDelegate;
-(BOOL)animojiTapPoint;
-(void)setAnimojiTapPoint:(BOOL)arg1 ;
@end

