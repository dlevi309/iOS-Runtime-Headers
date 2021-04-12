/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class KonaClip, AltClipCollection, NSArray, MultiUpClip, MiroAutoEditKenBurnsController;

@interface MiroAutoLayoutClip : NSObject {

	BOOL _canSupportPrecedingTransition;
	BOOL _canSupportMultiUp;
	BOOL _itemShouldHeroFeaturedPerson;
	BOOL _transitionAssigned;
	BOOL _zoomToPersonCandidate;
	BOOL _isPortrait;
	BOOL _isSquare;
	BOOL _facesAreClose;
	BOOL _durationIsFlexible;
	BOOL _missedRollToBeats;
	BOOL _couldSupportNUpBase;
	BOOL _supportsHalf;
	BOOL _supportsOneThird;
	BOOL _supportsTwoThirds;
	int _clipType;
	int _preferredDirection;
	int _directionOfMovement;
	int _numberOfFaces;
	KonaClip* _projectClip;
	AltClipCollection* _treatmentInfo;
	NSArray* _multiUpPeers;
	MiroAutoLayoutClip* _selectedPeer;
	MultiUpClip* _multiUpClip;
	MiroAutoEditKenBurnsController* _kbController;

}

@property (nonatomic,retain) AltClipCollection * treatmentInfo;                          //@synthesize treatmentInfo=_treatmentInfo - In the implementation block
@property (nonatomic,retain) KonaClip * projectClip;                                     //@synthesize projectClip=_projectClip - In the implementation block
@property (assign,nonatomic) int clipType;                                               //@synthesize clipType=_clipType - In the implementation block
@property (assign,nonatomic) int preferredDirection;                                     //@synthesize preferredDirection=_preferredDirection - In the implementation block
@property (assign,nonatomic) BOOL canSupportPrecedingTransition;                         //@synthesize canSupportPrecedingTransition=_canSupportPrecedingTransition - In the implementation block
@property (assign,nonatomic) BOOL canSupportMultiUp;                                     //@synthesize canSupportMultiUp=_canSupportMultiUp - In the implementation block
@property (nonatomic,retain) NSArray * multiUpPeers;                                     //@synthesize multiUpPeers=_multiUpPeers - In the implementation block
@property (nonatomic,retain) MiroAutoLayoutClip * selectedPeer;                          //@synthesize selectedPeer=_selectedPeer - In the implementation block
@property (nonatomic,retain) MultiUpClip * multiUpClip;                                  //@synthesize multiUpClip=_multiUpClip - In the implementation block
@property (assign,nonatomic) BOOL itemShouldHeroFeaturedPerson;                          //@synthesize itemShouldHeroFeaturedPerson=_itemShouldHeroFeaturedPerson - In the implementation block
@property (assign,nonatomic) int directionOfMovement;                                    //@synthesize directionOfMovement=_directionOfMovement - In the implementation block
@property (assign,nonatomic) BOOL transitionAssigned;                                    //@synthesize transitionAssigned=_transitionAssigned - In the implementation block
@property (assign,nonatomic) BOOL zoomToPersonCandidate;                                 //@synthesize zoomToPersonCandidate=_zoomToPersonCandidate - In the implementation block
@property (nonatomic,readonly) BOOL isPortrait;                                          //@synthesize isPortrait=_isPortrait - In the implementation block
@property (nonatomic,readonly) BOOL isSquare;                                            //@synthesize isSquare=_isSquare - In the implementation block
@property (nonatomic,readonly) int numberOfFaces;                                        //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (nonatomic,readonly) BOOL facesAreClose;                                       //@synthesize facesAreClose=_facesAreClose - In the implementation block
@property (assign,nonatomic) BOOL durationIsFlexible;                                    //@synthesize durationIsFlexible=_durationIsFlexible - In the implementation block
@property (assign,nonatomic) BOOL missedRollToBeats;                                     //@synthesize missedRollToBeats=_missedRollToBeats - In the implementation block
@property (assign,nonatomic) BOOL couldSupportNUpBase;                                   //@synthesize couldSupportNUpBase=_couldSupportNUpBase - In the implementation block
@property (assign,nonatomic) BOOL supportsHalf;                                          //@synthesize supportsHalf=_supportsHalf - In the implementation block
@property (assign,nonatomic) BOOL supportsOneThird;                                      //@synthesize supportsOneThird=_supportsOneThird - In the implementation block
@property (assign,nonatomic) BOOL supportsTwoThirds;                                     //@synthesize supportsTwoThirds=_supportsTwoThirds - In the implementation block
@property (nonatomic,retain) MiroAutoEditKenBurnsController * kbController;              //@synthesize kbController=_kbController - In the implementation block
+(BOOL)clipIsPortrait:(id)arg1 ;
+(BOOL)clipIsSquare:(id)arg1 ;
+(BOOL)clipIsPano:(id)arg1 ;
+(double)clipAspectRatio:(id)arg1 ;
+(BOOL)clipIsPortraitOrSquare:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isPortrait;
-(BOOL)isVideo;
-(BOOL)hasMultipleFaces;
-(BOOL)isFavorite;
-(BOOL)isSquare;
-(int)numberOfFaces;
-(BOOL)isEdited;
-(BOOL)isPano;
-(int)clipType;
-(void)setProjectClip:(KonaClip *)arg1 ;
-(void)setTreatmentInfo:(AltClipCollection *)arg1 ;
-(AltClipCollection *)treatmentInfo;
-(void)setZoomToPersonCandidate:(BOOL)arg1 ;
-(void)establishProjectClipType;
-(BOOL)isTransition;
-(void)establishIsPortrait;
-(void)establishIsSquare;
-(void)establishFaceInfo:(id)arg1 ;
-(void)establishDurationFlexibility;
-(void)establishPreferredDirection;
-(void)establishFacesAreClose;
-(void)establishCanSupportPrecedingTransition;
-(NSArray *)multiUpPeers;
-(int)establishRequiredTreatmentForAspect:(double)arg1 polishDelegate:(id)arg2 ;
-(void)applyAssignedTreatmentsFromRequired;
-(MiroAutoEditKenBurnsController *)kbController;
-(void)setKbController:(MiroAutoEditKenBurnsController *)arg1 ;
-(BOOL)transitionAssigned;
-(BOOL)missedRollToBeats;
-(KonaClip *)projectClip;
-(MultiUpClip *)multiUpClip;
-(void)setClipType:(int)arg1 ;
-(BOOL)clipCanZoomCrop:(id)arg1 ;
-(BOOL)canSupportMultiUp;
-(BOOL)zoomToPersonCandidate;
-(BOOL)itemShouldHeroFeaturedPerson;
-(void)setPreferredDirection:(int)arg1 ;
-(BOOL)facesAreClose;
-(BOOL)supportsHalf;
-(BOOL)supportsOneThird;
-(void)setItemShouldHeroFeaturedPerson:(BOOL)arg1 ;
-(void)setDurationIsFlexible:(BOOL)arg1 ;
-(void)setCanSupportPrecedingTransition:(BOOL)arg1 ;
-(id)locationForClip;
-(id)initWithKonaClip:(id)arg1 polishDelegate:(id)arg2 zoomToPersonCandidate:(BOOL)arg3 ;
-(double)distanceToLayoutClip:(id)arg1 ;
-(int)preferredDirection;
-(BOOL)canSupportPrecedingTransition;
-(void)setCanSupportMultiUp:(BOOL)arg1 ;
-(void)setMultiUpPeers:(NSArray *)arg1 ;
-(MiroAutoLayoutClip *)selectedPeer;
-(void)setSelectedPeer:(MiroAutoLayoutClip *)arg1 ;
-(void)setMultiUpClip:(MultiUpClip *)arg1 ;
-(int)directionOfMovement;
-(void)setDirectionOfMovement:(int)arg1 ;
-(void)setTransitionAssigned:(BOOL)arg1 ;
-(BOOL)durationIsFlexible;
-(void)setMissedRollToBeats:(BOOL)arg1 ;
-(BOOL)couldSupportNUpBase;
-(void)setCouldSupportNUpBase:(BOOL)arg1 ;
-(void)setSupportsHalf:(BOOL)arg1 ;
-(void)setSupportsOneThird:(BOOL)arg1 ;
-(BOOL)supportsTwoThirds;
-(void)setSupportsTwoThirds:(BOOL)arg1 ;
@end

