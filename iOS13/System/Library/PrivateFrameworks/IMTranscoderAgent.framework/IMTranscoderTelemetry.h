/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
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

