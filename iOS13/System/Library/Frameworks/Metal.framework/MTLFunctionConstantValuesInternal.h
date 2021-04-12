/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLFunctionConstantValues.h>
#import <libobjc.A.dylib/MTLFunctionConstantSPI.h>

@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI> {

	MTLConstantStorage* _constantStorage;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 withName:(id)arg3 ;
-(id)newNamedConstantArray;
-(id)newIndexedConstantArray;
-(void)setConstantValues:(const void*)arg1 type:(unsigned long long)arg2 withRange:(NSRange)arg3 ;
-(void*)serializedConstantDataForFunction:(id)arg1 dataSize:(unsigned long long*)arg2 errorMessage:(id*)arg3 ;
-(const void*)constantValueWithFunctionConstant:(id)arg1 ;
@end

