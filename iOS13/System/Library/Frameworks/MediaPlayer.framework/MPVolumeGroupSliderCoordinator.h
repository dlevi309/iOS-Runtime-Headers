/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSArray, NSMutableSet, MPVolumeSlider, NSMapTable;

@interface MPVolumeGroupSliderCoordinator : NSObject {

	NSArray* _allSliders;
	NSMutableSet* _individualVolumeSliders;
	MPVolumeSlider* _trackingSlider;
	NSMapTable* _optimisticValues;
	NSMapTable* _optimisticScales;
	int _inFlightDisableOptimisticStateRequests;
	BOOL _shouldOverrideTracking;
	BOOL _synced;
	MPVolumeSlider* _masterVolumeSlider;

}

@property (nonatomic,readonly) MPVolumeSlider * masterVolumeSlider;                 //@synthesize masterVolumeSlider=_masterVolumeSlider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * individualVolumeSliders; 
@property (nonatomic,readonly) BOOL synced;                                         //@synthesize synced=_synced - In the implementation block
-(id)initWithMasterVolumeSlider:(id)arg1 individualVolumeSliders:(id)arg2 ;
-(NSArray *)individualVolumeSliders;
-(void)addIndividualVolumeSlider:(id)arg1 ;
-(void)removeIndividualVolumeSlider:(id)arg1 ;
-(void)removeAllIndividualVolumeSliders;
-(void)volumeSliderValueChanged:(id)arg1 ;
-(void)volumeSliderDidEndTracking:(id)arg1 ;
-(float)_maxOptimisticValue;
-(void)_resetOptimisticScales;
-(void)_updateOptimisticValueCache;
-(void)_resetMasterVolumeSlider;
-(void)syncSliders:(BOOL)arg1 ;
-(id)_findExistingVolumeSlider:(id)arg1 ;
-(void)_addControlEventsForVolumeSlider:(id)arg1 ;
-(void)_addControlEventsForVolumeSliders:(id)arg1 ;
-(void)_removeControlEventsForVolumeSlider:(id)arg1 ;
-(void)_removeControlEventsForVolumeSliders:(id)arg1 ;
-(void)_setControlEventsForVolumeSlider:(id)arg1 add:(BOOL)arg2 ;
-(MPVolumeSlider *)masterVolumeSlider;
-(BOOL)synced;
@end

