/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)maxX;
-(float)confidence;
-(float)minX;
-(float)minY;
-(float)maxY;
-(id)initWithXYAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5 ;
-(id)initWithCenterAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5 ;
-(id)union:(id)arg1 ;
-(float)area;
-(void)setMaxX:(float)arg1 ;
-(float)computeIntersectionOverUnion:(id)arg1 ;
-(CGRect)getCGRectWithClipWidth:(float)arg1 height:(float)arg2 ;
-(void)setMinX:(float)arg1 ;
-(void)setMinY:(float)arg1 ;
-(void)setMaxY:(float)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(float)flag;
-(id)intersect:(id)arg1 ;
-(void)setFlag:(float)arg1 ;
@end

