/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUDataSet.h>

@interface NUMutableDataSet : NUDataSet

@property (nonatomic,readonly) long long capacity; 
-(void)addValue:(double)arg1 ;
-(long long)capacity;
-(DataSet*)_data;
-(id)initWithCapacity:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendDataSet:(id)arg1 ;
@end

