/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAVPlayerFactory.h>

@protocol SXAVPlayerFactory <NSObject>
@required
-(id)createPlayerWithURL:(id)arg1;

@end


@protocol SXAVPlayerItemFactory;
@class NSString;

@interface SXAVPlayerFactory : NSObject <SXAVPlayerFactory> {

	int _audioMode;
	id<SXAVPlayerItemFactory> _playerItemFactory;

}

@property (nonatomic,readonly) int audioMode;                                            //@synthesize audioMode=_audioMode - In the implementation block
@property (nonatomic,readonly) id<SXAVPlayerItemFactory> playerItemFactory;              //@synthesize playerItemFactory=_playerItemFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)audioMode;
-(id<SXAVPlayerItemFactory>)playerItemFactory;
-(id)createPlayerWithURL:(id)arg1 ;
-(id)initWithAudioMode:(int)arg1 playerItemFactory:(id)arg2 ;
@end

