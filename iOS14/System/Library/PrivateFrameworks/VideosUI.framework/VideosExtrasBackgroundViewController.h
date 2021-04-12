/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_updateImage;
-(void)viewDidLoad;
-(void)_invalidateTimer;
-(void)dealloc;
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

