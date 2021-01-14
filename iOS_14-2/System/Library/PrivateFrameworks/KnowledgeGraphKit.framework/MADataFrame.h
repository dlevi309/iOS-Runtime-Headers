/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSString, MAIndexCache, MAFloatMatrix, NSArray;

@interface MADataFrame : NSObject {

	NSString* _name;
	MAIndexCache* _rowIndexCache;
	MAIndexCache* _columnIndexCache;
	MAFloatMatrix* _matrix;

}

@property (nonatomic,readonly) MAIndexCache * rowIndexCache;                 //@synthesize rowIndexCache=_rowIndexCache - In the implementation block
@property (nonatomic,readonly) MAIndexCache * columnIndexCache;              //@synthesize columnIndexCache=_columnIndexCache - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rowLabels; 
@property (nonatomic,copy,readonly) NSArray * columnLabels; 
@property (nonatomic,copy,readonly) MAFloatMatrix * matrix;                  //@synthesize matrix=_matrix - In the implementation block
-(MAFloatMatrix *)matrix;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)rowLabels;
-(id)initWithName:(id)arg1 rowIndexCache:(id)arg2 columnIndexCache:(id)arg3 matrix:(id)arg4 ;
-(id)initWithName:(id)arg1 rowLabels:(id)arg2 columnLabels:(id)arg3 matrix:(id)arg4 ;
-(NSArray *)columnLabels;
-(long long)indexOfRowWithLabel:(id)arg1 ;
-(long long)indexOfColumnWithLabel:(id)arg1 ;
-(float)floatAtRowIndex:(long long)arg1 columnIndex:(long long)arg2 ;
-(id)numberAtRow:(id)arg1 column:(id)arg2 ;
-(id)csvString;
-(MAIndexCache *)rowIndexCache;
-(MAIndexCache *)columnIndexCache;
@end

