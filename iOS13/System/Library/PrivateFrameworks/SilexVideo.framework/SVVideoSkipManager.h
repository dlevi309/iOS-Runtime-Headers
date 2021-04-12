/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackSkipping.h>
#import <libobjc.A.dylib/SVVideoPlaybackAdvancing.h>

@protocol SVVideoQueueProviding, SVVideoSkipPolicy, SVVideoSkipHandling;
@class NSString;

@interface SVVideoSkipManager : NSObject <SVVideoPlaybackSkipping, SVVideoPlaybackAdvancing> {

	id<SVVideoQueueProviding> _queueProvider;
	id<SVVideoSkipPolicy> _policy;
	id<SVVideoSkipHandling> _handler;

}

@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;              //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoSkipPolicy> policy;                         //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) id<SVVideoSkipHandling> handler;                      //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoSkipHandling>)handler;
-(id<SVVideoSkipPolicy>)policy;
-(id<SVVideoQueueProviding>)queueProvider;
-(BOOL)skipToPrevious;
-(BOOL)skipToNext;
-(BOOL)advanceAnimated:(BOOL)arg1 ;
-(BOOL)advanceAnimated:(BOOL)arg1 force:(BOOL)arg2 ;
-(id)initWithQueueProvider:(id)arg1 policy:(id)arg2 handler:(id)arg3 ;
-(BOOL)skipToVideo:(id)arg1 animated:(BOOL)arg2 force:(BOOL)arg3 ;
@end

