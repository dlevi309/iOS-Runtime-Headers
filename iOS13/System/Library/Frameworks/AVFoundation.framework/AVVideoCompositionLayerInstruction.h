/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	AVVideoCompositionLayerInstructionInternal* _layerInstruction;

}

@property (nonatomic,readonly) int trackID; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(id)dictionaryRepresentationWithTimeRange:(SCD_Struct_AV8)arg1 ;
-(void)_setValuesFromDictionary:(id)arg1 timeRange:(SCD_Struct_AV8)arg2 ;
-(void)_setTransformRamps:(id)arg1 ;
-(void)_setOpacityRamps:(id)arg1 ;
-(void)_setCropRectangleRamps:(id)arg1 ;
-(void)_setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV8)arg3 selector:(SEL)arg4 ;
-(void)_setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 selector:(SEL)arg4 ;
-(void)_setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV8)arg3 selector:(SEL)arg4 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(BOOL)getTransformRampForTime:(SCD_Struct_AV7)arg1 startTransform:(CGAffineTransform*)arg2 endTransform:(CGAffineTransform*)arg3 timeRange:(SCD_Struct_AV8*)arg4 ;
-(BOOL)getOpacityRampForTime:(SCD_Struct_AV7)arg1 startOpacity:(float*)arg2 endOpacity:(float*)arg3 timeRange:(SCD_Struct_AV8*)arg4 ;
-(BOOL)getCropRectangleRampForTime:(SCD_Struct_AV7)arg1 startCropRectangle:(CGRect*)arg2 endCropRectangle:(CGRect*)arg3 timeRange:(SCD_Struct_AV8*)arg4 ;
@end

