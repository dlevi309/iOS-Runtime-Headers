/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 useMalloc:(BOOL)arg2 zone:(malloc_zone_t*)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 useMalloc:(BOOL)arg2 ;
@end

