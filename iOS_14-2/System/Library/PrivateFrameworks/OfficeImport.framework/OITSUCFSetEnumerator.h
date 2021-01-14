/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface OITSUCFSetEnumerator : NSEnumerator <NSFastEnumeration> {

	void** mInlineObjects[16];
	const void* mObjects;
	long long mCount;
	long long mIndex;

}
-(id)nextObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)allObjects;
-(void)dealloc;
-(id)initWithCFSet:(CFSetRef)arg1 ;
@end

