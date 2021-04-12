/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControlsInvalidatable.h>

@class MediaControlsHardwareVolumeManager, NSString;

@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable> {

	MediaControlsHardwareVolumeManager* _volumeManager;
	NSString* _reason;

}

@property (assign,nonatomic,__weak) MediaControlsHardwareVolumeManager * volumeManager;              //@synthesize volumeManager=_volumeManager - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                        //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)reason;
-(void)invalidate;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
-(MediaControlsHardwareVolumeManager *)volumeManager;
-(void)setVolumeManager:(MediaControlsHardwareVolumeManager *)arg1 ;
@end

