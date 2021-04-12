/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTimedMetadataGroup.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {

	AVTimedMetadataGroupInternal* _mutablePriv;

}

@property (assign,nonatomic) SCD_Struct_AV7 timeRange; 
@property (nonatomic,copy) NSArray * items; 
-(void)setItems:(NSArray *)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

