/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
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
-(id)dictionaryRepresentationWithTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)_setValuesFromDictionary:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 ;
-(void)_setTransformRamps:(id)arg1 ;
-(void)_setOpacityRamps:(id)arg1 ;
-(void)_setCropRectangleRamps:(id)arg1 ;
-(void)_setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV7)arg3 selector:(SEL)arg4 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)_setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 selector:(SEL)arg4 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)_setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV7)arg3 selector:(SEL)arg4 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(BOOL)getTransformRampForTime:(SCD_Struct_AV6)arg1 startTransform:(CGAffineTransform*)arg2 endTransform:(CGAffineTransform*)arg3 timeRange:(SCD_Struct_AV7*)arg4 ;
-(BOOL)getOpacityRampForTime:(SCD_Struct_AV6)arg1 startOpacity:(float*)arg2 endOpacity:(float*)arg3 timeRange:(SCD_Struct_AV7*)arg4 ;
-(BOOL)getCropRectangleRampForTime:(SCD_Struct_AV6)arg1 startCropRectangle:(CGRect*)arg2 endCropRectangle:(CGRect*)arg3 timeRange:(SCD_Struct_AV7*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)trackID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrackID:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

