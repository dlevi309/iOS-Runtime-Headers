/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@class NSMutableArray;

@interface MediaControlsStyleCoordinator : NSObject {

	NSMutableArray* _animations;
	NSMutableArray* _completions;

}
-(void)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performCompletions;
-(void)performAnimations;
@end

