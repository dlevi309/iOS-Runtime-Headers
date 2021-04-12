/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControlsInvalidatable.h>

@class MediaControlsHardwareVolumeManager, NSString;

@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable> {

	MediaControlsHardwareVolumeManager* _volumeManager;

}

@property (assign,nonatomic,__weak) MediaControlsHardwareVolumeManager * volumeManager;              //@synthesize volumeManager=_volumeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(MediaControlsHardwareVolumeManager *)volumeManager;
-(void)setVolumeManager:(MediaControlsHardwareVolumeManager *)arg1 ;
@end

