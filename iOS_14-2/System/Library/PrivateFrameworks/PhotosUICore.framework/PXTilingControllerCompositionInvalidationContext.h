/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol NSObject;
@class PXTilingController;

@interface PXTilingControllerCompositionInvalidationContext : NSObject {

	id<NSObject> _animationOptions;
	PXTilingController* _originatingTilingController;

}

@property (nonatomic,retain) id<NSObject> animationOptions;                                 //@synthesize animationOptions=_animationOptions - In the implementation block
@property (nonatomic,retain) PXTilingController * originatingTilingController;              //@synthesize originatingTilingController=_originatingTilingController - In the implementation block
+(id)defaultAnimationOptionsForTilingController:(id)arg1 withInvalidationContexts:(id)arg2 ;
-(id<NSObject>)animationOptions;
-(void)setAnimationOptions:(id<NSObject>)arg1 ;
-(id)description;
-(PXTilingController *)originatingTilingController;
-(void)setOriginatingTilingController:(PXTilingController *)arg1 ;
@end

