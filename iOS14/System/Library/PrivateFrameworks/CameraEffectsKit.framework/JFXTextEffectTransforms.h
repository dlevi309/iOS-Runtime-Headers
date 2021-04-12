/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class PVMatrix44Double;

@interface JFXTextEffectTransforms : NSObject {

	PVMatrix44Double* _transform;

}

@property (nonatomic,copy) PVMatrix44Double * transform;              //@synthesize transform=_transform - In the implementation block
+(id)transformsWithEffect:(id)arg1 ;
+(id)transformsWithTransform:(id)arg1 ;
-(void)setTransform:(PVMatrix44Double *)arg1 ;
-(PVMatrix44Double *)transform;
-(id)initWithTransform:(id)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(void)applyToEffect:(id)arg1 ;
@end

