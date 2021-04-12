/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTrackReaderInspector.h>

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {

	OpaqueFigMutableCompositionRef _figMutableComposition;

}

@property (getter=_mutableComposition,nonatomic,readonly) OpaqueFigMutableCompositionRef mutableComposition; 
-(BOOL)isPlayable;
-(BOOL)isDecodable;
-(id)segments;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(int)playabilityValidationResult;
-(int)decodabilityValidationResult;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(void)dealloc;
@end

