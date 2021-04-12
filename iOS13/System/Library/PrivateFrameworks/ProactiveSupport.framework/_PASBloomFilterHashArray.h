/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASBloomFilterHashArray : NSObject {

	unsigned long long _size;
	int* _data;

}

@property (nonatomic,readonly) int* hashes; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initInternal;
-(int*)hashes;
@end

