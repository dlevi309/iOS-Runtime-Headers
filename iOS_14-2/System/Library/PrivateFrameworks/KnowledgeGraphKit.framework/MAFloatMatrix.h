/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
@class _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper;

@interface MAFloatMatrix : NSObject {

	_TtC17KnowledgeGraphKit20MAFloatMatrixWrapper* _wrapper;

}

@property (nonatomic,readonly) _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper * wrapper;              //@synthesize wrapper=_wrapper - In the implementation block
@property (nonatomic,readonly) long long rows; 
@property (nonatomic,readonly) long long columns; 
@property (nonatomic,readonly) long long count; 
+(Class)wrapperClass;
-(float)sum;
-(long long)columns;
-(float)mean;
-(id)init;
-(id)row:(long long)arg1 ;
-(id)array;
-(long long)rows;
-(long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(id)data;
-(unsigned long long)hash;
-(_TtC17KnowledgeGraphKit20MAFloatMatrixWrapper *)wrapper;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)initWithWrapper:(id)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2 ;
-(float)sumOfSquares;
-(id)initWithFloats:(const float*)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
-(float)floatAtRow:(long long)arg1 column:(long long)arg2 ;
-(id)matrixBySubtractingMatrix:(id)arg1 ;
-(id)matrixBySubtractingScalar:(float)arg1 ;
-(id)matrixByAddingScalar:(float)arg1 ;
-(id)sumAlongAxis:(unsigned long long)arg1 ;
-(id)meanAlongAxis:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
-(id)matrixByAppendingRow:(id)arg1 ;
@end

