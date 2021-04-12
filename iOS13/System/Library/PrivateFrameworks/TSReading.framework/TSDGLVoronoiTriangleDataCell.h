/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDGLVoronoiTriangleDataCell : NSObject {

	unsigned long long _triangleCount;
	unsigned long long _vertexCount;
	SCD_Struct_TS77* _vertexData;
	SCD_Struct_TS78 _centerPoint;
	CGRect _bounds;

}

@property (nonatomic,readonly) unsigned long long triangleCount;              //@synthesize triangleCount=_triangleCount - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS78* vertexData;                   //@synthesize vertexData=_vertexData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS78 centerPoint;                   //@synthesize centerPoint=_centerPoint - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
-(void)dealloc;
-(SCD_Struct_TS78)centerPoint;
-(CGRect)bounds;
-(unsigned long long)vertexCount;
-(unsigned long long)triangleCount;
-(id)initWithTrianglePoints:(SCD_Struct_TS78*)arg1 ;
-(void)p_setupTriangleDataWithEdges:(vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > >*)arg1 ;
-(id)cellsBySplittingCellIntoTriangles;
-(id)initWithEdges:(vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > >*)arg1 ;
-(SCD_Struct_TS78*)vertexData;
@end

