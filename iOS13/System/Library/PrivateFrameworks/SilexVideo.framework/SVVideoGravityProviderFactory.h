/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoGravityProviderFactory.h>

@protocol SVVideoGravityProviderFactory <NSObject>
@required
-(id)createVideoGravityProviderForVideo:(id)arg1;

@end


@protocol SVVideoPresentationSizeObserverFactory, SVVideoViewControllerSizeObserverFactory;
@class NSString;

@interface SVVideoGravityProviderFactory : NSObject <SVVideoGravityProviderFactory> {

	id<SVVideoPresentationSizeObserverFactory> _presentationSizeObserverFactory;
	id<SVVideoViewControllerSizeObserverFactory> _videoViewControllerSizeObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoPresentationSizeObserverFactory> presentationSizeObserverFactory;                       //@synthesize presentationSizeObserverFactory=_presentationSizeObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerSizeObserverFactory> videoViewControllerSizeObserverFactory;              //@synthesize videoViewControllerSizeObserverFactory=_videoViewControllerSizeObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoPresentationSizeObserverFactory>)presentationSizeObserverFactory;
-(id<SVVideoViewControllerSizeObserverFactory>)videoViewControllerSizeObserverFactory;
-(id)createVideoGravityProviderForVideo:(id)arg1 ;
-(id)initWithPresentationSizeObserverFactory:(id)arg1 videoViewControllerSizeObserverFactory:(id)arg2 ;
@end

