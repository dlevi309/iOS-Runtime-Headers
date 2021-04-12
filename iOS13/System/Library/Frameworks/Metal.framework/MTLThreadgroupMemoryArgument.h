/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal {

	unsigned short _alignment;
	unsigned _dataSize;
	unsigned long long _dataType;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)structType;
-(void)setStructType:(id)arg1 doRetain:(BOOL)arg2 ;
-(void)setStructType:(id)arg1 ;
-(id)threadgroupMemoryStructType;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9 ;
-(unsigned long long)threadgroupMemoryAlignment;
-(unsigned long long)threadgroupMemoryDataSize;
-(unsigned long long)threadgroupMemoryDataType;
@end

