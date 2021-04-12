/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitVBox.h>

@interface EQKitOffsetVBox : EQKitVBox {

	double mOffset;

}

@property (nonatomic,readonly) double offset; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)offset;
-(id)initWithChildBoxes:(id)arg1 ;
-(void)p_cacheDimensionsForHeight:(double*)arg1 depth:(double*)arg2 width:(double*)arg3 ;
-(id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2 ;
-(id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2 offset:(double)arg3 ;
@end

