/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <SettingsCellularUI/SettingsCellularUI-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, NSMutableDictionary, RadiosPreferences, NSString;

@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _cellularDataSetting;
	BOOL _cellularDataSettingInitialized;
	CTServerConnectionRef _ctConnection;
	CoreTelephonyClient* _client;
	NSMutableDictionary* _dataStatusDict;
	NSMutableDictionary* _intlDataAccessStatus;
	RadiosPreferences* _radioPreferences;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                      //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * dataStatusDict;                        //@synthesize dataStatusDict=_dataStatusDict - In the implementation block
@property (retain) NSMutableDictionary * intlDataAccessStatus;                  //@synthesize intlDataAccessStatus=_intlDataAccessStatus - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radioPreferences;              //@synthesize radioPreferences=_radioPreferences - In the implementation block
@property (assign) BOOL cellularDataSetting;                                    //@synthesize cellularDataSetting=_cellularDataSetting - In the implementation block
@property (assign) BOOL cellularDataSettingInitialized;                         //@synthesize cellularDataSettingInitialized=_cellularDataSettingInitialized - In the implementation block
@property (assign) CTServerConnectionRef ctConnection;                          //@synthesize ctConnection=_ctConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(void)airplaneModeChanged;
-(void)willEnterForeground;
-(void)setInternationalDataAccessStatus:(BOOL)arg1 ;
-(BOOL)getInternationalDataAccessStatus:(id)arg1 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(BOOL)isCellularDataEnabled;
-(BOOL)isAirplaneModeEnabled;
-(void)setCellularDataEnabled:(BOOL)arg1 ;
-(id)initPrivate;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(RadiosPreferences *)radioPreferences;
-(CTServerConnectionRef)ctConnection;
-(void)setCtConnection:(CTServerConnectionRef)arg1 ;
-(BOOL)getInternationalDataAccessStatus;
-(void)setInternationalDataAccessStatus:(id)arg1 status:(BOOL)arg2 ;
-(void)setDataFallbackEnabled:(BOOL)arg1 ;
-(BOOL)isDataFallbackEnabled;
-(id)getDataStatus:(id)arg1 ;
-(void)setDataStatusDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dataStatusDict;
-(void)fetchDataStatus;
-(void)fetchInternationalDataAccessStatus:(id)arg1 ;
-(NSMutableDictionary *)intlDataAccessStatus;
-(void)setCellularDataSetting:(BOOL)arg1 ;
-(void)fetchCellularDataEnabled;
-(BOOL)cellularDataSetting;
-(void)setIntlDataAccessStatus:(NSMutableDictionary *)arg1 ;
-(BOOL)cellularDataSettingInitialized;
-(void)setCellularDataSettingInitialized:(BOOL)arg1 ;
@end

