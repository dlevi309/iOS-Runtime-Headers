/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(unsigned long long)precision;
-(unsigned long long)elementCount;
-(id)initWithElementCount:(unsigned long long)arg1 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 time:(double)arg2 ;
-(VtValue*)defaultVtValue;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 ;
-(void)setFloat4x4Array:(const SCD_Struct_MD1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble4x4Array:(const SCD_Struct_MD1*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getFloat4x4Array:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble4x4Array:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
@end

