/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class KonaClip;

@interface CompositionItem : NSObject {

	BOOL m_isFinalClip;
	BOOL m_isMuted;
	BOOL m_isFreezeFrame;
	SCD_Struct_PM6 m_sourceTimeRange;
	SCD_Struct_PM5 m_destinationDuration;
	SCD_Struct_PM5 m_leftTransitionExtension;
	SCD_Struct_PM5 m_rightTransitionExtension;
	SCD_Struct_PM5 m_audioStartOffset;
	SCD_Struct_PM5 m_audioEndOffset;
	float m_speed;
	KonaClip* _clip;

}

@property (nonatomic,retain) KonaClip * clip;                                      //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) BOOL isFinalClip; 
@property (assign,nonatomic) SCD_Struct_PM6 sourceTimeRange; 
@property (assign,nonatomic) SCD_Struct_PM5 destinationDuration; 
@property (assign,nonatomic) SCD_Struct_PM5 leftTransitionExtension; 
@property (assign,nonatomic) SCD_Struct_PM5 rightTransitionExtension; 
@property (assign,nonatomic) SCD_Struct_PM5 audioStartOffset; 
@property (assign,nonatomic) SCD_Struct_PM5 audioEndOffset; 
@property (nonatomic,readonly) BOOL hasVideoContent; 
@property (nonatomic,readonly) BOOL isMuted; 
@property (nonatomic,readonly) BOOL isFreezeFrame; 
@property (assign,nonatomic) float speed; 
+(id)compositionItemWithClip:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(KonaClip *)clip;
-(BOOL)isMuted;
-(void)setClip:(KonaClip *)arg1 ;
-(SCD_Struct_PM6)sourceTimeRange;
-(BOOL)isFreezeFrame;
-(id)emptyTrackSegmentWithDestinationRange:(SCD_Struct_PM6)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM5)arg1 paddedFromTime:(SCD_Struct_PM5)arg2 ;
-(SCD_Struct_PM5)destinationDuration;
-(SCD_Struct_PM5)audioStartOffset;
-(SCD_Struct_PM5)audioEndOffset;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM6)arg1 ;
-(id)emptyTrackSegmentWithDestinationTime:(SCD_Struct_PM5)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_PM6)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM5)arg1 ;
-(void)setAudioStartOffset:(SCD_Struct_PM5)arg1 ;
-(void)setAudioEndOffset:(SCD_Struct_PM5)arg1 ;
-(void)setIsFinalClip:(BOOL)arg1 ;
-(void)setSourceTimeRange:(SCD_Struct_PM6)arg1 ;
-(void)setDestinationDuration:(SCD_Struct_PM5)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(BOOL)isFinalClip;
-(id)emptyVideoTrackSegmentsWithDestinationRange:(SCD_Struct_PM6)arg1 ;
-(id)emptyAudioTrackSegmentsWithDestinationTime:(SCD_Struct_PM5)arg1 ;
-(SCD_Struct_PM5)leftTransitionExtension;
-(void)setLeftTransitionExtension:(SCD_Struct_PM5)arg1 ;
-(SCD_Struct_PM5)rightTransitionExtension;
-(void)setRightTransitionExtension:(SCD_Struct_PM5)arg1 ;
@end

