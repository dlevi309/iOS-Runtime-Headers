/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/AVAssetWriterDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class AVAssetWriter, AVAssetWriterInput, NSMutableData, HMFActivity, NSString;

@interface HMICameraVideoEncoderSession : HMFObject <AVAssetWriterDelegate, HMFLogging> {

	OpaqueVTCompressionSessionRef _session;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _assetWriterInput;
	NSMutableData* _encodedAssetData;
	HMFActivity* _activity;

}

@property (readonly) OpaqueVTCompressionSessionRef session;              //@synthesize session=_session - In the implementation block
@property (readonly) AVAssetWriter * assetWriter;                        //@synthesize assetWriter=_assetWriter - In the implementation block
@property (readonly) AVAssetWriterInput * assetWriterInput;              //@synthesize assetWriterInput=_assetWriterInput - In the implementation block
@property (readonly) NSMutableData * encodedAssetData;                   //@synthesize encodedAssetData=_encodedAssetData - In the implementation block
@property (readonly) HMFActivity * activity;                             //@synthesize activity=_activity - In the implementation block
@property (assign) int bitRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)invalidate;
-(HMFActivity *)activity;
-(OpaqueVTCompressionSessionRef)session;
-(BOOL)isReadyForMoreMediaData;
-(void)assetWriter:(id)arg1 didProduceFragmentedHeaderData:(id)arg2 ;
-(void)assetWriter:(id)arg1 didProduceFragmentedMediaData:(id)arg2 fragmentedMediaDataReport:(id)arg3 ;
-(AVAssetWriterInput *)assetWriterInput;
-(int)bitRate;
-(void)setBitRate:(int)arg1 ;
-(AVAssetWriter *)assetWriter;
-(NSMutableData *)encodedAssetData;
-(id)initWithWidth:(int)arg1 height:(int)arg2 codecType:(unsigned)arg3 realTime:(BOOL)arg4 error:(id*)arg5 ;
-(void)startEncoding;
-(BOOL)encodePixelBuffer:(CVBufferRef)arg1 presentationTime:(SCD_Struct_HM3)arg2 ;
-(void)finishEncodingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

