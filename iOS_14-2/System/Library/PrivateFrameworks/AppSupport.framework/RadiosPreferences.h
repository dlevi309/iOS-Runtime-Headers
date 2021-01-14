/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@protocol RadiosPreferencesDelegate, OS_dispatch_queue, OS_os_log;
#import <AppSupport/AppSupport-Structs.h>
@class NSObject;

@interface RadiosPreferences : NSObject {

	SCPreferencesRef _prefs;
	int _applySkipCount;
	id<RadiosPreferencesDelegate> _delegate;
	BOOL _isCachedAirplaneModeValid;
	BOOL _cachedAirplaneMode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_os_log> radios_prefs_log;
	BOOL notifyForExternalChangeOnly;

}

@property (assign,nonatomic) BOOL airplaneMode; 
@property (assign,nonatomic) id<RadiosPreferencesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL notifyForExternalChangeOnly; 
+(BOOL)shouldMirrorAirplaneMode;
-(BOOL)airplaneMode;
-(id)initWithQueue:(id)arg1 ;
-(void)refresh;
-(oneway void)release;
-(void)setNotifyForExternalChangeOnly:(BOOL)arg1 ;
-(void)initializeSCPrefs:(id)arg1 ;
-(id)init;
-(void)notifyTarget:(unsigned)arg1 ;
-(id<RadiosPreferencesDelegate>)delegate;
-(void)setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)setCallback:(/*function pointer*/void*)arg1 withContext:(SCD_Struct_Ra8*)arg2 ;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(void)setDelegate:(id<RadiosPreferencesDelegate>)arg1 ;
-(BOOL)telephonyStateWithBundleIdentifierOut:(id*)arg1 ;
-(void*)getValueForKey:(id)arg1 ;
-(void)synchronize;
-(BOOL)notifyForExternalChangeOnly;
-(void)setTelephonyState:(BOOL)arg1 fromBundleID:(id)arg2 ;
-(void*)getValueWithLockForKey:(id)arg1 ;
-(void)setAirplaneModeWithoutMirroring:(BOOL)arg1 ;
-(void)dealloc;
@end

