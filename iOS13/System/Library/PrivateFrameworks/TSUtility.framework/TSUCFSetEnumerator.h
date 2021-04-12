/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface TSUCFSetEnumerator : NSObject <NSFastEnumeration> {

	void** mInlineObjects[16];
	const void* mObjects;
	long long mCount;
	long long mIndex;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)nextObject;
-(id)allObjects;
-(id)initWithCFSet:(CFSetRef)arg1 ;
@end

