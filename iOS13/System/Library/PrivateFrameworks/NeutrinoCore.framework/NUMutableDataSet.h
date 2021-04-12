/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUDataSet.h>

@interface NUMutableDataSet : NUDataSet

@property (nonatomic,readonly) long long capacity; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(long long)arg1 ;
-(DataSet*)_data;
-(long long)capacity;
-(void)addValue:(double)arg1 ;
-(void)appendDataSet:(id)arg1 ;
@end

