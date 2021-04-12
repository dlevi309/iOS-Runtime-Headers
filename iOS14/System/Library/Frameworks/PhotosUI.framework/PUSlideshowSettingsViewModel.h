/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewModel.h>

@class OKProducerPreset, PUSlideshowMediaItem, NSDictionary;

@interface PUSlideshowSettingsViewModel : PUViewModel {

	BOOL _shouldRepeat;
	BOOL _musicOn;
	double _stepDuration;
	OKProducerPreset* _preset;
	PUSlideshowMediaItem* _mediaItem;

}

@property (nonatomic,readonly) NSDictionary * propertyDictionary; 
@property (nonatomic,retain) OKProducerPreset * preset;                        //@synthesize preset=_preset - In the implementation block
@property (nonatomic,retain) PUSlideshowMediaItem * mediaItem;                 //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) BOOL shouldRepeat;                                //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
@property (assign,nonatomic) double stepDuration;                              //@synthesize stepDuration=_stepDuration - In the implementation block
@property (assign,getter=isMusicOn,nonatomic) BOOL musicOn;                    //@synthesize musicOn=_musicOn - In the implementation block
-(void)registerChangeObserver:(id)arg1 ;
-(id)currentChange;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)setMediaItem:(PUSlideshowMediaItem *)arg1 ;
-(BOOL)isMusicOn;
-(double)stepDuration;
-(void)setShouldRepeat:(BOOL)arg1 ;
-(void)setStepDuration:(double)arg1 ;
-(void)setMusicOn:(BOOL)arg1 ;
-(PUSlideshowMediaItem *)mediaItem;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(void)setPreset:(OKProducerPreset *)arg1 ;
-(unsigned long long)hash;
-(BOOL)shouldRepeat;
-(NSDictionary *)propertyDictionary;
-(OKProducerPreset *)preset;
-(id)newViewModelChange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

