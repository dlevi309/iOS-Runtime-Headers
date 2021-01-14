/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICarrierServicesSpecifierCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate> {

	CoreTelephonyClient* _client;
	NSMutableDictionary* _specifiersDict;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                      //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * specifiersDict;              //@synthesize specifiersDict=_specifiersDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)carrierBundleChange:(id)arg1 ;
-(id)initPrivate;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(id)init;
-(void)willEnterForeground;
-(void)_clearCache;
-(void)dealloc;
-(void)openURLWithSpecifier:(id)arg1 ;
-(void)dialCarrierServiceNumber:(id)arg1 ;
-(id)readPreference:(id)arg1 ;
-(id)newMyAccountSpecifierWithTarget:(id)arg1 context:(id)arg2 ;
-(id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2 ;
-(NSMutableDictionary *)specifiersDict;
-(void)fetchSpecifiers;
-(void)_allowClicks;
-(id)specifiers:(id)arg1 ;
-(void)setSpecifiersDict:(NSMutableDictionary *)arg1 ;
@end

