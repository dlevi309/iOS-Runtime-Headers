/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject {

	AVFrameRateRangeInternal* _internal;

}

@property (readonly) double minFrameRate; 
@property (readonly) double maxFrameRate; 
@property (readonly) SCD_Struct_AV0 maxFrameDuration; 
@property (readonly) SCD_Struct_AV0 minFrameDuration; 
+(void)initialize;
+(id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(double)maxFrameRate;
-(BOOL)includesFrameRate:(double)arg1 ;
-(SCD_Struct_AV0)minFrameDuration;
-(double)minFrameRate;
-(id)description;
-(BOOL)includesFrameDuration:(SCD_Struct_AV0)arg1 ;
-(SCD_Struct_AV0)maxFrameDuration;
-(id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

