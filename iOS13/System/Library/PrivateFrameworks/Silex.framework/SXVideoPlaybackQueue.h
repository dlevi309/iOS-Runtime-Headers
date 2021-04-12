/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVideoPlaybackObserver.h>

@class NSMutableArray, NSString;

@interface SXVideoPlaybackQueue : NSObject <SXVideoPlaybackObserver> {

	NSMutableArray* _queue;

}

@property (nonatomic,readonly) NSMutableArray * queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)count;
-(NSMutableArray *)queue;
-(void)appendItem:(id)arg1 ;
-(id)advance;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)prefetchItemAfterCoordinatorIfPossible:(id)arg1 ;
-(void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2 ;
-(void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3 ;
-(void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2 ;
-(void)prependItem:(id)arg1 ;
@end

