/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVTimedMetadataGroupInternal* _priv;

}

@property (getter=_timedMetadataGroupInternal,nonatomic,readonly) AVTimedMetadataGroupInternal * timedMetadataGroupInternal; 
@property (nonatomic,readonly) SCD_Struct_AV8 timeRange; 
@property (nonatomic,copy,readonly) NSArray * items; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(SCD_Struct_AV8)timeRange;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV8)arg2 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)_createSerializedRepresentationWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(const opaqueCMFormatDescriptionRef)copyFormatDescription;
-(id)_timedMetadataGroupInternal;
@end

