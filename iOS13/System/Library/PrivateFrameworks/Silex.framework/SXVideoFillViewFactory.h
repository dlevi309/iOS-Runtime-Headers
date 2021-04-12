/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVideoFillViewFactory.h>

@protocol SXVideoFillViewFactory <NSObject>
@required
-(id)createVideoFillViewForVideoFill:(id)arg1;

@end


@protocol SXDOMObjectProviding, SXImageViewFactory;
@class NSString;

@interface SXVideoFillViewFactory : NSObject <SXVideoFillViewFactory> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXImageViewFactory> _imageViewFactory;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;              //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                 //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id)createVideoFillViewForVideoFill:(id)arg1 ;
-(id<SXImageViewFactory>)imageViewFactory;
-(id)initWithDOMObjectProvider:(id)arg1 imageViewFactory:(id)arg2 ;
@end

