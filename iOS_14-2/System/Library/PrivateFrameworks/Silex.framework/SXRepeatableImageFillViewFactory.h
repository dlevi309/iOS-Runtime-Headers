/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXRepeatableImageFillViewFactory.h>

@protocol SXRepeatableImageFillViewFactory
@end


@protocol SXDOMObjectProviding, SXImageViewFactory;
@class NSString;

@interface SXRepeatableImageFillViewFactory : NSObject <SXRepeatableImageFillViewFactory> {

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
-(id<SXImageViewFactory>)imageViewFactory;
-(id)initWithDOMObjectProvider:(id)arg1 imageViewFactory:(id)arg2 ;
-(id)createRepeatableImageFillViewForRepeatableImageFill:(id)arg1 ;
@end

