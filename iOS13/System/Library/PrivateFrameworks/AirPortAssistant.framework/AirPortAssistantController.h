/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


@class NSString, NSDictionary;

@interface AirPortAssistantController : NSObject {

	id _delegate;
	id _viewController;
	id _context;
	NSString* _configuredSSID;
	NSDictionary* _unconfiguredWACDevices;

}

@property (assign,nonatomic) id<AirPortAssistantControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id context;                                                             //@synthesize context=_context - In the implementation block
@property (retain) id viewController;                                                      //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSString * configuredSSID;                                              //@synthesize configuredSSID=_configuredSSID - In the implementation block
@property (retain) NSDictionary * unconfiguredWACDevices;                                  //@synthesize unconfiguredWACDevices=_unconfiguredWACDevices - In the implementation block
+(id)sharedInstance;
+(BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3 viewController:(id)arg4 ;
+(BOOL)isUnconfiguredDevice:(id)arg1 ;
+(id)unconfiguredDeviceName:(id)arg1 ;
+(BOOL)isHomeKitSecureWACDevice:(id)arg1 ;
+(BOOL)isAirPlayDevice:(id)arg1 ;
+(BOOL)isGenericMFiAccessory:(id)arg1 ;
+(id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2 ;
+(BOOL)isSTAOnlyDevice:(id)arg1 ;
+(id)unconfiguredDeviceID:(id)arg1 ;
+(id)assistantUIViewControllerWithParameters:(id)arg1 ;
+(void)downloadAssetsCancel;
+(void)downloadAssetsIfNeeded;
+(void)cancelAirPortAssistantController;
+(BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3 ;
-(void)dealloc;
-(id<AirPortAssistantControllerDelegate>)delegate;
-(void)setDelegate:(id<AirPortAssistantControllerDelegate>)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(NSString *)configuredSSID;
-(void)wirelessScanDone:(id)arg1 ;
-(void)assistantCompleteWithResult:(int)arg1 ;
-(void)setConfiguredSSID:(NSString *)arg1 ;
-(void)setUnconfiguredWACDevices:(NSDictionary *)arg1 ;
-(void)updateWACListeners;
-(id)WACDeviceFromScanInfo:(id)arg1 ;
-(NSDictionary *)unconfiguredWACDevices;
-(int)start2_4WiFiScan;
-(void)stop2_4WiFiScan;
-(int)configureUIViewControllerWithParameters:(id)arg1 ;
@end

