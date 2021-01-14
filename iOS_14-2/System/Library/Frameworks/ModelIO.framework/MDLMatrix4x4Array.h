/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MDLMatrix4x4Array : NSObject <NSCopying> {

	VtValue* _data;
	unsigned long long _elementCount;

}

@property (nonatomic,readonly) unsigned long long elementCount;              //@synthesize elementCount=_elementCount - In the implementation block
@property (nonatomic,readonly) unsigned long long precision; 
-(unsigned long long)precision;
-(void)clear;
-(unsigned long long)elementCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithElementCount:(unsigned long long)arg1 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 time:(double)arg2 ;
-(VtValue*)defaultVtValue;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 ;
-(void)setFloat4x4Array:(const SCD_Struct_MD1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble4x4Array:(const SCD_Struct_MD1*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getFloat4x4Array:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble4x4Array:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
@end

