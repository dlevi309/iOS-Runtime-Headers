/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class PMLDenseVector;

@interface PMLDenseMatrix : NSObject {

	PMLDenseVector* _data;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfColumns;

}

@property (nonatomic,readonly) unsigned long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
+(id)denseMatrixFromData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3 ;
+(id)denseMatrixFromNumbers:(id)arg1 ;
-(const float*)values;
-(unsigned long long)numberOfRows;
-(unsigned long long)numberOfColumns;
-(void)enumerateNonZeroValuesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3 ;
@end

