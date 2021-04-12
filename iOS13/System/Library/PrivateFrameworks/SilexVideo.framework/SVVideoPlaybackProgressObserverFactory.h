/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackProgressObserverFactory.h>

@protocol SVVideoPlaybackProgressObserverFactory <NSObject>
@required
-(id)createPlaybackProgressObserverForVideo:(id)arg1;

@end


@protocol SVVideoPeriodicTimeObserverFactory, SVVideoDurationObserverFactory;
@class NSString;

@interface SVVideoPlaybackProgressObserverFactory : NSObject <SVVideoPlaybackProgressObserverFactory> {

	id<SVVideoPeriodicTimeObserverFactory> _periodicTimeObserverFactory;
	id<SVVideoDurationObserverFactory> _durationObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoPeriodicTimeObserverFactory> periodicTimeObserverFactory;              //@synthesize periodicTimeObserverFactory=_periodicTimeObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoDurationObserverFactory> durationObserverFactory;                      //@synthesize durationObserverFactory=_durationObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createPlaybackProgressObserverForVideo:(id)arg1 ;
-(id<SVVideoPeriodicTimeObserverFactory>)periodicTimeObserverFactory;
-(id<SVVideoDurationObserverFactory>)durationObserverFactory;
-(id)initWithPeriodicTimeObserverFactory:(id)arg1 durationObserverFactory:(id)arg2 ;
@end

