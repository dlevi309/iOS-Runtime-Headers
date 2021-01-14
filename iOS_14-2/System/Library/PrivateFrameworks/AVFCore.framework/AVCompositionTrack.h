/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrack.h>

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack {

	AVCompositionTrackInternal* _priv;

}

@property (nonatomic,copy,readonly) NSArray * segments; 
@property (readonly) NSArray * formatDescriptionReplacements; 
-(id)description;
-(NSArray *)segments;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(BOOL)isEnabled;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(void)dealloc;
-(NSArray *)formatDescriptionReplacements;
@end

