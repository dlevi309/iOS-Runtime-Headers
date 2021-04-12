/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


#import <SetupAssistant/SetupAssistant-Structs.h>
@class NSString, NSArray, NSDictionary, NSSet, NSDate;

@interface BYLocationController : NSObject {

	NSString* _guessedCountryFromTelephony;
	NSArray* _guessedCountries;
	NSDictionary* _aliasDict;
	NSSet* _validCountries;
	WiFiManagerClientRef fWifiManager;
	WiFiDeviceClientRef fWifiDevice;
	BOOL _fakeMode;
	NSArray* _firstGuessedLanguages;
	NSDate* _wirelessScanStartDate;

}

@property (nonatomic,retain) NSDate * wirelessScanStartDate;               //@synthesize wirelessScanStartDate=_wirelessScanStartDate - In the implementation block
@property (nonatomic,retain) NSArray * guessedCountries;                   //@synthesize guessedCountries=_guessedCountries - In the implementation block
@property (nonatomic,retain) NSArray * firstGuessedLanguages;              //@synthesize firstGuessedLanguages=_firstGuessedLanguages - In the implementation block
@property (assign,nonatomic) BOOL fakeMode;                                //@synthesize fakeMode=_fakeMode - In the implementation block
+(id)sharedBuddyLocationController;
-(id)init;
-(NSArray *)guessedCountries;
-(BOOL)fakeMode;
-(id)aliasDict;
-(void)_getWifiDevice;
-(id)_checkForAliases:(id)arg1 ;
-(id)_countriesFromDefaults;
-(void)_startWifiScan;
-(void)setGuessedCountries:(NSArray *)arg1 ;
-(BOOL)getCountryFromTelephony;
-(void)_closeWifiConnection;
-(id)_countryFromTelephony;
-(id)_checkedArrayForString:(id)arg1 ;
-(void)_setGuessedCountryDefault:(id)arg1 ;
-(void)setFirstGuessedLanguages:(NSArray *)arg1 ;
-(void)_scanWifiList;
-(void)setWirelessScanStartDate:(NSDate *)arg1 ;
-(id)_checkForAliasesOrInvalid:(id)arg1 ;
-(NSDate *)wirelessScanStartDate;
-(id)guessedCountryFromTelephony;
-(id)guessedLanguages;
-(void)_scanWifiListWithDevice:(WiFiDeviceClientRef)arg1 ;
-(void)_scanComplete:(id)arg1 error:(BOOL)arg2 ;
-(NSArray *)firstGuessedLanguages;
-(void)setFakeMode:(BOOL)arg1 ;
-(void)reset;
-(void)dealloc;
@end

