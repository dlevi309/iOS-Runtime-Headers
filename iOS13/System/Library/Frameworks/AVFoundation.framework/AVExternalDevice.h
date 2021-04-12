/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVExternalDeviceInternal, NSArray, NSDictionary, NSData, NSString;

@interface AVExternalDevice : NSObject {

	AVExternalDeviceInternal* _externalDevice;

}

@property (assign,nonatomic) id<AVExternalDeviceDelegate> delegate; 
@property (nonatomic,readonly) NSArray * screenIDs; 
@property (nonatomic,readonly) NSDictionary * screenInputCapabilities; 
@property (nonatomic,readonly) NSDictionary * screenPrimaryInputDevices; 
@property (nonatomic,readonly) NSDictionary * screenViewAreas; 
@property (nonatomic,readonly) NSDictionary * screenSafeAreas; 
@property (nonatomic,readonly) NSData * OEMIcon; 
@property (nonatomic,readonly) NSArray * OEMIcons; 
@property (nonatomic,readonly) NSString * OEMIconLabel; 
@property (nonatomic,readonly) BOOL OEMIconVisible; 
@property (nonatomic,readonly) NSString * modelName; 
@property (nonatomic,readonly) NSArray * externalDeviceHIDs; 
@property (nonatomic,readonly) BOOL nightMode; 
@property (nonatomic,readonly) BOOL nightModeSupported; 
@property (nonatomic,readonly) BOOL rightHandDrive; 
@property (nonatomic,readonly) NSArray * limitedUIElements; 
@property (nonatomic,readonly) BOOL limitedUI; 
@property (nonatomic,readonly) BOOL ownsScreen; 
@property (nonatomic,readonly) BOOL ownsTurnByTurnNavigation; 
@property (nonatomic,readonly) BOOL recognizingSpeech; 
@property (nonatomic,readonly) NSArray * supportedFeatures; 
@property (nonatomic,readonly) long long electronicTollCollection; 
@property (nonatomic,readonly) long long navigationAidedDriving; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) long long transportType; 
@property (nonatomic,readonly) NSData * MFiCertificateSerialNumber; 
+(id)currentCarPlayExternalDevice;
+(id)sharedLocalDevice;
+(id)currentExternalDevice;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id<AVExternalDeviceDelegate>)delegate;
-(void)setDelegate:(id<AVExternalDeviceDelegate>)arg1 ;
-(long long)transportType;
-(BOOL)nightMode;
-(BOOL)rightHandDrive;
-(NSString *)modelName;
-(NSString *)ID;
-(id)_weakReference;
-(OpaqueFigEndpointRef)figEndpoint;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
-(id)_screenInfo;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(NSArray *)screenIDs;
-(NSArray *)externalDeviceHIDs;
-(NSArray *)OEMIcons;
-(void)requestCarUIForURL:(id)arg1 withUUID:(id)arg2 ;
-(NSDictionary *)screenViewAreas;
-(NSDictionary *)screenSafeAreas;
-(NSDictionary *)screenInputCapabilities;
-(NSDictionary *)screenPrimaryInputDevices;
-(id)externalDeviceHIDWithUUID:(id)arg1 ;
-(NSData *)OEMIcon;
-(NSString *)OEMIconLabel;
-(BOOL)OEMIconVisible;
-(BOOL)nightModeSupported;
-(NSArray *)limitedUIElements;
-(BOOL)limitedUI;
-(BOOL)ownsTurnByTurnNavigation;
-(BOOL)ownsScreen;
-(BOOL)recognizingSpeech;
-(NSArray *)supportedFeatures;
-(long long)electronicTollCollection;
-(long long)navigationAidedDriving;
-(NSData *)MFiCertificateSerialNumber;
-(void)requestCarUI;
-(void)requestCarUIForURL:(id)arg1 ;
-(void)requestViewArea:(long long)arg1 forScreenID:(id)arg2 ;
-(id)requestTurnByTurnNavigationOwnership;
-(id)borrowScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForConnection;
-(void)sendCommand:(id)arg1 withParameters:(id)arg2 ;
-(void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2 ;
@end

