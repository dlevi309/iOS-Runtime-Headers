/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <NeutrinoCore/NURenderJob.h>

@class PIReframeResult, PIStillReframeRequest;

@interface PIStillReframeJob : NURenderJob {

	PIReframeResult* _reframeResult;

}

@property (nonatomic,readonly) PIStillReframeRequest * stillReframeRequest; 
@property (nonatomic,retain) PIReframeResult * reframeResult;                            //@synthesize reframeResult=_reframeResult - In the implementation block
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)result;
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

