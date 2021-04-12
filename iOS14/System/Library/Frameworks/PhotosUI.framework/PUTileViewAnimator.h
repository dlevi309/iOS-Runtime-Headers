/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUTileAnimator.h>

@class NSMapTable;

@interface PUTileViewAnimator : PUTileAnimator {

	NSMapTable* __synchronizedAnimationGroupsByTransition;

}

@property (nonatomic,readonly) NSMapTable * _synchronizedAnimationGroupsByTransition;              //@synthesize _synchronizedAnimationGroupsByTransition=__synchronizedAnimationGroupsByTransition - In the implementation block
-(id)init;
-(void)prepareTileControllerForAnimation:(id)arg1 withInitialLayoutInfo:(id)arg2 ;
-(void)updateAnimationForTileController:(id)arg1 withRepositionedTargetLayoutInfo:(id)arg2 ;
-(void)transition:(id)arg1 didComplete:(BOOL)arg2 ;
-(void)_performAnimations:(/*^block*/id)arg1 withOptions:(id)arg2 ;
-(NSMapTable *)_synchronizedAnimationGroupsByTransition;
-(void)animateTileController:(id)arg1 toLayoutInfo:(id)arg2 withOptions:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

