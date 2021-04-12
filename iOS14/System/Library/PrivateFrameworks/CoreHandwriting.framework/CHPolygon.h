/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(CGPoint*)_createClippedPolygonForPolygon:(id)arg1 clippingLine:(CHLineSegment)arg2 clippedPolygonVertexCount:(long long*)arg3 ;
-(long long)vertexCount;
-(double)area;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(void)setArea:(double)arg1 ;
-(id)initWithRect:(CGRect)arg1 ;
-(id)initWithVertices:(CGPoint*)arg1 vertexCount:(long long)arg2 ;
-(CGPoint*)vertices;
-(void)dealloc;
-(id)polygonByIntersectingWithClipPolygon:(id)arg1 ;
-(long long)edgeCountIntersectingLineSegment:(CHLineSegment)arg1 ;
-(id)polygonDrawing;
@end

