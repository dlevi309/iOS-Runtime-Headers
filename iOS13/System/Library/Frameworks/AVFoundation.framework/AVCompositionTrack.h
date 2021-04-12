/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrack.h>

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack {

	AVCompositionTrackInternal* _priv;

}

@property (nonatomic,copy,readonly) NSArray * segments; 
@property (readonly) NSArray * formatDescriptionReplacements; 
-(void)dealloc;
-(id)description;
-(BOOL)isEnabled;
-(NSArray *)segments;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(id)segmentForTrackTime:(SCD_Struct_AV7)arg1 ;
-(NSArray *)formatDescriptionReplacements;
@end

