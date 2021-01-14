/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXGAnimator, PXGLayout;

@interface PXGAnimatorLayout : NSObject {

	PXGAnimator* _animator;
	PXGLayout* _inputLayout;

}

@property (nonatomic,__weak,readonly) PXGAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) PXGLayout * inputLayout;                      //@synthesize inputLayout=_inputLayout - In the implementation block
-(PXGAnimator *)animator;
-(id)fences;
-(CGRect)visibleRect;
-(id)init;
-(void)enumerateDescendantsLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)setInputLayout:(PXGLayout *)arg1 ;
-(CGSize)contentSize;
-(void)removeAllFences;
-(BOOL)isSpriteIndex:(unsigned)arg1 decoratingSpriteWithIndex:(out unsigned*)arg2 ;
-(void)enumerateLayoutsForSpritesInRange:(PXGSpriteIndexRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(CGSize)referenceSize;
-(unsigned)numberOfSprites;
-(PXGLayout *)inputLayout;
-(id)rootLayout;
-(id)initWithAnimator:(id)arg1 ;
@end

