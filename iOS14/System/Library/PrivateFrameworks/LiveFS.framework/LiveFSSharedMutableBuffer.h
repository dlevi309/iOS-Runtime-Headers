/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LiveFSSharedMutableBuffer : NSObject <NSSecureCoding> {

	unsigned long long _vma;
	unsigned long long _capacity;
	unsigned long long _length;
	unsigned _mp;

}

@property (assign) unsigned long long length; 
+(id)dataWithCapacity:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(id)bufferWithLength:(unsigned long long)arg1 ;
+(id)bufferWithCapacity:(unsigned long long)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(const void*)bytes;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(Class)classForCoder;
-(id)initWithLength:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 andLength:(unsigned long long)arg2 ;
-(BOOL)ensureMapped;
-(id)initWithMachPort:(unsigned)arg1 capacity:(unsigned long long)arg2 andLength:(unsigned long long)arg3 ;
-(void)detachBytes;
-(id)createDispatchData;
@end

