/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVolumeObserving.h>
#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoEventTrackerProviding, SVVideo;
@class NSString;

@interface SVVideoVolumeEventTrackerManager : NSObject <SVVolumeObserving, SVVideoTransitionObserver> {

	id<SVVideoEventTrackerProviding> _eventTrackerProvider;
	id<SVVideo> _video;

}

@property (nonatomic,readonly) id<SVVideoEventTrackerProviding> eventTrackerProvider;              //@synthesize eventTrackerProvider=_eventTrackerProvider - In the implementation block
@property (nonatomic,retain) id<SVVideo> video;                                                    //@synthesize video=_video - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideo>)video;
-(void)setVideo:(id<SVVideo>)arg1 ;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoEventTrackerProviding>)eventTrackerProvider;
-(void)muteStateChanged:(id)arg1 ;
-(id)initWithEventTrackerProvider:(id)arg1 ;
@end

