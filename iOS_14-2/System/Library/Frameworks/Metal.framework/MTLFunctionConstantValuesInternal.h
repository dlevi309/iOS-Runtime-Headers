/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLFunctionConstantValues.h>
#import <libobjc.A.dylib/MTLFunctionConstantSPI.h>

@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI> {

	MTLConstantStorage* _constantStorage;

}
-(void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setConstantValues:(const void*)arg1 type:(unsigned long long)arg2 withRange:(NSRange)arg3 ;
-(id)init;
-(id)description;
-(void*)serializedConstantDataForFunction:(id)arg1 dataSize:(unsigned long long*)arg2 errorMessage:(id*)arg3 ;
-(const void*)constantValueWithFunctionConstant:(id)arg1 ;
-(id)newIndexedConstantArray;
-(void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 withName:(id)arg3 ;
-(unsigned long long)hash;
-(id)newNamedConstantArray;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

