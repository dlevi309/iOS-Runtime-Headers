/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class SBAlertItem, NSString;

@interface SBClientAlertItemTestRecipe : NSObject <SBTestRecipe> {

	SBAlertItem* _item;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)_nextAlertItemToTest;
-(void)_dismissCurrentItem;
-(id)_mapsApp;
-(id)_anySUDescriptor;
-(id)_chatCarrierSMSAlert;
-(id)_chatMMSDelayedDownloadAlert;
-(id)_chatMMSInformationMissingAlert;
-(id)_mapsThermalAlert;
-(id)_wifiBTSSPAlert;
-(id)_wifiDontAskAlert;
-(id)_wifiErrorAlert;
-(id)_wifiIsEnterpriseAlert;
-(id)_wifiPasswordAlert;
-(id)_wifiTrustAlert;
-(void)educationAlertWasDeactivated:(id)arg1 ;
-(id)_currentAssistantLanguage;
@end

