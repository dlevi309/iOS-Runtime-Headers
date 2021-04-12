/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoQueue.h>
@class NSOrderedSet;


@protocol SVVideoQueue <SVVideoQueueDiffing,NSCopying>
@property (nonatomic,retain) id<SVVideo> video; 
@property (nonatomic,readonly) id<SVVideo> nextVideo; 
@property (nonatomic,readonly) id<SVVideo> previousVideo; 
@property (nonatomic,readonly) id<SVVideo> firstVideo; 
@property (nonatomic,readonly) id<SVVideo> lastVideo; 
@property (nonatomic,readonly) NSOrderedSet * videos; 
@required
-(unsigned long long)numberOfVideos;
-(id<SVVideo>)video;
-(void)setVideo:(id)arg1;
-(NSOrderedSet *)videos;
-(id)videoAfterVideo:(id)arg1;
-(id)videoBeforeVideo:(id)arg1;
-(id)nextVideoOfType:(unsigned long long)arg1;
-(id)previousVideoOfType:(unsigned long long)arg1;
-(id)videoAtIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfVideo:(id)arg1;
-(id<SVVideo>)nextVideo;
-(id<SVVideo>)previousVideo;
-(id<SVVideo>)firstVideo;
-(id<SVVideo>)lastVideo;

@end

#import <libobjc.A.dylib/SVVideoQueueDiffing.h>

@protocol SVVideo;
@class NSOrderedSet, NSString;

@interface SVVideoQueue : NSObject <SVVideoQueue, SVVideoQueueDiffing> {

	id<SVVideo> _video;
	NSOrderedSet* _videos;

}

@property (nonatomic,copy) NSOrderedSet * videos;                      //@synthesize videos=_videos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<SVVideo> video;                        //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) id<SVVideo> nextVideo; 
@property (nonatomic,readonly) id<SVVideo> previousVideo; 
@property (nonatomic,readonly) id<SVVideo> firstVideo; 
@property (nonatomic,readonly) id<SVVideo> lastVideo; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfVideos;
-(id<SVVideo>)video;
-(void)setVideo:(id<SVVideo>)arg1 ;
-(NSOrderedSet *)videos;
-(void)setVideos:(NSOrderedSet *)arg1 ;
-(id)initWithVideos:(id)arg1 ;
-(id)videoAfterVideo:(id)arg1 ;
-(id)videoBeforeVideo:(id)arg1 ;
-(id)diffWithQueue:(id)arg1 ;
-(id)nextVideoOfType:(unsigned long long)arg1 ;
-(id)previousVideoOfType:(unsigned long long)arg1 ;
-(id)videoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfVideo:(id)arg1 ;
-(id<SVVideo>)nextVideo;
-(id<SVVideo>)previousVideo;
-(id<SVVideo>)firstVideo;
-(id<SVVideo>)lastVideo;
@end

