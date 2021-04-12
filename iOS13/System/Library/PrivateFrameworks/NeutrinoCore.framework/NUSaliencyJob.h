/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@class VNSaliencyImageObservation, NUSaliencyRequest;

@interface NUSaliencyJob : NURenderJob {

	VNSaliencyImageObservation* _saliencyObservation;

}

@property (nonatomic,readonly) NUSaliencyRequest * saliencyRequest; 
@property (nonatomic,retain) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
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

