/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLFunctionConstantValues : NSObject <NSCopying>
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 withName:(id)arg3 ;
-(void)setConstantValues:(const void*)arg1 type:(unsigned long long)arg2 withRange:(NSRange)arg3 ;
@end

