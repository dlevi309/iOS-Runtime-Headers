/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <NeutrinoCore/NURenderJob.h>

@class PIReframeResult, PIStillReframeRequest;

@interface PIStillReframeJob : NURenderJob {

	PIReframeResult* _reframeResult;

}

@property (nonatomic,readonly) PIStillReframeRequest * stillReframeRequest; 
@property (nonatomic,retain) PIReframeResult * reframeResult;                            //@synthesize reframeResult=_reframeResult - In the implementation block
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithStillReframeRequest:(id)arg1 ;
-(PIStillReframeRequest *)stillReframeRequest;
-(PIReframeResult *)reframeResult;
-(void)setReframeResult:(PIReframeResult *)arg1 ;
@end

