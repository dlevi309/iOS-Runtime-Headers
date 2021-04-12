/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)reset;
-(NSArray *)guessedCountries;
-(id)aliasDict;
-(id)_checkForAliases:(id)arg1 ;
-(id)_countriesFromDefaults;
-(void)setGuessedCountries:(NSArray *)arg1 ;
-(BOOL)getCountryFromTelephony;
-(void)_startWifiScan;
-(void)_closeWifiConnection;
-(id)_countryFromTelephony;
-(id)_checkedArrayForString:(id)arg1 ;
-(void)_setGuessedCountryDefault:(id)arg1 ;
-(void)setFirstGuessedLanguages:(NSArray *)arg1 ;
-(void)_getWifiDevice;
-(void)_scanWifiList;
-(void)setWirelessScanStartDate:(NSDate *)arg1 ;
-(id)_checkForAliasesOrInvalid:(id)arg1 ;
-(NSDate *)wirelessScanStartDate;
-(id)guessedCountryFromTelephony;
-(id)guessedLanguages;
-(void)_scanWifiListWithDevice:(WiFiDeviceClientRef)arg1 ;
-(void)_scanComplete:(id)arg1 error:(BOOL)arg2 ;
-(NSArray *)firstGuessedLanguages;
-(BOOL)fakeMode;
-(void)setFakeMode:(BOOL)arg1 ;
@end

