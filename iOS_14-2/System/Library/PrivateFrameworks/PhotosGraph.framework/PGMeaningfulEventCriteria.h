/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait, PGMeaningfulEventLocationSetTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventLocationMobilityTrait;

@interface PGMeaningfulEventCriteria : NSObject {

	BOOL _debug;
	PGMeaningfulEventSceneSetTrait* _scenesTrait;
	PGMeaningfulEventSetTrait* _roisTrait;
	PGMeaningfulEventSetTrait* _poisTrait;
	PGMeaningfulEventLocationSetTrait* _locationsTrait;
	PGMeaningfulEventSetTrait* _datesTrait;
	PGMeaningfulEventSetTrait* _peopleTrait;
	PGMeaningfulEventNumberTrait* _numberOfPeopleTrait;
	PGMeaningfulEventSetTrait* _socialGroupsTrait;
	PGMeaningfulEventNumberTrait* _minimumDurationTrait;
	PGMeaningfulEventNumberTrait* _maximumDurationTrait;
	PGMeaningfulEventPartOfDayTrait* _significantPartsOfDayTrait;
	PGMeaningfulEventPartOfDayTrait* _allPartsOfDayTrait;
	PGMeaningfulEventLocationMobilityTrait* _locationMobilityTrait;
	PGMeaningfulEventSetTrait* _publicEventCategoriesTrait;

}

@property (nonatomic,retain) PGMeaningfulEventSceneSetTrait * scenesTrait;                                //@synthesize scenesTrait=_scenesTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * roisTrait;                                       //@synthesize roisTrait=_roisTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * poisTrait;                                       //@synthesize poisTrait=_poisTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventLocationSetTrait * locationsTrait;                          //@synthesize locationsTrait=_locationsTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * datesTrait;                                      //@synthesize datesTrait=_datesTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * peopleTrait;                                     //@synthesize peopleTrait=_peopleTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventNumberTrait * numberOfPeopleTrait;                          //@synthesize numberOfPeopleTrait=_numberOfPeopleTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * socialGroupsTrait;                               //@synthesize socialGroupsTrait=_socialGroupsTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventNumberTrait * minimumDurationTrait;                         //@synthesize minimumDurationTrait=_minimumDurationTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventNumberTrait * maximumDurationTrait;                         //@synthesize maximumDurationTrait=_maximumDurationTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventPartOfDayTrait * significantPartsOfDayTrait;                //@synthesize significantPartsOfDayTrait=_significantPartsOfDayTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventPartOfDayTrait * allPartsOfDayTrait;                        //@synthesize allPartsOfDayTrait=_allPartsOfDayTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventLocationMobilityTrait * locationMobilityTrait;              //@synthesize locationMobilityTrait=_locationMobilityTrait - In the implementation block
@property (nonatomic,retain) PGMeaningfulEventSetTrait * publicEventCategoriesTrait;                      //@synthesize publicEventCategoriesTrait=_publicEventCategoriesTrait - In the implementation block
@property (assign,getter=isDebug,nonatomic) BOOL debug;                                                   //@synthesize debug=_debug - In the implementation block
-(id)init;
-(void)setScenesTrait:(PGMeaningfulEventSceneSetTrait *)arg1 ;
-(void)setDebug:(BOOL)arg1 ;
-(BOOL)isDebug;
-(PGMeaningfulEventSetTrait *)peopleTrait;
-(PGMeaningfulEventSceneSetTrait *)scenesTrait;
-(void)setPeopleTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(id)_debugDescriptionWithMomentNode:(id)arg1 ;
-(PGMeaningfulEventSetTrait *)publicEventCategoriesTrait;
-(PGMeaningfulEventLocationMobilityTrait *)locationMobilityTrait;
-(PGMeaningfulEventPartOfDayTrait *)allPartsOfDayTrait;
-(PGMeaningfulEventPartOfDayTrait *)significantPartsOfDayTrait;
-(PGMeaningfulEventNumberTrait *)maximumDurationTrait;
-(PGMeaningfulEventNumberTrait *)minimumDurationTrait;
-(PGMeaningfulEventSetTrait *)poisTrait;
-(PGMeaningfulEventSetTrait *)roisTrait;
-(PGMeaningfulEventSetTrait *)datesTrait;
-(PGMeaningfulEventLocationSetTrait *)locationsTrait;
-(PGMeaningfulEventSetTrait *)socialGroupsTrait;
-(PGMeaningfulEventNumberTrait *)numberOfPeopleTrait;
-(void)setPublicEventCategoriesTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(void)setLocationMobilityTrait:(PGMeaningfulEventLocationMobilityTrait *)arg1 ;
-(void)setAllPartsOfDayTrait:(PGMeaningfulEventPartOfDayTrait *)arg1 ;
-(void)setSignificantPartsOfDayTrait:(PGMeaningfulEventPartOfDayTrait *)arg1 ;
-(void)setMaximumDurationTrait:(PGMeaningfulEventNumberTrait *)arg1 ;
-(void)setMinimumDurationTrait:(PGMeaningfulEventNumberTrait *)arg1 ;
-(void)setPoisTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(void)setRoisTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(void)setLocationsTrait:(PGMeaningfulEventLocationSetTrait *)arg1 ;
-(void)setDatesTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(void)setSocialGroupsTrait:(PGMeaningfulEventSetTrait *)arg1 ;
-(void)setNumberOfPeopleTrait:(PGMeaningfulEventNumberTrait *)arg1 ;
@end

