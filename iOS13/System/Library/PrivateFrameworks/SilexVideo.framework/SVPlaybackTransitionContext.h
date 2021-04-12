/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlaybackTransitionContext.h>

@protocol SVPlaybackTransitionContext <NSObject>
@property (nonatomic,readonly) id<SVVideo> fromVideo; 
@property (nonatomic,readonly) id<SVVideo> toVideo; 
@required
-(void)completeTransition:(BOOL)arg1;
-(id<SVVideo>)fromVideo;
-(id<SVVideo>)toVideo;

@end


@protocol SVVideo;
@class NSString;

@interface SVPlaybackTransitionContext : NSObject <SVPlaybackTransitionContext> {

	id<SVVideo> _fromVideo;
	id<SVVideo> _toVideo;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SVVideo> fromVideo;               //@synthesize fromVideo=_fromVideo - In the implementation block
@property (nonatomic,readonly) id<SVVideo> toVideo;                 //@synthesize toVideo=_toVideo - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)completeTransition:(BOOL)arg1 ;
-(id<SVVideo>)fromVideo;
-(id<SVVideo>)toVideo;
-(id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

