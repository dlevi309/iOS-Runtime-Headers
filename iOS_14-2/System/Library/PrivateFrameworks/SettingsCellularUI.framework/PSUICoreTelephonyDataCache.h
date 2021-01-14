/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(BOOL)isAirplaneModeEnabled;
-(id)initPrivate;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(id)init;
-(void)willEnterForeground;
-(void)setInternationalDataAccessStatus:(BOOL)arg1 ;
-(void)airplaneModeChanged;
-(void)setCellularDataEnabled:(BOOL)arg1 ;
-(void)fetchCellularDataEnabled;
-(void)dataSettingsChanged:(id)arg1 ;
-(void)setCtConnection:(CTServerConnectionRef)arg1 ;
-(BOOL)getInternationalDataAccessStatus:(id)arg1 ;
-(CTServerConnectionRef)ctConnection;
-(BOOL)isCellularDataEnabled;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(RadiosPreferences *)radioPreferences;
-(void)dealloc;
-(BOOL)getInternationalDataAccessStatus;
-(void)setInternationalDataAccessStatus:(id)arg1 status:(BOOL)arg2 ;
-(void)setDataFallbackEnabled:(BOOL)arg1 ;
-(BOOL)isDataFallbackEnabled;
-(void)setDataStatusDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dataStatusDict;
-(void)fetchDataStatus;
-(BOOL)cellularDataSetting;
-(void)fetchInternationalDataAccessStatus:(id)arg1 ;
-(NSMutableDictionary *)intlDataAccessStatus;
-(void)setCellularDataSetting:(BOOL)arg1 ;
-(id)getDataStatus:(id)arg1 ;
-(void)setIntlDataAccessStatus:(NSMutableDictionary *)arg1 ;
-(BOOL)cellularDataSettingInitialized;
-(void)setCellularDataSettingInitialized:(BOOL)arg1 ;
@end

