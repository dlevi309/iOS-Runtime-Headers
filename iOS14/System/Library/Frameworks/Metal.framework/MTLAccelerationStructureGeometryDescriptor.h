/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying> {

	BOOL _opaque;
	BOOL _allowDuplicateIntersectionFunctionInvocation;
	unsigned long long _intersectionFunctionTableOffset;

}

@property (assign,nonatomic) unsigned long long intersectionFunctionTableOffset;              //@synthesize intersectionFunctionTableOffset=_intersectionFunctionTableOffset - In the implementation block
@property (assign,nonatomic) BOOL opaque;                                                     //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation;               //@synthesize allowDuplicateIntersectionFunctionInvocation=_allowDuplicateIntersectionFunctionInvocation - In the implementation block
-(BOOL)opaque;
-(void)setOpaque:(BOOL)arg1 ;
-(id)init;
-(unsigned long long)intersectionFunctionTableOffset;
-(BOOL)allowDuplicateIntersectionFunctionInvocation;
-(unsigned long long)hash;
-(void)setIntersectionFunctionTableOffset:(unsigned long long)arg1 ;
-(void)setAllowDuplicateIntersectionFunctionInvocation:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

