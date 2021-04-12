/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCEffectsManagerDelegate <NSObject>
@property (assign) BOOL faceMeshTrackingEnabled; 
@property (assign) BOOL effectsApplied; 
@required
-(void)encodeProcessedPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_VC84)arg2 imageData:(id)arg3 processTime:(id)arg4;
-(void)setFaceMeshTrackingEnabled:(BOOL)arg1;
-(void)setEffectsApplied:(BOOL)arg1;
-(BOOL)faceMeshTrackingEnabled;
-(BOOL)effectsApplied;

@end

