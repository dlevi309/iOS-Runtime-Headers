/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)advance;
-(id)init;
-(unsigned long long)count;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)prependItem:(id)arg1 ;
-(void)appendItem:(id)arg1 ;
-(NSMutableArray *)queue;
-(void)prefetchItemAfterCoordinatorIfPossible:(id)arg1 ;
-(void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2 ;
-(void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3 ;
-(void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2 ;
@end

