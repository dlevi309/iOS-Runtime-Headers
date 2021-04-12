/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
-(id)customAbbreviations;
-(id)_getCustomAbbreviationsFromPrefs;
-(void)setCustomAbbreviation:(id)arg1 forCityIdentifier:(id)arg2 ;
@end

