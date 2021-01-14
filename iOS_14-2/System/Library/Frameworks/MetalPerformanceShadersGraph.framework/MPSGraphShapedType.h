/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MPSGraphShapedType : NSObject <NSCopying> {

	unsigned _dataType;
	NSArray* _shape;

}

@property (copy) NSArray * shape;                  //@synthesize shape=_shape - In the implementation block
@property (assign) unsigned dataType;              //@synthesize dataType=_dataType - In the implementation block
-(unsigned)dataType;
-(void)setShape:(NSArray *)arg1 ;
-(NSArray *)shape;
-(void)setDataType:(unsigned)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithShape:(id)arg1 dataType:(unsigned)arg2 ;
@end

