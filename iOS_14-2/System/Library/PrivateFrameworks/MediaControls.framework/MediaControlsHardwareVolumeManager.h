/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSArray;

@interface MediaControlsHardwareVolumeManager : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMapTable* _assertions;
	NSArray* _volumeButtonConsumerInvalidators;

}

@property (nonatomic,retain) NSMapTable * assertions;                                 //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,retain) NSArray * volumeButtonConsumerInvalidators;              //@synthesize volumeButtonConsumerInvalidators=_volumeButtonConsumerInvalidators - In the implementation block
+(id)sharedInstance;
-(NSMapTable *)assertions;
-(id)init;
-(void)setAssertions:(NSMapTable *)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(void)registerClient:(id)arg1 forRoute:(id)arg2 ;
-(void)_updateVolumeControlsForRoute:(id)arg1 ;
-(void)_relinquishHardwareVolumeButtons;
-(void)_requestHardwareVolumeButtons;
-(id)requestVolumeControlsForRoute:(id)arg1 reason:(id)arg2 ;
-(NSArray *)volumeButtonConsumerInvalidators;
-(void)setVolumeButtonConsumerInvalidators:(NSArray *)arg1 ;
@end

