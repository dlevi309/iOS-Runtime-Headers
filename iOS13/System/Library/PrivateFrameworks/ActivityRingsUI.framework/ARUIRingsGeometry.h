/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@interface ARUIRingsGeometry : NSObject {

	unsigned _circleSegments;
	float _startingRadian;
	float _endingRadian;

}

@property (assign,nonatomic) unsigned circleSegments;              //@synthesize circleSegments=_circleSegments - In the implementation block
@property (assign,nonatomic) float startingRadian;                 //@synthesize startingRadian=_startingRadian - In the implementation block
@property (assign,nonatomic) float endingRadian;                   //@synthesize endingRadian=_endingRadian - In the implementation block
-(id)init;
-(unsigned)vertexCount;
-(unsigned)indexCount;
-(unsigned)circleSegments;
-(float)endingRadian;
-(float)startingRadian;
-(void)enumerateVertexGeometryWithBlock:(/*^block*/id)arg1 ;
-(unsigned short*)connectedIndiciesGeometry;
-(unsigned)disconnectedIndexCount;
-(unsigned short*)disconnectedIndiciesGeometry;
-(void)setCircleSegments:(unsigned)arg1 ;
-(void)setStartingRadian:(float)arg1 ;
-(void)setEndingRadian:(float)arg1 ;
@end

