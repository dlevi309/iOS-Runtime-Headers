/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject {

	AVFrameRateRangeInternal* _internal;

}

@property (readonly) double minFrameRate; 
@property (readonly) double maxFrameRate; 
@property (readonly) SCD_Struct_AV7 maxFrameDuration; 
@property (readonly) SCD_Struct_AV7 minFrameDuration; 
+(id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)minFrameRate;
-(double)maxFrameRate;
-(SCD_Struct_AV7)minFrameDuration;
-(SCD_Struct_AV7)maxFrameDuration;
-(BOOL)includesFrameDuration:(SCD_Struct_AV7)arg1 ;
-(id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(BOOL)includesFrameRate:(double)arg1 ;
@end

