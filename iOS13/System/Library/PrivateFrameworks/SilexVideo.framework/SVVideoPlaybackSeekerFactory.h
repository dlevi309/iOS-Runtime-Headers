/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackSeekerFactory.h>

@protocol SVVideoPlaybackSeekerFactory <NSObject>
@required
-(id)createPlaybackSeekerForVideo:(id)arg1;

@end


@protocol SVPlayerProviding;
@class NSString;

@interface SVVideoPlaybackSeekerFactory : NSObject <SVVideoPlaybackSeekerFactory> {

	id<SVPlayerProviding> _playerProvider;

}

@property (nonatomic,readonly) id<SVPlayerProviding> playerProvider;              //@synthesize playerProvider=_playerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlayerProviding>)playerProvider;
-(id)createPlaybackSeekerForVideo:(id)arg1 ;
-(id)initWithPlayerProvider:(id)arg1 ;
@end

