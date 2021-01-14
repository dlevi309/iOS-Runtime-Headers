/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/CoreTelephonyClientCapabilitiesDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICoreTelephonyCapabilitiesCache : NSObject <CoreTelephonyClientCapabilitiesDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _client;
	NSMutableDictionary* _volteCapabilityDict;
	NSMutableDictionary* _volteCapabilityInfoDict;
	NSMutableDictionary* _volteEnabledDict;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                   //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * volteCapabilityDict;                //@synthesize volteCapabilityDict=_volteCapabilityDict - In the implementation block
@property (copy) NSMutableDictionary * volteCapabilityInfoDict;              //@synthesize volteCapabilityInfoDict=_volteCapabilityInfoDict - In the implementation block
@property (retain) NSMutableDictionary * volteEnabledDict;                   //@synthesize volteEnabledDict=_volteEnabledDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initPrivate;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(void)context:(id)arg1 capabilitiesChanged:(id)arg2 ;
-(id)init;
-(void)willEnterForeground;
-(void)setVolteCapabilityDict:(NSMutableDictionary *)arg1 ;
-(void)setVolteCapabilityInfoDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)volteCapabilityDict;
-(void)fetchCanSetCapabilityVoLTE;
-(NSMutableDictionary *)volteCapabilityInfoDict;
-(void)setVolteEnabledDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)volteEnabledDict;
-(void)fetchCapabilityEnabledVoLTE;
-(BOOL)canSetCapabilityVoLTE:(id)arg1 ;
-(BOOL)cannotChangeVoLTESettingCallCarrier:(id)arg1 ;
-(BOOL)isVoLTEStillProvisioningForContext:(id)arg1 ;
-(BOOL)capabilityEnabledVoLTE:(id)arg1 ;
-(void)setCapabilityVoLTE:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)singleSimCanSetCapabilityVoLTE;
@end

