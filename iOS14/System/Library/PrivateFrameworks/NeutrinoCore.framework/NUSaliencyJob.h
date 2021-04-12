/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@class VNSaliencyImageObservation, NUSaliencyRequest;

@interface NUSaliencyJob : NURenderJob {

	VNSaliencyImageObservation* _saliencyObservation;

}

@property (nonatomic,readonly) NUSaliencyRequest * saliencyRequest; 
@property (nonatomic,retain) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)result;
-(void)cleanUp;
-(VNSaliencyImageObservation *)saliencyObservation;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithSaliencyRequest:(id)arg1 ;
-(NUSaliencyRequest *)saliencyRequest;
-(id)saliencyObservationForImage:(id)arg1 error:(out id*)arg2 ;
-(void)setSaliencyObservation:(VNSaliencyImageObservation *)arg1 ;
@end

