/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface RangeObject : NSObject {

	SCD_Struct_Ra28 _range;

}

@property (nonatomic,readonly) SCD_Struct_Ra28 range;              //@synthesize range=_range - In the implementation block
+(id)rangeObjectWithRange:(SCD_Struct_Ra28)arg1 ;
+(id)rangesFromIndexSet:(id)arg1 ;
-(void)setRange:(SCD_Struct_Ra28)arg1 ;
-(long long)compare:(id)arg1 ;
-(SCD_Struct_Ra28)range;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRange:(SCD_Struct_Ra28)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

