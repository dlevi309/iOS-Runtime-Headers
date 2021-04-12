/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@interface FPRangeList : NSObject {

	FPRangeListNode* _rangeListHead;

}
-(SCD_Struct_FP0)sum;
-(void)dealloc;
-(void)_addRangeList:(id)arg1 pageSize:(unsigned long long)arg2 ;
-(void)addRange:(NSRange)arg1 pageSize:(unsigned long long)arg2 memoryTotal:(SCD_Struct_FP0*)arg3 ;
-(void)addRegion:(id)arg1 pageSize:(unsigned long long)arg2 ;
@end

