/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICoreTelephonySubscriberCache : NSObject <CoreTelephonyClientSubscriberDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _client;
	NSMutableDictionary* _mobileEquipmentInfoDict;
	NSMutableDictionary* _isoCountryCodesDict;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                     //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * mobileEquipmentInfoDict;              //@synthesize mobileEquipmentInfoDict=_mobileEquipmentInfoDict - In the implementation block
@property (retain) NSMutableDictionary * isoCountryCodesDict;                  //@synthesize isoCountryCodesDict=_isoCountryCodesDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(void)willEnterForeground;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)initPrivate;
-(id)mobileEquipmentInfo:(id)arg1 ;
-(unsigned long long)mobileEquipmentInfoLength;
-(id)shortLabel:(id)arg1 ;
-(void)setMobileEquipmentInfoDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mobileEquipmentInfoDict;
-(void)fetchMobileEquipmentInfo;
-(NSMutableDictionary *)isoCountryCodesDict;
-(void)fetchCountryCodes;
-(id)isoCountryCode:(id)arg1 ;
-(void)setIsoCountryCodesDict:(NSMutableDictionary *)arg1 ;
@end

