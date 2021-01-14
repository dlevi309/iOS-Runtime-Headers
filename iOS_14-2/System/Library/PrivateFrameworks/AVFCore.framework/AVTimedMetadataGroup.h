/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMetadataGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVTimedMetadataGroupInternal* _priv;

}

@property (getter=_timedMetadataGroupInternal,nonatomic,readonly) AVTimedMetadataGroupInternal * timedMetadataGroupInternal; 
@property (nonatomic,readonly) SCD_Struct_AV7 timeRange; 
@property (nonatomic,copy,readonly) NSArray * items; 
-(id)init;
-(SCD_Struct_AV7)timeRange;
-(opaqueCMSampleBufferRef)_createSerializedRepresentationWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(const opaqueCMFormatDescriptionRef)copyFormatDescription;
-(id)_timedMetadataGroupInternal;
-(NSArray *)items;
-(id)description;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 ;
-(unsigned long long)hash;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

