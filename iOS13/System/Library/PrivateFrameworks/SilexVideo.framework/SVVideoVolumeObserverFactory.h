/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoVolumeObserverFactory.h>

@protocol SVVideoVolumeObserverFactory <NSObject>
@required
-(id)createVolumeObserverForVideo:(id)arg1;

@end


@protocol SVPlayerProviding;
@class AVAudioSession, NSString;

@interface SVVideoVolumeObserverFactory : NSObject <SVVideoVolumeObserverFactory> {

	id<SVPlayerProviding> _playerProvider;
	AVAudioSession* _audioSession;

}

@property (nonatomic,readonly) id<SVPlayerProviding> playerProvider;              //@synthesize playerProvider=_playerProvider - In the implementation block
@property (nonatomic,readonly) AVAudioSession * audioSession;                     //@synthesize audioSession=_audioSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVAudioSession *)audioSession;
-(id<SVPlayerProviding>)playerProvider;
-(id)createVolumeObserverForVideo:(id)arg1 ;
-(id)initWithPlayerProvider:(id)arg1 audioSession:(id)arg2 ;
@end

