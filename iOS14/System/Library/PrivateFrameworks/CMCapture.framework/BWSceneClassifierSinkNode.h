/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@protocol OS_dispatch_queue, BWQRCodeSceneObserver;
@class BWInferenceResult, NSObject, BWFigVideoCaptureDevice, NSArray, NSString;

@interface BWSceneClassifierSinkNode : BWSinkNode {

	SCD_Struct_BW57 _expectedVersion;
	os_unfair_lock_s _resultLock;
	BWInferenceResult* _mostRecentSmartCameraResult;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	BWFigVideoCaptureDevice* _device;
	id<BWQRCodeSceneObserver> _qrCodeSceneObserver;
	int _maxDebugOverlaySceneCount;

}

@property (assign,nonatomic) id<BWQRCodeSceneObserver> qrCodeSceneObserver;              //@synthesize qrCodeSceneObserver=_qrCodeSceneObserver - In the implementation block
@property (readonly) NSArray * sceneConfidences; 
@property (readonly) NSString * brightStageSceneConfidence; 
@property (readonly) NSString * sunsetSunriseSceneConfidence; 
@property (readonly) NSString * petSceneConfidence; 
@property (readonly) NSString * babySceneConfidence; 
@property (readonly) NSString * qrSceneConfidence; 
@property (readonly) NSString * documentSceneConfidence; 
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(id)_stringRepresentationOfMostRecentInferenceForKey:(id)arg1 ;
-(id)initWithCaptureDevice:(id)arg1 version:(SCD_Struct_BW57)arg2 sinkID:(id)arg3 ;
-(NSArray *)sceneConfidences;
-(NSString *)brightStageSceneConfidence;
-(NSString *)sunsetSunriseSceneConfidence;
-(NSString *)petSceneConfidence;
-(NSString *)babySceneConfidence;
-(NSString *)qrSceneConfidence;
-(NSString *)documentSceneConfidence;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(void)setQrCodeSceneObserver:(id<BWQRCodeSceneObserver>)arg1 ;
-(void)dealloc;
@end

