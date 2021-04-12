/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNTargetedImageRequest.h>

@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest {

	VNImageBuffer* _cachedFloatingImageBuffer;
	VNImageRegistrationSignature* _cachedFloatingImageSignature;

}
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)cachedFloatingImageBufferReturningError:(id*)arg1 ;
-(id)cachedFloatingImageRegistrationSignatureReturningError:(id*)arg1 ;
-(BOOL)getReferenceImageBuffer:(id*)arg1 registrationSignature:(id*)arg2 forRequestPerformingContext:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
@end

