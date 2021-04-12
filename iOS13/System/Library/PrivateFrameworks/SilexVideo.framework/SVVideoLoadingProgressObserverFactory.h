/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoLoadingProgressObserverFactory.h>

@protocol SVVideoLoadingProgressObserverFactory <NSObject>
@required
-(id)createLoadingProgressObserverForVideo:(id)arg1;

@end


@protocol SVPlayerItemObserverFactory, SVVideoDurationObserverFactory;
@class NSString;

@interface SVVideoLoadingProgressObserverFactory : NSObject <SVVideoLoadingProgressObserverFactory> {

	id<SVPlayerItemObserverFactory> _playerItemObserverFactory;
	id<SVVideoDurationObserverFactory> _durationObserverFactory;

}

@property (nonatomic,readonly) id<SVPlayerItemObserverFactory> playerItemObserverFactory;               //@synthesize playerItemObserverFactory=_playerItemObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoDurationObserverFactory> durationObserverFactory;              //@synthesize durationObserverFactory=_durationObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlayerItemObserverFactory>)playerItemObserverFactory;
-(id<SVVideoDurationObserverFactory>)durationObserverFactory;
-(id)createLoadingProgressObserverForVideo:(id)arg1 ;
-(id)initWithPlayerItemObserverFactory:(id)arg1 durationObserverFactory:(id)arg2 ;
@end

