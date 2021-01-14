/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVDateRangeMetadataGroup.h>

@class AVDateRangeMetadataGroupInternal, NSDate, NSArray;

@interface AVMutableDateRangeMetadataGroup : AVDateRangeMetadataGroup {

	AVDateRangeMetadataGroupInternal* _mutablePriv;

}

@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSArray * items; 
-(NSDate *)endDate;
-(void)setItems:(NSArray *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

