/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


@interface MPSMatrixDescriptor : NSObject {

	unsigned long long _rows;
	unsigned long long _columns;
	unsigned long long _matrices;
	unsigned long long _rowBytes;
	unsigned long long _matrixBytes;
	unsigned _dataType;

}

@property (assign,nonatomic) unsigned long long rows;                       //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) unsigned long long columns;                    //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) unsigned long long matrices;                 //@synthesize matrices=_matrices - In the implementation block
@property (assign,nonatomic) unsigned dataType;                             //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) unsigned long long rowBytes;                   //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long matrixBytes;              //@synthesize matrixBytes=_matrixBytes - In the implementation block
+(id)matrixDescriptorWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 dataType:(unsigned)arg4 ;
+(unsigned long long)rowBytesForColumns:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
+(unsigned long long)rowBytesFromColumns:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
+(id)matrixDescriptorWithDimensions:(unsigned long long)arg1 columns:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 dataType:(unsigned)arg4 ;
+(id)matrixDescriptorWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 matrices:(unsigned long long)arg3 rowBytes:(unsigned long long)arg4 matrixBytes:(unsigned long long)arg5 dataType:(unsigned)arg6 ;
-(id)init;
-(unsigned)dataType;
-(unsigned long long)rows;
-(void)setRows:(unsigned long long)arg1 ;
-(unsigned long long)columns;
-(void)setColumns:(unsigned long long)arg1 ;
-(unsigned long long)rowBytes;
-(void)setDataType:(unsigned)arg1 ;
-(void)setRowBytes:(unsigned long long)arg1 ;
-(unsigned long long)matrices;
-(unsigned long long)matrixBytes;
@end

