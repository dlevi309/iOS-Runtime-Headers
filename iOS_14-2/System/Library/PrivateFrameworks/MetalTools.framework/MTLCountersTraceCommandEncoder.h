/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)pushDebugGroup:(id)arg1 ;
-(NSRange)segment;
-(unsigned long long)flags;
-(void)popDebugGroup;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)init:(BinaryBuffer*)arg1 flags:(unsigned long long)arg2 ;
@end

