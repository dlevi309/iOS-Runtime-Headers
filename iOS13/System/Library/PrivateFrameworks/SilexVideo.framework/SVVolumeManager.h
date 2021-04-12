/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVolumeReporting, SVVideoVolumeObserverFactory, SVVideoVolumeObserving;
@class NSString;

@interface SVVolumeManager : NSObject <SVVideoTransitionObserver> {

	id<SVVolumeReporting> _volumeReporter;
	id<SVVideoVolumeObserverFactory> _volumeObserverFactory;
	id<SVVideoVolumeObserving> _volumeObserver;

}

@property (nonatomic,readonly) id<SVVolumeReporting> volumeReporter;                                //@synthesize volumeReporter=_volumeReporter - In the implementation block
@property (nonatomic,readonly) id<SVVideoVolumeObserverFactory> volumeObserverFactory;              //@synthesize volumeObserverFactory=_volumeObserverFactory - In the implementation block
@property (nonatomic,retain) id<SVVideoVolumeObserving> volumeObserver;                             //@synthesize volumeObserver=_volumeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithVolumeReporter:(id)arg1 volumeObserverFactory:(id)arg2 ;
-(id<SVVideoVolumeObserverFactory>)volumeObserverFactory;
-(void)setVolumeObserver:(id<SVVideoVolumeObserving>)arg1 ;
-(id<SVVideoVolumeObserving>)volumeObserver;
-(id<SVVolumeReporting>)volumeReporter;
@end

