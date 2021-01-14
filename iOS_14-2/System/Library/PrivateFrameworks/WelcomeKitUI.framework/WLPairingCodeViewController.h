/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/OBSetupAssistantSupport.h>

@class NSString, WLWelcomeController, OBLinkTrayButton;

@interface WLPairingCodeViewController : OBWelcomeController <OBSetupAssistantSupport> {

	NSString* _wifiPSK;
	NSString* _ssid;
	WLWelcomeController* _welcomeController;
	OBLinkTrayButton* _appleInternalOptionsButton;
	/*^block*/id _viewWillDisappearBlock;
	/*^block*/id _getLocalImportOptionsHandler;
	/*^block*/id _stashDataLocallyHandler;
	/*^block*/id _importLocalContentHandler;

}

@property (nonatomic,copy) id viewWillDisappearBlock;                    //@synthesize viewWillDisappearBlock=_viewWillDisappearBlock - In the implementation block
@property (nonatomic,copy) id getLocalImportOptionsHandler;              //@synthesize getLocalImportOptionsHandler=_getLocalImportOptionsHandler - In the implementation block
@property (nonatomic,copy) id stashDataLocallyHandler;                   //@synthesize stashDataLocallyHandler=_stashDataLocallyHandler - In the implementation block
@property (nonatomic,copy) id importLocalContentHandler;                 //@synthesize importLocalContentHandler=_importLocalContentHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_appleInternalOptionsTapped:(id)arg1 ;
-(id)getLocalImportOptionsHandler;
-(void)_setStashDataLocally:(BOOL)arg1 ;
-(void)_importLocalContent;
-(id)stashDataLocallyHandler;
-(id)importLocalContentHandler;
-(id)viewWillDisappearBlock;
-(id)initWithPairingCode:(id)arg1 wifiPSK:(id)arg2 ssid:(id)arg3 welcomeController:(id)arg4 ;
-(void)setViewWillDisappearBlock:(id)arg1 ;
-(void)setGetLocalImportOptionsHandler:(id)arg1 ;
-(void)setStashDataLocallyHandler:(id)arg1 ;
-(void)setImportLocalContentHandler:(id)arg1 ;
@end

