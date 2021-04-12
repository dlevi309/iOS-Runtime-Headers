/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long popupType; 
@property (nonatomic,__weak,readonly) id<HFSetupPairingPopupDelegate> popupDelegate;                 //@synthesize popupDelegate=_popupDelegate - In the implementation block
@property (nonatomic,readonly) HMSetupAccessoryDescription * setupAccessoryDescription;              //@synthesize setupAccessoryDescription=_setupAccessoryDescription - In the implementation block
-(void)viewDidLoad;
-(void)_cancelPressed:(id)arg1 ;
-(HMSetupAccessoryDescription *)setupAccessoryDescription;
-(id<HFSetupPairingPopupDelegate>)popupDelegate;
-(id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2 ;
-(unsigned long long)popupType;
-(void)_punchoutPressed:(id)arg1 ;
-(id)_lookUpSoftwareAndUpdateUI;
-(void)setLinkedApplicationItem:(HULinkedApplicationItem *)arg1 ;
-(OBTrayButton *)punchoutButton;
-(HULinkedApplicationItem *)linkedApplicationItem;
-(void)setPunchoutRequest:(HFAppPunchoutRequest *)arg1 ;
-(HFAppPunchoutRequest *)punchoutRequest;
@end

