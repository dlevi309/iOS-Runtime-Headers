/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoLoadingStateObserverFactory.h>

@protocol SVVideoLoadingStateObserverFactory <NSObject>
@required
-(id)createLoadingStateObserverForVideo:(id)arg1;

@end


@protocol SVPlayerItemLoaderProviding;
@class NSString;

@interface SVVideoLoadingStateObserverFactory : NSObject <SVVideoLoadingStateObserverFactory> {

	id<SVPlayerItemLoaderProviding> _playerItemLoaderProvider;

}

@property (nonatomic,readonly) id<SVPlayerItemLoaderProviding> playerItemLoaderProvider;              //@synthesize playerItemLoaderProvider=_playerItemLoaderProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createLoadingStateObserverForVideo:(id)arg1 ;
-(id<SVPlayerItemLoaderProviding>)playerItemLoaderProvider;
-(id)initWithPlayeryItemLoaderProvider:(id)arg1 ;
@end

