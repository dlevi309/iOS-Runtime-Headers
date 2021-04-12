/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoBufferObserverFactory.h>

@protocol SVVideoBufferObserverFactory <NSObject>
@required
-(id)createBufferObserverForVideo:(id)arg1;

@end


@protocol SVPlayerItemObserverFactory;
@class NSString;

@interface SVVideoBufferObserverFactory : NSObject <SVVideoBufferObserverFactory> {

	id<SVPlayerItemObserverFactory> _playerItemObserverFactory;

}

@property (nonatomic,readonly) id<SVPlayerItemObserverFactory> playerItemObserverFactory;              //@synthesize playerItemObserverFactory=_playerItemObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlayerItemObserverFactory>)playerItemObserverFactory;
-(id)initWithPlayerItemObserverFactory:(id)arg1 ;
-(id)createBufferObserverForVideo:(id)arg1 ;
@end

