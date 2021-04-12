/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@interface VNError : NSObject
+(id)errorWithCode:(long long)arg1 message:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(id)errorForCancellationOfRequest:(id)arg1 ;
+(id)errorForMemoryAllocationFailure;
+(id)errorForInvalidOption:(id)arg1 named:(id)arg2 ;
+(id)errorForMemoryAllocationFailureWithLocalizedDescription:(id)arg1 ;
+(id)errorForInternalErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForInternalErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2 ;
+(id)errorForInvalidFormatErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForUnimplementedFunctionWithLocalizedDescription:(id)arg1 ;
+(id)errorForUnimplementedMethod:(SEL)arg1 ofObject:(id)arg2 ;
+(id)errorForMissingOptionNamed:(id)arg1 ;
+(id)errorForOutOfBoundsErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForInvalidOperationWithLocalizedDescription:(id)arg1 ;
+(id)errorForInvalidOperationForRequestClass:(Class)arg1 revision:(unsigned long long)arg2 ;
+(id)errorForInvalidOption:(id)arg1 named:(id)arg2 localizedDescription:(id)arg3 ;
+(id)errorForInvalidOptionWithLocalizedDescription:(id)arg1 ;
+(id)errorForInvalidArgumentWithLocalizedDescription:(id)arg1 ;
+(id)errorForInvalidArgument:(id)arg1 named:(id)arg2 ;
+(void)logInternalError:(id)arg1 ;
+(id)errorForInvalidModelWithLocalizedDescription:(id)arg1 ;
+(id)errorForInvalidModelWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2 ;
+(id)errorForOperationFailedErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForUnknownErrorErrorWithLocalizedDescription:(id)arg1 ;
+(id)errorForGPURequiredByRequest:(id)arg1 ;
+(id)errorForUnsupportedProcessingDevice:(id)arg1 ;
+(id)errorForUnsupportedConfigurationOfRequest:(id)arg1 ;
+(void)VNAssert:(BOOL)arg1 log:(id)arg2 ;
+(id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequest:(id)arg2 ;
+(id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequestClass:(Class)arg2 ;
+(id)errorForUnsupportedPrivateRevision:(unsigned long long)arg1 ofRequest:(id)arg2 ;
+(id)errorForUnsupportedPrivateRevision:(unsigned long long)arg1 ofRequestClass:(Class)arg2 ;
+(id)errorForDataUnavailableWithLocalizedDescription:(id)arg1 ;
+(id)errorForUnavailableSession;
+(id)errorForEspressoReturnStatus:(int)arg1 localizedDescription:(id)arg2 ;
+(id)errorForOSStatus:(int)arg1 localizedDescription:(id)arg2 ;
+(id)errorForCVReturnCode:(int)arg1 localizedDescription:(id)arg2 ;
@end

