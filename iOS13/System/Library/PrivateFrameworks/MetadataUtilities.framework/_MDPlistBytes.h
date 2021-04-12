/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetadataUtilities.framework/MetadataUtilities
*/


#import <MetadataUtilities/MetadataUtilities-Structs.h>
@interface _MDPlistBytes : NSObject {

	unsigned long long _byteVector;
	unsigned _byteVectorCnt;
	unsigned _byteVectorCapacity;
	/*^block*/id _deallocator;
	unsigned _isBad : 16;
	unsigned _isMutable : 1;
	unsigned _isMutating : 1;
	unsigned _didFinalize : 1;
	unsigned _useMalloc : 1;
	CFArrayRef _rleQueue;
	unsigned long long* _wrapperPtr;
	unsigned long long* _uidVector;
	int _uidCount;
	int _uidCapacity;
	malloc_zone_t* _zone;

}
+(MDPlistBytesRef)createArrayPlistBytesUsingBlock:(/*^block*/id)arg1 ;
+(MDPlistBytesRef)createDictionaryPlistBytesUsingBlock:(/*^block*/id)arg1 ;
+(MDPlistBytesRef)createPlistBytes:(id)arg1 ;
+(MDPlistBytesRef)emptyArrayPlistBytes;
+(MDPlistBytesRef)emptyDictionaryPlistBytes;
+(void)enumerateObjectsFromPlistBytes:(char*)arg1 count:(unsigned)arg2 shouldDeallocate:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
+(MDPlistBytesRef)nullObjectPlistBytes;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)_cfTypeID;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateQueryResults:(unsigned long long)arg1 stringCache:(SCD_Struct_MD8*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)enumerateQueryResults:(unsigned long long)arg1 attributeSize:(unsigned long long)arg2 stringCache:(SCD_Struct_MD8*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)initWithByteVector:(char*)arg1 count:(unsigned)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithByteVector:(char*)arg1 count:(unsigned)arg2 trusted:(unsigned char)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithByteVector:(char*)arg1 count:(unsigned)arg2 shouldDeallocate:(BOOL)arg3 ;
-(CFDataRef)copyData;
-(CFDataRef)copyDataWithBytesNoCopy;
-(void)dumpUIDs;
@end

