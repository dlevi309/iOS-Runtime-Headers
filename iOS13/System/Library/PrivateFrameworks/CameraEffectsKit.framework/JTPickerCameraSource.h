/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, PVLivePlayerCameraSource;

@interface JTPickerCameraSource : NSObject {

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
-(void)registerPickerAsPreviewingWithObject:(id)arg1 ;
-(PVLivePlayerCameraSource *)pickerSource;
-(void)unregisterPickerAsPreviewingWithObject:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)registeredPickersQueue;
-(NSMutableSet *)registeredPickers;
-(PVLivePlayerCameraSource *)registeredPickersSource;
-(void)setRegisteredPickersSource:(PVLivePlayerCameraSource *)arg1 ;
-(BOOL)isPickerPreviewing;
-(void)setRegisteredPickers:(NSMutableSet *)arg1 ;
-(void)setRegisteredPickersQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

