/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class _MTLIndirectArgumentBufferLayout;


@protocol MTLArgumentEncoderSPI <MTLArgumentEncoder>
@property (nonatomic,readonly) _MTLIndirectArgumentBufferLayout * layout; 
@required
-(void)setFunctionPointer:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setFunctionPointers:(const id*)arg1 withRange:(NSRange)arg2;
-(_MTLIndirectArgumentBufferLayout *)layout;

@end

