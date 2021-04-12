/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIImage, NSIndexPath, NSString;

@interface ICDocCamThumbnailZoomTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	UIImage* _thumbnailImage;
	NSIndexPath* _indexPath;
	double _duration;
	/*^block*/id _completion;

}

@property (nonatomic,retain) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;               //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL presenting;                       //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexPath *)indexPath;
-(double)duration;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setDuration:(double)arg1 ;
-(BOOL)presenting;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)_shouldCrossFadeNavigationBar;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 indexPath:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
@end

