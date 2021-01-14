/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
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
+(id)currentExternalDevice;
+(id)currentCarPlayExternalDevice;
+(id)sharedLocalDevice;
-(NSString *)ID;
-(id)init;
-(NSData *)OEMIcon;
-(BOOL)limitedUI;
-(id<AVExternalDeviceDelegate>)delegate;
-(OpaqueFigEndpointRef)figEndpoint;
-(NSArray *)OEMIcons;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
-(BOOL)ownsScreen;
-(BOOL)nightMode;
-(NSString *)modelName;
-(long long)transportType;
-(BOOL)rightHandDrive;
-(NSString *)name;
-(NSArray *)screenIDs;
-(void)setDelegate:(id<AVExternalDeviceDelegate>)arg1 ;
-(NSString *)OEMIconLabel;
-(void)requestCarUI;
-(id)_weakReference;
-(id)_screenInfo;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(NSArray *)externalDeviceHIDs;
-(NSDictionary *)screenSafeAreas;
-(void)requestCarUIForURL:(id)arg1 withUUID:(id)arg2 ;
-(NSDictionary *)screenViewAreas;
-(NSDictionary *)screenInputCapabilities;
-(NSDictionary *)screenPrimaryInputDevices;
-(id)externalDeviceHIDWithUUID:(id)arg1 ;
-(BOOL)OEMIconVisible;
-(BOOL)nightModeSupported;
-(BOOL)ownsTurnByTurnNavigation;
-(BOOL)recognizingSpeech;
-(NSArray *)supportedFeatures;
-(void)requestCarUIForURL:(id)arg1 ;
-(long long)electronicTollCollection;
-(long long)navigationAidedDriving;
-(NSData *)MFiCertificateSerialNumber;
-(void)takeScreenForConnection;
-(void)requestViewArea:(long long)arg1 forScreenID:(id)arg2 ;
-(id)requestTurnByTurnNavigationOwnership;
-(id)borrowScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)sendCommand:(id)arg1 withParameters:(id)arg2 ;
-(void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2 ;
-(NSArray *)limitedUIElements;
-(void)dealloc;
@end

