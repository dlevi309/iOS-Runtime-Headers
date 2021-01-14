/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWQRCodeSceneObserver.h>

@class NSArray, NSDictionary, NSString;

@interface BWMRCNode : BWNode <BWQRCodeSceneObserver> {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSArray* _symbologiesArray;
	NSArray* _mrcIdentifiers;
	long long _lastMRCCount;
	CGRect _rectOfInterest;
	os_unfair_lock_s _rectOfInterestLock;
	BOOL _hasPendingRectOfInterestUpdate;
	BOOL _lowPowerModeEnabled;
	BOOL _usesSceneClassifierToGateQRCodeDetection;
	BOOL _sceneLikelyToHaveQRCodes;
	os_unfair_lock_s _sceneLock;
	BWSmartCameraScene _qrCodeScene;
	BWSmartCameraScene _documentScene;
	NSDictionary* _metadataIdentifierToSymbologyDictionary;
	OpaqueVTPixelTransferSessionRef _transferSession;
	CVBufferRef _internalBufferForBarcodeScanner;
	opaqueCMFormatDescriptionRef _internalBufferForBarcodeScannerFormatDescription;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(int)_setupSampleBufferProcessor;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(id)nodeSubType;
-(BOOL)_shouldEmitSBufForBarcodeCount:(long long)arg1 ;
-(id)init;
-(id)mrcIdentifiers;
-(id)_newSymbologiesArrayFromIdentifiers:(id)arg1 ;
-(void)sceneConfidenceDidChangeForQR:(float)arg1 document:(float)arg2 ;
-(void)_teardownSampleBufferProcessor;
-(void)_updateInputRequirements;
-(BOOL)lowPowerModeEnabled;
-(id)_pixelFormatsSupportedByBarcodeScanner;
-(id)initUsingSceneClassifierQRCodeDetectionVersion:(SCD_Struct_BW57)arg1 ;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(CGRect)rectOfInterest;
-(void)dealloc;
-(void)setMrcIdentifiers:(id)arg1 ;
@end

