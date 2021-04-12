/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class CIContext, NSDictionary;

@interface GIFBuilder : NSObject {

	CIContext* _ciCtx;
	NSDictionary* _frameProperties;
	CGImageDestinationRef _imgDest;
	double _maxRes;

}

@property (retain) CIContext * ciCtx;                           //@synthesize ciCtx=_ciCtx - In the implementation block
@property (retain) NSDictionary * frameProperties;              //@synthesize frameProperties=_frameProperties - In the implementation block
@property (assign) CGImageDestinationRef imgDest;               //@synthesize imgDest=_imgDest - In the implementation block
@property (assign) double maxRes;                               //@synthesize maxRes=_maxRes - In the implementation block
+(id)builderWithContext:(id)arg1 forURL:(id)arg2 maxRes:(unsigned long long)arg3 fps:(float)arg4 ;
-(void)dealloc;
-(BOOL)finish;
-(BOOL)addImage:(id)arg1 ;
-(id)initWithContext:(id)arg1 forURL:(id)arg2 maxRes:(unsigned long long)arg3 fps:(float)arg4 ;
-(CIContext *)ciCtx;
-(void)setCiCtx:(CIContext *)arg1 ;
-(NSDictionary *)frameProperties;
-(void)setFrameProperties:(NSDictionary *)arg1 ;
-(CGImageDestinationRef)imgDest;
-(void)setImgDest:(CGImageDestinationRef)arg1 ;
-(double)maxRes;
-(void)setMaxRes:(double)arg1 ;
@end

