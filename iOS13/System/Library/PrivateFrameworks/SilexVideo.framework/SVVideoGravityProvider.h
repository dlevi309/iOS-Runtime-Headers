/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoGravityProviding.h>

@protocol SVVideoPresentationSizeObserving, SVVideoViewControllerSizeObserving;
@class NSString;

@interface SVVideoGravityProvider : NSObject <SVVideoGravityProviding> {

	/*^block*/id _changeBlock;
	NSString* _videoGravity;
	NSString* _landscapeVideoGravity;
	NSString* _portraitVideoGravity;
	id<SVVideoPresentationSizeObserving> _presentationSizeObserver;
	id<SVVideoViewControllerSizeObserving> _videoViewControllerSizeObserver;

}

@property (nonatomic,readonly) id<SVVideoPresentationSizeObserving> presentationSizeObserver;                       //@synthesize presentationSizeObserver=_presentationSizeObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerSizeObserving> videoViewControllerSizeObserver;              //@synthesize videoViewControllerSizeObserver=_videoViewControllerSizeObserver - In the implementation block
@property (nonatomic,copy) NSString * videoGravity;                                                                 //@synthesize videoGravity=_videoGravity - In the implementation block
@property (nonatomic,copy) NSString * portraitVideoGravity;                                                         //@synthesize portraitVideoGravity=_portraitVideoGravity - In the implementation block
@property (nonatomic,copy) NSString * landscapeVideoGravity;                                                        //@synthesize landscapeVideoGravity=_landscapeVideoGravity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock;                                                         //@synthesize changeBlock=_changeBlock - In the implementation block
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(id)changeBlock;
-(id)initWithPresentationSizeObserver:(id)arg1 videoViewControllerSizeObserver:(id)arg2 ;
-(void)onChange:(/*^block*/id)arg1 ;
-(void)updateVideoGravityWithPresentationSize:(CGSize)arg1 videoViewControllerSize:(CGSize)arg2 ;
-(id<SVVideoViewControllerSizeObserving>)videoViewControllerSizeObserver;
-(id<SVVideoPresentationSizeObserving>)presentationSizeObserver;
-(NSString *)portraitVideoGravity;
-(NSString *)landscapeVideoGravity;
-(void)setPortraitVideoGravity:(NSString *)arg1 ;
-(void)setLandscapeVideoGravity:(NSString *)arg1 ;
@end

