/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLArgumentDescriptor.h>

@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor {

	MTLArgumentDescriptorPrivate _private;

}
+(id)indirectArgumentDescriptor;
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(unsigned long long)index;
-(unsigned long long)arrayLength;
-(unsigned long long)access;
-(id)init;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setDataType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)constantBlockAlignment;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setAccess:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConstantBlockAlignment:(unsigned long long)arg1 ;
@end

