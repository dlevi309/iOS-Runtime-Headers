/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerFactory.h>

@protocol SVPlayerFactory <NSObject>
@required
-(id)createPlayer;

@end


@protocol SVVolumeProviding;
@class NSString;

@interface SVPlayerFactory : NSObject <SVPlayerFactory> {

	int _audioMode;
	id<SVVolumeProviding> _volumeProvider;

}

@property (nonatomic,readonly) int audioMode;                                     //@synthesize audioMode=_audioMode - In the implementation block
@property (nonatomic,readonly) id<SVVolumeProviding> volumeProvider;              //@synthesize volumeProvider=_volumeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)audioMode;
-(id)createPlayer;
-(id)initWithAudioMode:(int)arg1 volumeProvider:(id)arg2 ;
-(id<SVVolumeProviding>)volumeProvider;
@end

