/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLResourceAllocationInfo.h>

@class NSString;

@interface MTLIOAccelResourceAllocation : MTLResourceAllocationInfo {

	NSString* _memoryPool;
	unsigned long long _virtualSize;
	unsigned long long _residentSize;
	unsigned long long _dirtySize;
	BOOL _purgeable;
	unsigned long long _uniqueIdentifier;

}
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(BOOL)purgeable;
-(id)memoryPool;
-(id)initWithPool:(id)arg1 virtualSize:(unsigned long long)arg2 residentSize:(unsigned long long)arg3 dirtySize:(unsigned long long)arg4 purgeable:(BOOL)arg5 uniqueID:(unsigned long long)arg6 ;
-(unsigned long long)virtualSize;
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
@end

