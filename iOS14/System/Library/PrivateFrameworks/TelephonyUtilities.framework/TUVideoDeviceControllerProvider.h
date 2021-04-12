/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/AVConferencePreviewClientDelegate.h>
#import <libobjc.A.dylib/TUVideoDeviceControllerProvider.h>
@class NSString, NSArray, VideoAttributes;


@protocol TUVideoDeviceControllerProvider <NSObject>
@property (getter=isPreviewRunning,nonatomic,readonly) BOOL previewRunning; 
@property (nonatomic,copy,readonly) NSString * localCameraUID; 
@property (nonatomic,copy,readonly) NSArray * inputDevices; 
@property (nonatomic,copy) VideoAttributes * localVideoAttributes; 
@property (assign,nonatomic,__weak) id<TUVideoDeviceControllerProviderDelegate> delegate; 
@required
-(void)endPreviewToPIPAnimation;
-(void)setCameraZoomFactor:(double)arg1;
-(id<TUVideoDeviceControllerProviderDelegate>)delegate;
-(id)localScreenAttributesForVideoAttributes:(id)arg1;
-(void)beginPIPToPreviewAnimation;
-(void)stopPreview;
-(void)pausePreview;
-(NSArray *)inputDevices;
-(void)setDelegate:(id)arg1;
-(void)setLocalVideoAttributes:(id)arg1;
-(void)beginPreviewToPIPAnimation;
-(void)setLocalScreenAttributes:(id)arg1;
-(NSString *)localCameraUID;
-(void)startPreview;
-(void)setLocalCameraWithUID:(id)arg1;
-(BOOL)isPreviewRunning;
-(id)localVideoLayer:(BOOL)arg1;
-(void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2;
-(void)rampCameraZoomFactor:(double)arg1 withRate:(double)arg2;
-(void)endPIPToPreviewAnimation;
-(VideoAttributes *)localVideoAttributes;

@end

#import <libobjc.A.dylib/TUVideoEffectsProvider.h>

@protocol TUVideoDeviceControllerProviderDelegate;
@class NSString, NSArray, VideoAttributes, TUVideoEffect, AVConferencePreview;

@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider> {

	id<TUVideoDeviceControllerProviderDelegate> _delegate;
	TUVideoEffect* _currentVideoEffect;
	AVConferencePreview* _preview;

}

@property (nonatomic,readonly) AVConferencePreview * preview;                                          //@synthesize preview=_preview - In the implementation block
@property (getter=isPreviewRunning,nonatomic,readonly) BOOL previewRunning; 
@property (nonatomic,copy,readonly) NSString * localCameraUID; 
@property (nonatomic,copy,readonly) NSArray * inputDevices; 
@property (nonatomic,copy) VideoAttributes * localVideoAttributes; 
@property (assign,nonatomic,__weak) id<TUVideoDeviceControllerProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TUVideoEffect * currentVideoEffect;                                       //@synthesize currentVideoEffect=_currentVideoEffect - In the implementation block
@property (nonatomic,readonly) NSArray * availableVideoEffects; 
-(void)endPreviewToPIPAnimation;
-(AVConferencePreview *)preview;
-(void)setCameraZoomFactor:(double)arg1 ;
-(void)captureDevicesChanged:(id)arg1 ;
-(id)init;
-(id<TUVideoDeviceControllerProviderDelegate>)delegate;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)beginPIPToPreviewAnimation;
-(void)stopPreview;
-(void)pausePreview;
-(NSArray *)inputDevices;
-(void)setDelegate:(id<TUVideoDeviceControllerProviderDelegate>)arg1 ;
-(void)setLocalVideoAttributes:(VideoAttributes *)arg1 ;
-(void)beginPreviewToPIPAnimation;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(NSString *)localCameraUID;
-(void)startPreview;
-(void)setLocalCameraWithUID:(id)arg1 ;
-(BOOL)isPreviewRunning;
-(id)localVideoLayer:(BOOL)arg1 ;
-(void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2 ;
-(void)setCurrentVideoEffect:(TUVideoEffect *)arg1 ;
-(TUVideoEffect *)currentVideoEffect;
-(NSArray *)availableVideoEffects;
-(id)thumbnailImageForVideoEffectName:(id)arg1 ;
-(void)rampCameraZoomFactor:(double)arg1 withRate:(double)arg2 ;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1 ;
-(void)endPIPToPreviewAnimation;
-(VideoAttributes *)localVideoAttributes;
@end

