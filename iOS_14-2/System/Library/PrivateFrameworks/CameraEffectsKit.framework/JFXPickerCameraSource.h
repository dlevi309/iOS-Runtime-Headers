/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, PVLivePlayerCameraSource;

@interface JFXPickerCameraSource : NSObject {

	NSMutableSet* _registeredPickers;
	NSObject*<OS_dispatch_queue> _registeredPickersQueue;
	PVLivePlayerCameraSource* _registeredPickersSource;

}

@property (nonatomic,retain) NSMutableSet * registeredPickers;                                 //@synthesize registeredPickers=_registeredPickers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> registeredPickersQueue;              //@synthesize registeredPickersQueue=_registeredPickersQueue - In the implementation block
@property (nonatomic,retain) PVLivePlayerCameraSource * registeredPickersSource;               //@synthesize registeredPickersSource=_registeredPickersSource - In the implementation block
@property (nonatomic,readonly) PVLivePlayerCameraSource * pickerSource; 
@property (nonatomic,readonly) BOOL isPickerPreviewing; 
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)registeredPickersQueue;
-(NSMutableSet *)registeredPickers;
-(PVLivePlayerCameraSource *)registeredPickersSource;
-(void)setRegisteredPickersSource:(PVLivePlayerCameraSource *)arg1 ;
-(void)registerPickerAsPreviewingWithObject:(id)arg1 ;
-(void)unregisterPickerAsPreviewingWithObject:(id)arg1 ;
-(BOOL)isPickerPreviewing;
-(PVLivePlayerCameraSource *)pickerSource;
-(void)setRegisteredPickers:(NSMutableSet *)arg1 ;
-(void)setRegisteredPickersQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

