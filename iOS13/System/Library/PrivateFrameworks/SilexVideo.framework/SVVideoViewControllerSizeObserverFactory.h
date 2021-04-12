/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoViewControllerSizeObserverFactory.h>

@protocol SVVideoViewControllerSizeObserverFactory <NSObject>
@required
-(id)createViewControllerSizeObserver;

@end


@protocol SVVideoViewControllerProviding;
@class NSString;

@interface SVVideoViewControllerSizeObserverFactory : NSObject <SVVideoViewControllerSizeObserverFactory> {

	id<SVVideoViewControllerProviding> _videoViewControllerProvider;

}

@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createViewControllerSizeObserver;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id)initWithVideoViewControllerProvider:(id)arg1 ;
@end

