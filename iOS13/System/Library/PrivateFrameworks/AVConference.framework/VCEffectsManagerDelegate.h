/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCEffectsManagerDelegate <NSObject>
@property (assign) BOOL faceMeshTrackingEnabled; 
@property (assign) BOOL effectsApplied; 
@required
-(void)setFaceMeshTrackingEnabled:(BOOL)arg1;
-(void)setEffectsApplied:(BOOL)arg1;
-(void)encodeProcessedPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_AV77)arg2 imageData:(id)arg3 processTime:(id)arg4;
-(BOOL)faceMeshTrackingEnabled;
-(BOOL)effectsApplied;

@end

