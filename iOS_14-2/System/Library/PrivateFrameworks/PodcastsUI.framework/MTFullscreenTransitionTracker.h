/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


@class NSMutableArray;

@interface MTFullscreenTransitionTracker : NSObject {

	BOOL _isTransitioning;
	NSMutableArray* _pendingBlocks;

}

@property (assign,nonatomic) BOOL isTransitioning;                        //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingBlocks;              //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
+(BOOL)isTransitioning;
+(void)performAfterTransitioning:(/*^block*/id)arg1 ;
-(id)init;
-(void)setIsTransitioning:(BOOL)arg1 ;
-(NSMutableArray *)pendingBlocks;
-(void)setPendingBlocks:(NSMutableArray *)arg1 ;
-(BOOL)isTransitioning;
-(void)willBeginTransition:(id)arg1 ;
-(void)didFinishTransition:(id)arg1 ;
@end

