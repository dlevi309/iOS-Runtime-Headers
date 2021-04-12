/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(id)dataWithCapacity:(unsigned long long)arg1 ;
+(id)bufferWithLength:(unsigned long long)arg1 ;
+(id)bufferWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithLength:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 andLength:(unsigned long long)arg2 ;
-(BOOL)ensureMapped;
-(id)initWithMachPort:(unsigned)arg1 capacity:(unsigned long long)arg2 andLength:(unsigned long long)arg3 ;
-(void)detachBytes;
-(id)createDispatchData;
@end

