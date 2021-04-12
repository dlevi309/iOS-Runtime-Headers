/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimedMetadataGroup.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {

	AVTimedMetadataGroupInternal* _mutablePriv;

}

@property (assign,nonatomic) SCD_Struct_AV8 timeRange; 
@property (nonatomic,copy) NSArray * items; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV8)arg1 ;
-(SCD_Struct_AV8)timeRange;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV8)arg2 ;
@end

