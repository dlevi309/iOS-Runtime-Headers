/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMTranscoderTelemetry : NSObject {

	unsigned char _signpostId;

}
-(id)init;
-(long long)_telemetryImageTypeForUTI:(id)arg1 ;
-(void)_emitSignpostTranscodeRange:(long long)arg1 begin:(BOOL)arg2 ;
-(void)_emitSignpostPreviewGenerationRange:(long long)arg1 begin:(BOOL)arg2 ;
-(void)emitTranscodeBeginFromUTI:(id)arg1 ;
-(void)emitTranscodeEndFromUTI:(id)arg1 ;
-(void)emitPreviewGenerationBeginFromUTI:(id)arg1 ;
-(void)emitPreviewGenerationEndFromUTI:(id)arg1 ;
-(void)emitSignpostNoTranscodeFromUTI:(id)arg1 ;
-(void)emitSignpostTranscodeStepForDestinationUTI:(id)arg1 ;
-(void)emitSignpostTranscodeFinalForDestinationUTI:(id)arg1 ;
-(void)emitSignpostTranscodeSkipSourceUTI:(id)arg1 ;
@end

