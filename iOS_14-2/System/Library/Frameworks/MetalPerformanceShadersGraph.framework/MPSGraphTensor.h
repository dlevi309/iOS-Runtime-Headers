/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPSGraphOperation, NSArray, NSString;

@interface MPSGraphTensor : NSObject <NSCopying> {

	Value _value;
	MPSGraphOperation* _operation;
	unsigned _dataType;
	unsigned long long _index;
	NSArray* _shape;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) Value value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSArray * shape;                              //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,__weak,readonly) MPSGraphOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(unsigned)dataType;
-(NSArray *)shape;
-(unsigned long long)index;
-(MPSGraphOperation *)operation;
-(id)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Value)value;
-(id)initTensorWithOperation:(id)arg1 value:(Value)arg2 name:(id)arg3 ;
-(id)initTensorWithValue:(Value)arg1 ;
-(id)initTensorWithOperation:(id)arg1 value:(Value)arg2 ;
@end

