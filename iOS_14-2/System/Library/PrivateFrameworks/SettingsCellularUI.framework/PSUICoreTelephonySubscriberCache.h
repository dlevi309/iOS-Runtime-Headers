/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)initPrivate;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(void)prlVersionDidChange:(id)arg1 version:(id)arg2 ;
-(id)init;
-(void)willEnterForeground;
-(id)shortLabel:(id)arg1 ;
-(void)setMobileEquipmentInfoDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mobileEquipmentInfoDict;
-(void)fetchMobileEquipmentInfo;
-(NSMutableDictionary *)isoCountryCodesDict;
-(void)fetchCountryCodes;
-(id)mobileEquipmentInfo:(id)arg1 ;
-(unsigned long long)mobileEquipmentInfoLength;
-(id)isoCountryCode:(id)arg1 ;
-(void)setIsoCountryCodesDict:(NSMutableDictionary *)arg1 ;
@end

