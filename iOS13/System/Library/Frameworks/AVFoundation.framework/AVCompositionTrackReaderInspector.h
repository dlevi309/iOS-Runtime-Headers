/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTrackReaderInspector.h>

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {

	OpaqueFigMutableCompositionRef _figMutableComposition;

}

@property (getter=_mutableComposition,nonatomic,readonly) OpaqueFigMutableCompositionRef mutableComposition; 
-(void)dealloc;
-(id)segments;
-(BOOL)isPlayable;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(BOOL)isDecodable;
-(int)playabilityValidationResult;
-(id)segmentForTrackTime:(SCD_Struct_AV7)arg1 ;
-(int)decodabilityValidationResult;
@end

