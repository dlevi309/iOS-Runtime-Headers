/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@interface FPRangeList : NSObject {

	FPRangeListNode* _rangeListHead;

}
-(void)dealloc;
-(SCD_Struct_FP0)sum;
-(void)_addRangeList:(id)arg1 pageSize:(unsigned long long)arg2 ;
-(void)addRange:(NSRange)arg1 pageSize:(unsigned long long)arg2 memoryTotal:(SCD_Struct_FP0*)arg3 ;
-(void)addRegion:(id)arg1 pageSize:(unsigned long long)arg2 ;
@end

