/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSArray;

@interface MPSGraphVariable : NSObject <NSCopying> {

	NSData* _data;
	NSMutableArray* _mpsndarrays;
	Value _value;
	unsigned _dataType;
	NSArray* _shape;

}

@property (nonatomic,copy,readonly) NSArray * shape;              //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) Value value;                       //@synthesize value=_value - In the implementation block
+(id)newVariableWithData:(id)arg1 shape:(id)arg2 ;
-(unsigned)dataType;
-(NSArray *)shape;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Value)value;
-(id)mpsNDArrayWithDevice:(id)arg1 ;
-(id)initVariableWithData:(id)arg1 value:(Value)arg2 ;
-(id)initVariableWithData:(id)arg1 shape:(id)arg2 ;
-(id)initVariableWithMPSNDArray:(id)arg1 value:(Value)arg2 ;
@end

