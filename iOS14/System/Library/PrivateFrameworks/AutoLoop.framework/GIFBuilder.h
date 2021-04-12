/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)finish;
-(CIContext *)ciCtx;
-(double)maxRes;
-(BOOL)addImage:(id)arg1 ;
-(CGImageDestinationRef)imgDest;
-(void)dealloc;
-(id)initWithContext:(id)arg1 forURL:(id)arg2 maxRes:(unsigned long long)arg3 fps:(float)arg4 ;
-(void)setCiCtx:(CIContext *)arg1 ;
-(NSDictionary *)frameProperties;
-(void)setFrameProperties:(NSDictionary *)arg1 ;
-(void)setImgDest:(CGImageDestinationRef)arg1 ;
-(void)setMaxRes:(double)arg1 ;
@end

