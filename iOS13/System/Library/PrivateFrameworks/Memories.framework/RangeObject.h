/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface RangeObject : NSObject {

	SCD_Struct_Ra25 _range;

}

@property (nonatomic,readonly) SCD_Struct_Ra25 range;              //@synthesize range=_range - In the implementation block
+(id)rangeObjectWithRange:(SCD_Struct_Ra25)arg1 ;
+(id)rangesFromIndexSet:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_Ra25)range;
-(id)initWithRange:(SCD_Struct_Ra25)arg1 ;
-(void)setRange:(SCD_Struct_Ra25)arg1 ;
@end

