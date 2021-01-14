/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(oneway void)release;
-(void)_setStoreInfo1:(id)arg1 ;
-(id)retain;
-(id)_fallbackFactory;
-(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
-(unsigned long long)retainCount;
-(id)_storeInfo1;
-(id)initWithPK64:(long long)arg1 ;
-(void)_storeDeallocated;
-(void)setObjectStoreIdentifier:(id)arg1 ;
-(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
@end

