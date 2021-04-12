/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject {

	TSUIntegerKeyDictionary* mDict;
	opaque_pthread_rwlock_t mDictRWLock;

}
-(id)init;
-(void)dealloc;
-(id)allCells;
-(void)setCell:(id)arg1 atCellID:(SCD_Struct_TS127)arg2 ;
-(id)cellAtCellID:(SCD_Struct_TS127)arg1 ;
-(void)removeAllCells;
-(void)applyBlockToAllCells:(/*^block*/id)arg1 ;
@end

