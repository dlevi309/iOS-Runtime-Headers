/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSArray;

@interface MediaControlsHardwareVolumeManager : NSObject {

	NSObject*<OS_dispatch_queue> _avSystemControllerQueue;
	NSMapTable* _assertions;
	NSArray* _volumeButtonConsumerInvalidators;

}

@property (nonatomic,retain) NSMapTable * assertions;                                 //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,retain) NSArray * volumeButtonConsumerInvalidators;              //@synthesize volumeButtonConsumerInvalidators=_volumeButtonConsumerInvalidators - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMapTable *)assertions;
-(void)setAssertions:(NSMapTable *)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(void)registerClient:(id)arg1 forRoute:(id)arg2 ;
-(void)_updateVolumeControlsForRoute:(id)arg1 ;
-(void)_relinquishHardwareVolumeButtons;
-(void)_requestHardwareVolumeButtons;
-(id)requestVolumeControlsForRoute:(id)arg1 ;
-(NSArray *)volumeButtonConsumerInvalidators;
-(void)setVolumeButtonConsumerInvalidators:(NSArray *)arg1 ;
@end

