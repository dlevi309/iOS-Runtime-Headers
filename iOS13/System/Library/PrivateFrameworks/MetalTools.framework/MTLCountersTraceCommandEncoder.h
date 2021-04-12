/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


#import <MetalTools/MetalTools-Structs.h>
@interface MTLCountersTraceCommandEncoder : NSObject {

	BinaryBuffer* _stream;
	unsigned long long _flags;
	NSRange _segment;

}

@property (nonatomic,readonly) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSRange segment;                       //@synthesize segment=_segment - In the implementation block
-(unsigned long long)flags;
-(void)endEncoding;
-(void)setLabel:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(NSRange)segment;
-(void)insertDebugSignpost:(id)arg1 ;
-(id)init:(BinaryBuffer*)arg1 flags:(unsigned long long)arg2 ;
@end

