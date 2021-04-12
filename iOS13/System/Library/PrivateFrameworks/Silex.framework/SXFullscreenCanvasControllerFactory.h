/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFullscreenCanvasControllerFactory.h>

@protocol SXFullscreenCanvasControllerFactory <NSObject>
@required
-(id)fullscreenCanvasControllerForShowable:(id)arg1;

@end


@protocol SXFullscreenCaptionViewFactory, SXPresentationAttributesProvider, SXMediaSharingPolicyProvider;
@class NSString;

@interface SXFullscreenCanvasControllerFactory : NSObject <SXFullscreenCanvasControllerFactory> {

	id<SXFullscreenCaptionViewFactory> _captionViewFactory;
	id<SXPresentationAttributesProvider> _presentationAttributesProvider;
	id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;

}

@property (nonatomic,readonly) id<SXFullscreenCaptionViewFactory> captionViewFactory;                            //@synthesize captionViewFactory=_captionViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;              //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (nonatomic,readonly) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;                      //@synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXMediaSharingPolicyProvider>)mediaSharingPolicyProvider;
-(id<SXFullscreenCaptionViewFactory>)captionViewFactory;
-(id)fullscreenCanvasControllerForShowable:(id)arg1 ;
-(id)initWithCaptionViewFactory:(id)arg1 presentationAttributesProvider:(id)arg2 mediaSharingPolicyProvider:(id)arg3 ;
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
@end

