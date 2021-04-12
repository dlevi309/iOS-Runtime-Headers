/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSDictionary, EasyConfigDevice, NSObject, NSString, CUWiFiDevice;

@interface CUWACSession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	LogCategory* _ucat;
	int _saveOriginalWiFiState;
	NSDictionary* _originalWiFiInfo;
	int _joinSoftAPState;
	double _joinSoftAPStartTime;
	EasyConfigDevice* _easyConfigDevice;
	int _easyConfigPreConfigState;
	SCD_Struct_CU36 _easyConfigPreConfigMetrics;
	int _restoreOriginalWiFiState;
	double _restoreStartTime;
	int _easyConfigPostConfigState;
	SCD_Struct_CU37 _easyConfigPostConfigMetrics;
	int _finishState;
	NSDictionary* _configuration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForSetupCodeHandler;
	CUWiFiDevice* _wacDevice;

}

@property (nonatomic,copy) NSDictionary * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForSetupCodeHandler;                              //@synthesize promptForSetupCodeHandler=_promptForSetupCodeHandler - In the implementation block
@property (nonatomic,retain) CUWiFiDevice * wacDevice;                                //@synthesize wacDevice=_wacDevice - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)_cleanup;
-(void)activate;
-(void)_run;
-(void)_progress:(unsigned)arg1 info:(id)arg2 ;
-(void)trySetupCode:(id)arg1 ;
-(int)_runSaveOriginalWiFi;
-(int)_runJoinSoftAP;
-(void)_runJoinSoftAPStart;
-(void)_runJoinSoftAPFinished:(int)arg1 ;
-(int)_runEasyConfigPreConfig;
-(void)_runEasyConfigPreConfigStart;
-(void)_runEasyConfigProgress:(int)arg1 info:(id)arg2 ;
-(int)_runRestoreOriginalWiFi;
-(void)_runRestoreOriginalWiFiStart;
-(void)_runRestoreOriginalWiFiFinished:(int)arg1 ;
-(int)_runEasyConfigPostConfig;
-(int)_runFinish;
-(void)_runFinishRestored:(int)arg1 ;
-(id)promptForSetupCodeHandler;
-(void)setPromptForSetupCodeHandler:(id)arg1 ;
-(CUWiFiDevice *)wacDevice;
-(void)setWacDevice:(CUWiFiDevice *)arg1 ;
@end

