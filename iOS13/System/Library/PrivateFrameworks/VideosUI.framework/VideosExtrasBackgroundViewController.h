/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray, IKImageElement, MPUArtworkView, NSTimer, UIImageView;

@interface VideosExtrasBackgroundViewController : UIViewController {

	NSArray* _backgroundElements;
	IKImageElement* _displayedImageElement;
	NSArray* _imageConstraints;
	MPUArtworkView* _imageView;
	NSTimer* _updateTimer;
	UIImageView* _vignetteView;
	unsigned long long _vignetteType;

}

@property (nonatomic,readonly) NSArray * backgroundElements;               //@synthesize backgroundElements=_backgroundElements - In the implementation block
@property (assign,nonatomic) unsigned long long vignetteType;              //@synthesize vignetteType=_vignetteType - In the implementation block
+(id)vignetteImageForType:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)_invalidateTimer;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateImage;
-(void)setVignetteType:(unsigned long long)arg1 ;
-(void)_initVignette;
-(void)_scheduleTimerIfNeeded;
-(void)_didReceiveImage:(id)arg1 ;
-(void)_updateConstraintsForImageSize:(CGSize)arg1 position:(unsigned long long)arg2 ;
-(id)initWithBackgroundElement:(id)arg1 ;
-(id)initWithBackgroundElements:(id)arg1 ;
-(NSArray *)backgroundElements;
-(unsigned long long)vignetteType;
@end

