/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTimeJumpObserverFactory.h>

@protocol SVVideoTimeJumpObserverFactory <NSObject>
@required
-(id)createTimeJumpObserverForVideo:(id)arg1;

@end


@protocol SVPlayerItemObserverFactory, SVVideoTimeProviderFactory;
@class NSString;

@interface SVVideoTimeJumpObserverFactory : NSObject <SVVideoTimeJumpObserverFactory> {

	id<SVPlayerItemObserverFactory> _playerItemObserverFactory;
	id<SVVideoTimeProviderFactory> _timeProviderFactory;

}

@property (nonatomic,readonly) id<SVPlayerItemObserverFactory> playerItemObserverFactory;              //@synthesize playerItemObserverFactory=_playerItemObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoTimeProviderFactory> timeProviderFactory;                     //@synthesize timeProviderFactory=_timeProviderFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlayerItemObserverFactory>)playerItemObserverFactory;
-(id<SVVideoTimeProviderFactory>)timeProviderFactory;
-(id)createTimeJumpObserverForVideo:(id)arg1 ;
-(id)initWithPlayerItemObserverFactory:(id)arg1 timeProviderFactory:(id)arg2 ;
@end

