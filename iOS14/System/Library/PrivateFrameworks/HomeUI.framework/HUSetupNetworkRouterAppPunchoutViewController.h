/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/HFSetupPairingPopupAppPunchout.h>

@protocol HFSetupPairingPopupDelegate;
@class HFAppPunchoutRequest, HMSetupAccessoryDescription, HULinkedApplicationItem, OBTrayButton, NSString;

@interface HUSetupNetworkRouterAppPunchoutViewController : OBWelcomeController <HFSetupPairingPopupAppPunchout> {

	id<HFSetupPairingPopupDelegate> _popupDelegate;
	HMSetupAccessoryDescription* _setupAccessoryDescription;
	HFAppPunchoutRequest* _punchoutRequest;
	HULinkedApplicationItem* _linkedApplicationItem;
	OBTrayButton* _punchoutButton;

}

@property (nonatomic,retain) HULinkedApplicationItem * linkedApplicationItem;                        //@synthesize linkedApplicationItem=_linkedApplicationItem - In the implementation block
@property (nonatomic,readonly) OBTrayButton * punchoutButton;                                        //@synthesize punchoutButton=_punchoutButton - In the implementation block
@property (nonatomic,retain) HFAppPunchoutRequest * punchoutRequest;                                 //@synthesize punchoutRequest=_punchoutRequest - In the implementation block
@property (nonatomic,readonly) unsigned long long popupType; 
@property (nonatomic,__weak,readonly) id<HFSetupPairingPopupDelegate> popupDelegate;                 //@synthesize popupDelegate=_popupDelegate - In the implementation block
@property (nonatomic,readonly) HMSetupAccessoryDescription * setupAccessoryDescription;              //@synthesize setupAccessoryDescription=_setupAccessoryDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(HMSetupAccessoryDescription *)setupAccessoryDescription;
-(void)_cancelPressed:(id)arg1 ;
-(id<HFSetupPairingPopupDelegate>)popupDelegate;
-(id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2 ;
-(unsigned long long)popupType;
-(void)_punchoutPressed:(id)arg1 ;
-(void)_okPressed:(id)arg1 ;
-(id)_lookUpSoftwareAndUpdateUI;
-(void)setLinkedApplicationItem:(HULinkedApplicationItem *)arg1 ;
-(OBTrayButton *)punchoutButton;
-(HULinkedApplicationItem *)linkedApplicationItem;
-(void)setPunchoutRequest:(HFAppPunchoutRequest *)arg1 ;
-(HFAppPunchoutRequest *)punchoutRequest;
@end

