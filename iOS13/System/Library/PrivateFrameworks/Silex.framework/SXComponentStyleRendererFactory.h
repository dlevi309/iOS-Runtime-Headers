/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentStyleRendererFactory.h>

@protocol SXComponentStyleRendererFactory <NSObject>
@required
-(id)componentStyleRendererForComponentStyle:(id)arg1;

@end


@protocol SXImageFillViewFactory, SXVideoFillViewFactory, SXGradientFactory, SXRepeatableImageFillViewFactory;
@class SXViewport, NSString;

@interface SXComponentStyleRendererFactory : NSObject <SXComponentStyleRendererFactory> {

	id<SXImageFillViewFactory> _imageFillViewFactory;
	id<SXVideoFillViewFactory> _videoFillViewFactory;
	id<SXGradientFactory> _gradientFactory;
	id<SXRepeatableImageFillViewFactory> _repeatableImageFillViewFactory;
	SXViewport* _viewport;

}

@property (nonatomic,readonly) id<SXImageFillViewFactory> imageFillViewFactory;                                  //@synthesize imageFillViewFactory=_imageFillViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXVideoFillViewFactory> videoFillViewFactory;                                  //@synthesize videoFillViewFactory=_videoFillViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXGradientFactory> gradientFactory;                                            //@synthesize gradientFactory=_gradientFactory - In the implementation block
@property (nonatomic,readonly) id<SXRepeatableImageFillViewFactory> repeatableImageFillViewFactory;              //@synthesize repeatableImageFillViewFactory=_repeatableImageFillViewFactory - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                                            //@synthesize viewport=_viewport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(id)componentStyleRendererForComponentStyle:(id)arg1 ;
-(id)initWithImageFillViewFactory:(id)arg1 videoFillViewFactory:(id)arg2 gradientFactory:(id)arg3 repeatableImageFillViewFactory:(id)arg4 viewport:(id)arg5 ;
-(id<SXGradientFactory>)gradientFactory;
-(id<SXImageFillViewFactory>)imageFillViewFactory;
-(id<SXVideoFillViewFactory>)videoFillViewFactory;
-(id<SXRepeatableImageFillViewFactory>)repeatableImageFillViewFactory;
@end

