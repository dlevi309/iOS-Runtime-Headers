/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)synced;
-(NSArray *)individualVolumeSliders;
-(void)removeIndividualVolumeSlider:(id)arg1 ;
-(void)removeAllIndividualVolumeSliders;
-(float)_maxOptimisticValue;
-(void)_removeControlEventsForVolumeSlider:(id)arg1 ;
-(void)volumeSliderDidEndTracking:(id)arg1 ;
-(void)addIndividualVolumeSlider:(id)arg1 ;
-(void)_addControlEventsForVolumeSliders:(id)arg1 ;
-(void)_removeControlEventsForVolumeSliders:(id)arg1 ;
-(MPVolumeSlider *)masterVolumeSlider;
-(void)syncSliders:(BOOL)arg1 ;
-(void)_addControlEventsForVolumeSlider:(id)arg1 ;
-(void)volumeSliderValueChanged:(id)arg1 ;
-(void)_resetOptimisticScales;
-(id)initWithMasterVolumeSlider:(id)arg1 individualVolumeSliders:(id)arg2 ;
-(id)_findExistingVolumeSlider:(id)arg1 ;
-(void)_resetMasterVolumeSlider;
-(void)_setControlEventsForVolumeSlider:(id)arg1 add:(BOOL)arg2 ;
-(void)_updateOptimisticValueCache;
@end

