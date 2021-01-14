/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/AXHAListenEngineDelegate.h>
#import <libobjc.A.dylib/AXHADetectorManagerDelegate.h>
#import <libobjc.A.dylib/AXHAUltronModelAssetManagerDelegate.h>

@class AXHAListenEngine, AXHADetectorManager, AXUltronModelAssetManager, NSMutableSet, NSSet, NSString;

@interface AXHASoundDetectionController : NSObject <AXHAListenEngineDelegate, AXHADetectorManagerDelegate, AXHAUltronModelAssetManagerDelegate> {

	AXHAListenEngine* _listener;
	AXHADetectorManager* _detectorManager;
	AXUltronModelAssetManager* _assetManager;
	NSMutableSet* _detectorQueue;
	BOOL _ready;

}

@property (readonly) NSSet * currentDetectionTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)startListening;
-(void)stopListening;
-(id)init;
-(void)assetsReadyForUltronManager:(id)arg1 ;
-(void)assetsNotReadyForUltronManager:(id)arg1 ;
-(void)assets:(id)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(BOOL)arg5 ;
-(void)_queueListenType:(id)arg1 ;
-(void)_dequeueListenType:(id)arg1 ;
-(NSSet *)currentDetectionTypes;
-(void)removeAllListenTypes;
-(void)receivedBuffer:(id)arg1 atTime:(id)arg2 ;
-(void)listenEngineDidStartWithInputFormat:(id)arg1 ;
-(void)listenEngineFailedToStartWithError:(id)arg1 ;
-(void)receivedObservation:(id)arg1 forDetector:(id)arg2 ;
-(void)receivedCompletion:(id)arg1 ;
-(void)receivedError:(id)arg1 fromDetector:(id)arg2 ;
-(void)addListenType:(id)arg1 ;
-(void)removeListenType:(id)arg1 ;
@end

