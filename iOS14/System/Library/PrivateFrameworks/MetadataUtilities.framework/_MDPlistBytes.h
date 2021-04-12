/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)_cfTypeID;
-(CFDataRef)copyDataWithBytesNoCopy;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithByteVector:(char*)arg1 count:(unsigned)arg2 trusted:(unsigned char)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)description;
-(void)dumpUIDs;
-(id)initWithByteVector:(char*)arg1 count:(unsigned)arg2 deallocator:(/*^block*/id)arg3 ;
-(void)enumerateQueryResults:(unsigned long long)arg1 stringCache:(SCD_Struct_MD9*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(CFDataRef)copyData;
-(id)initWithByteVector:(char*)arg1 count:(unsigned)arg2 shouldDeallocate:(BOOL)arg3 ;
-(BOOL)enumerateQueryResults:(unsigned long long)arg1 attributeSize:(unsigned long long)arg2 stringCache:(SCD_Struct_MD9*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

