/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol PVCompositeDelegate;
@interface JTCustomRenderProperties : NSObject {

	BOOL _wantsPickerTapPoint;
	id<PVCompositeDelegate> _renderingDelegate;
	id _metadata;

}

@property (nonatomic,readonly) id<PVCompositeDelegate> renderingDelegate;              //@synthesize renderingDelegate=_renderingDelegate - In the implementation block
@property (nonatomic,readonly) id metadata;                                            //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL wantsPickerTapPoint;                                 //@synthesize wantsPickerTapPoint=_wantsPickerTapPoint - In the implementation block
+(id)newCustomRenderProperties:(id)arg1 metadata:(id)arg2 ;
-(id)metadata;
-(id<PVCompositeDelegate>)renderingDelegate;
-(BOOL)wantsPickerTapPoint;
-(void)setWantsPickerTapPoint:(BOOL)arg1 ;
@end

