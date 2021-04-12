/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PACountedFrame.h>

@class NSMutableSet, NSUUID;

@interface PAAggregatedInstruction : PACountedFrame {

	NSMutableSet* _children;
	NSUUID* _binaryUuid;
	unsigned long long _offsetInBinary;

}

@property (retain) NSMutableSet * children;                          //@synthesize children=_children - In the implementation block
@property (readonly) NSUUID * binaryUuid;                            //@synthesize binaryUuid=_binaryUuid - In the implementation block
@property (readonly) unsigned long long offsetInBinary;              //@synthesize offsetInBinary=_offsetInBinary - In the implementation block
@property (readonly) BOOL isKernel; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(NSMutableSet *)children;
-(void)setChildren:(NSMutableSet *)arg1 ;
-(BOOL)isKernel;
-(id)initWithUUID:(id)arg1 andOffset:(unsigned long long)arg2 isKernel:(BOOL)arg3 ;
-(NSUUID *)binaryUuid;
-(unsigned long long)offsetInBinary;
@end

