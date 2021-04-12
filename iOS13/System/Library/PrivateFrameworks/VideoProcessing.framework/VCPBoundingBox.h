/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPBoundingBox : NSObject {

	float _minX;
	float _maxX;
	float _minY;
	float _maxY;
	float _confidence;
	float _flag;

}

@property (assign) float minX;                    //@synthesize minX=_minX - In the implementation block
@property (assign) float maxX;                    //@synthesize maxX=_maxX - In the implementation block
@property (assign) float minY;                    //@synthesize minY=_minY - In the implementation block
@property (assign) float maxY;                    //@synthesize maxY=_maxY - In the implementation block
@property (assign) float confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (assign) float flag;                    //@synthesize flag=_flag - In the implementation block
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(void)setFlag:(float)arg1 ;
-(void)setMaxX:(float)arg1 ;
-(float)maxX;
-(float)area;
-(float)minX;
-(void)setMinX:(float)arg1 ;
-(float)minY;
-(void)setMinY:(float)arg1 ;
-(float)maxY;
-(void)setMaxY:(float)arg1 ;
-(float)flag;
-(id)initWithXYAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5 ;
-(id)intersect:(id)arg1 ;
-(id)union:(id)arg1 ;
-(id)initWithCenterAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5 ;
-(float)computeIntersectionOverUnion:(id)arg1 ;
-(CGRect)getCGRectWithClipWidth:(float)arg1 height:(float)arg2 ;
@end

