/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLScrollableContentItemViewController.h>
#import <libobjc.A.dylib/QLAnimationTimerObserver.h>

@class UIImageView, QLAnimatedImage, NSString;

@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver> {

	UIImageView* _imageView;
	QLAnimatedImage* _animatedImage;
	double _initialTimeStamp;
	double _currentPlaybackTime;
	CGSize _imageSize;
	BOOL _imageIsAnimated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredWhitePointAdaptivityStyle;
-(CGSize)imageSize;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)animationTimerFired:(double)arg1 ;
-(id)draggableView;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

