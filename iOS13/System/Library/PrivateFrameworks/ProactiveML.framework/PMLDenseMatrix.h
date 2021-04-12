/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(void)enumerateNonZeroValuesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3 ;
@end

