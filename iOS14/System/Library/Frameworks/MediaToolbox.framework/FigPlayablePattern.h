/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol CHHapticAdvancedPatternPlayerExtended;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class AVHapticSequence;

@interface FigPlayablePattern : NSObject {

	BOOL _usingCoreHaptics;
	id<CHHapticAdvancedPatternPlayerExtended> _player;
	AVHapticSequence* _sequence;
	SCD_Struct_Fi17 _timeRange;
	SCD_Struct_Fi17 _outputTimeRange;

}

@property (assign,nonatomic) BOOL usingCoreHaptics;                                         //@synthesize usingCoreHaptics=_usingCoreHaptics - In the implementation block
@property (nonatomic,retain) id<CHHapticAdvancedPatternPlayerExtended> player;              //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVHapticSequence * sequence;                                   //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi17 timeRange;                                     //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi17 outputTimeRange;                               //@synthesize outputTimeRange=_outputTimeRange - In the implementation block
-(id<CHHapticAdvancedPatternPlayerExtended>)player;
-(void)setPlayer:(id<CHHapticAdvancedPatternPlayerExtended>)arg1 ;
-(void)setTimeRange:(SCD_Struct_Fi17)arg1 ;
-(SCD_Struct_Fi17)timeRange;
-(void)setUsingCoreHaptics:(BOOL)arg1 ;
-(void)setOutputTimeRange:(SCD_Struct_Fi17)arg1 ;
-(id)initWithSBuf:(opaqueCMSampleBufferRef)arg1 chEngine:(id)arg2 ;
-(id)initWithSBuf:(opaqueCMSampleBufferRef)arg1 avhpEngine:(id)arg2 ;
-(BOOL)usingCoreHaptics;
-(SCD_Struct_Fi17)outputTimeRange;
-(AVHapticSequence *)sequence;
-(void)setSequence:(AVHapticSequence *)arg1 ;
-(void)dealloc;
@end

