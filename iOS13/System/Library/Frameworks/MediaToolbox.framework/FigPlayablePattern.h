/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol CHHapticAdvancedPatternPlayerExtended;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class AVHapticSequence;

@interface FigPlayablePattern : NSObject {

	BOOL _usingCoreHaptics;
	id<CHHapticAdvancedPatternPlayerExtended> _player;
	AVHapticSequence* _sequence;
	SCD_Struct_Fi13 _timeRange;
	SCD_Struct_Fi13 _outputTimeRange;

}

@property (assign,nonatomic) BOOL usingCoreHaptics;                                         //@synthesize usingCoreHaptics=_usingCoreHaptics - In the implementation block
@property (nonatomic,retain) id<CHHapticAdvancedPatternPlayerExtended> player;              //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVHapticSequence * sequence;                                   //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi13 timeRange;                                     //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi13 outputTimeRange;                               //@synthesize outputTimeRange=_outputTimeRange - In the implementation block
-(void)dealloc;
-(void)setSequence:(AVHapticSequence *)arg1 ;
-(AVHapticSequence *)sequence;
-(void)setTimeRange:(SCD_Struct_Fi13)arg1 ;
-(SCD_Struct_Fi13)timeRange;
-(id<CHHapticAdvancedPatternPlayerExtended>)player;
-(void)setPlayer:(id<CHHapticAdvancedPatternPlayerExtended>)arg1 ;
-(void)setUsingCoreHaptics:(BOOL)arg1 ;
-(void)setOutputTimeRange:(SCD_Struct_Fi13)arg1 ;
-(id)initWithSBuf:(opaqueCMSampleBufferRef)arg1 chEngine:(id)arg2 ;
-(id)initWithSBuf:(opaqueCMSampleBufferRef)arg1 avhpEngine:(id)arg2 ;
-(BOOL)usingCoreHaptics;
-(SCD_Struct_Fi13)outputTimeRange;
@end

