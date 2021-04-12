/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLArgumentDescriptor.h>

@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor {

	MTLArgumentDescriptorPrivate _private;

}
+(id)indirectArgumentDescriptor;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
-(unsigned long long)textureType;
-(unsigned long long)access;
-(unsigned long long)dataType;
-(unsigned long long)arrayLength;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setDataType:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setAccess:(unsigned long long)arg1 ;
-(unsigned long long)constantBlockAlignment;
-(void)setConstantBlockAlignment:(unsigned long long)arg1 ;
@end

