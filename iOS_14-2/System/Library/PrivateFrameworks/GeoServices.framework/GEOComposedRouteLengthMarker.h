/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOComposedRouteLengthMarker : NSObject {

	unsigned long long _pathIndex;
	unsigned long long _pointIndex;
	double _length;

}

@property (assign,nonatomic) unsigned long long pathIndex;               //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pointIndex;              //@synthesize pointIndex=_pointIndex - In the implementation block
@property (assign,nonatomic) double length;                              //@synthesize length=_length - In the implementation block
-(void)setLength:(double)arg1 ;
-(long long)compare:(id)arg1 ;
-(double)length;
-(unsigned long long)pathIndex;
-(id)description;
-(void)setPathIndex:(unsigned long long)arg1 ;
-(unsigned long long)pointIndex;
-(void)setPointIndex:(unsigned long long)arg1 ;
@end

