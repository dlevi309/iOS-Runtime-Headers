/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@interface _NSCoreDataTaggedObjectIDFactory : NSObject {

	int _cd_rc;
	unsigned _taggedPoolIndex;
	id _fallbackFactories;

}
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)alloc;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
-(id)initWithPK64:(long long)arg1 ;
-(id)_storeInfo1;
-(void)_setStoreInfo1:(id)arg1 ;
-(void)setObjectStoreIdentifier:(id)arg1 ;
-(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
-(void)_storeDeallocated;
-(id)_fallbackFactory;
-(id)_initCoreWithTaggedIndex:(unsigned)arg1 ;
@end

