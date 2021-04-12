/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal {

	unsigned short _alignment;
	unsigned _dataSize;
	unsigned long long _dataType;

}
-(unsigned long long)threadgroupMemoryAlignment;
-(void)setStructType:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)threadgroupMemoryDataSize;
-(id)structType;
-(void)setStructType:(id)arg1 doRetain:(BOOL)arg2 ;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9 ;
-(unsigned long long)threadgroupMemoryDataType;
-(id)threadgroupMemoryStructType;
@end

