/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@interface CHPolygon : NSObject {

	double _area;
	long long _vertexCount;
	CGPoint* _vertices;

}

@property (assign,nonatomic) double area;                          //@synthesize area=_area - In the implementation block
@property (nonatomic,readonly) long long vertexCount;              //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) CGPoint* vertices;                  //@synthesize vertices=_vertices - In the implementation block
+(id)_sutherlandHodgmanClipForSubjectPolygon:(id)arg1 usingClipPolygon:(id)arg2 ;
+(CGPoint*)_clipForPolygon:(id)arg1 clippingEdge:(CHPolygonEdge)arg2 clippedPolygonVertexCount:(long long*)arg3 ;
+(CGPoint)_intersectionPointWithClippingEdge:(CHPolygonEdge)arg1 withPolygonEdge:(CHPolygonEdge)arg2 ;
-(id)description;
-(CGPoint*)vertices;
-(double)area;
-(void)setArea:(double)arg1 ;
-(long long)vertexCount;
-(id)initWithVertices:(CGPoint*)arg1 vertexCount:(long long)arg2 ;
-(id)polygonDrawing;
-(id)polygonByIntersectingWithClipPolygon:(id)arg1 ;
@end

