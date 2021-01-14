/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@protocol MTLCommandQueue, MTLTexture, MTLCommandBuffer;
#import <CoreImage/CoreImage-Structs.h>
@class CIContext, NSArray, CIRenderDestination, CIImage, NSDictionary, CIDualRedEyeRepairTuning, NSDate;

@interface CIDualRedEyeRepairSession : NSObject {

	CVBufferRef _primary;
	CVBufferRef _secondary;
	CVBufferRef _output;
	CIContext* context;
	NSArray* observations;
	CIRenderDestination* destination;
	CIImage* primaryImage;
	CIImage* secondaryImage;
	NSDictionary* metadata;
	NSDictionary* imageProperties;
	NSArray* faces;
	CIDualRedEyeRepairTuning* tuning;
	NSDate* timestamp;
	NSDictionary* tuningParametersByPortType;
	id<MTLCommandQueue> commandQueue;
	id<MTLTexture> primaryTexture;
	id<MTLTexture> secondaryTexture;
	id<MTLTexture> outputTexture;
	id<MTLCommandBuffer> commandBuffer;

}

@property (nonatomic,retain) NSArray * observations; 
@property (nonatomic,retain) CIRenderDestination * destination; 
@property (nonatomic,retain) CIImage * primaryImage; 
@property (nonatomic,retain) CIImage * secondaryImage; 
@property (nonatomic,retain) NSDictionary * metadata; 
@property (nonatomic,retain) NSDictionary * imageProperties; 
@property (nonatomic,retain) NSArray * faces; 
@property (nonatomic,retain) CIDualRedEyeRepairTuning * tuning; 
@property (nonatomic,retain) NSDate * timestamp; 
@property (nonatomic,retain) NSDictionary * tuningParametersByPortType; 
@property (nonatomic,retain) id<MTLCommandBuffer> commandBuffer; 
@property (nonatomic,retain) CIContext * context; 
@property (nonatomic,retain) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,retain) id<MTLTexture> primaryTexture; 
@property (nonatomic,retain) id<MTLTexture> secondaryTexture; 
@property (nonatomic,retain) id<MTLTexture> outputTexture; 
+(id)_contextRGBAh;
-(BOOL)prewarm;
-(NSArray *)faces;
-(void)setDestination:(CIRenderDestination *)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(id)init;
-(void)cleanupState;
-(CIDualRedEyeRepairTuning *)tuning;
-(NSDate *)timestamp;
-(CIContext *)context;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)setFaces:(NSArray *)arg1 ;
-(void)setTuning:(CIDualRedEyeRepairTuning *)arg1 ;
-(void)setObservations:(NSArray *)arg1 ;
-(void)setPrimaryImage:(CIImage *)arg1 ;
-(void)setSecondaryImage:(CIImage *)arg1 ;
-(void)setImageProperties:(NSDictionary *)arg1 ;
-(void)customizeRepairFilter:(id)arg1 forFace:(id)arg2 ;
-(void)setTuningParametersByPortType:(NSDictionary *)arg1 ;
-(BOOL)prepareRepair;
-(id<MTLTexture>)primaryTexture;
-(id<MTLTexture>)secondaryTexture;
-(id<MTLTexture>)outputTexture;
-(CIImage *)primaryImage;
-(BOOL)renderUsingPixelBuffers;
-(BOOL)renderUsingProvidedCommandQueue;
-(BOOL)validateRenderState;
-(NSArray *)observations;
-(NSDictionary *)tuningParametersByPortType;
-(void)dumpInputs;
-(void)dumpSecondary;
-(int)validateSetPrimary;
-(void)dumpObservation:(id)arg1 index:(int)arg2 ;
-(id)redEyeFaceFromObservation:(id)arg1 exifOrientation:(int)arg2 ;
-(BOOL)_repairPrimaryWithSecondary:(CVBufferRef)arg1 to:(CVBufferRef)arg2 ;
-(int)validateRepair;
-(CIImage *)secondaryImage;
-(BOOL)repairFace:(id)arg1 filter:(id)arg2 ;
-(BOOL)prepareRepairWithTuningParametersByPortType:(id)arg1 ;
-(void)setPrimaryTexture:(id<MTLTexture>)arg1 ;
-(BOOL)setPrimary:(CVBufferRef)arg1 observations:(id)arg2 metadata:(id)arg3 ;
-(BOOL)repairPrimaryWithSecondary:(CVBufferRef)arg1 ;
-(void)setSecondaryTexture:(id<MTLTexture>)arg1 ;
-(void)setOutputTexture:(id<MTLTexture>)arg1 ;
-(NSDictionary *)metadata;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(CIRenderDestination *)destination;
-(void)dealloc;
-(NSDictionary *)imageProperties;
-(void)setContext:(CIContext *)arg1 ;
@end

