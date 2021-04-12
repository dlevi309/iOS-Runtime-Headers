/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
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

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(CGRect)rectOfInterest;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_setupSampleBufferProcessor;
-(id)_newSymbologiesArrayFromIdentifiers:(id)arg1 ;
-(void)_teardownSampleBufferProcessor;
-(BOOL)_shouldEmitSBufForBarcodeCount:(long long)arg1 ;
-(void)sceneConfidenceDidChangeForQR:(float)arg1 document:(float)arg2 ;
-(id)initUsingSceneClassifierQRCodeDetectionVersion:(SCD_Struct_BW94)arg1 ;
-(void)setMrcIdentifiers:(id)arg1 ;
-(id)mrcIdentifiers;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(BOOL)lowPowerModeEnabled;
@end

