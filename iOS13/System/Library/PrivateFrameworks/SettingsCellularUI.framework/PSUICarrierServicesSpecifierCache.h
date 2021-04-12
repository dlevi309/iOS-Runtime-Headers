/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(void)willEnterForeground;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)carrierBundleChange:(id)arg1 ;
-(id)initPrivate;
-(void)_clearCache;
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

