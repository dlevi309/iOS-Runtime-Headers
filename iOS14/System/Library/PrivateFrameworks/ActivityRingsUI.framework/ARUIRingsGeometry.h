/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)vertexCount;
-(id)init;
-(unsigned)indexCount;
-(void)setCircleSegments:(unsigned)arg1 ;
-(void)enumerateVertexGeometryWithBlock:(/*^block*/id)arg1 ;
-(unsigned short*)connectedIndiciesGeometry;
-(unsigned)circleSegments;
-(float)endingRadian;
-(float)startingRadian;
-(unsigned)disconnectedIndexCount;
-(unsigned short*)disconnectedIndiciesGeometry;
-(void)setStartingRadian:(float)arg1 ;
-(void)setEndingRadian:(float)arg1 ;
@end

