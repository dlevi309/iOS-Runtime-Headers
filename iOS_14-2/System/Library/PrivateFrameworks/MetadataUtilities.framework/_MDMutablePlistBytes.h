/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetadataUtilities.framework/MetadataUtilities
*/

#import <MetadataUtilities/MetadataUtilities-Structs.h>
#import <MetadataUtilities/_MDPlistBytes.h>

@interface _MDMutablePlistBytes : _MDPlistBytes {

	int _currentUID;
	int _parentSize;
	int _parentCount;
	int* _parentUIDs;
	CFDictionaryRef _ptrUIDMap;
	unsigned long long* _fillPtr;
	unsigned long long* _limitPtr;
	unsigned long long* _rleTagPtr;
	unsigned long long _curContainer;

}
+(MDPlistBytesRef)createArrayPlistBytesUsingBlock:(/*^block*/id)arg1 ;
+(MDPlistBytesRef)createDictionaryPlistBytesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 useMalloc:(BOOL)arg2 zone:(malloc_zone_t*)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 useMalloc:(BOOL)arg2 ;
@end

