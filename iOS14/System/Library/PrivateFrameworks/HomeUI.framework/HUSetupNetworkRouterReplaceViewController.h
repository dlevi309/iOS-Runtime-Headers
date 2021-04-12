/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HFSetupPairingPopup.h>

@protocol HFSetupPairingPopupDelegate;
@class HMSetupAccessoryDescription, NSString;

@interface HUSetupNetworkRouterReplaceViewController : HUImageOBWelcomeController <HFSetupPairingPopup> {

	id<HFSetupPairingPopupDelegate> _popupDelegate;
	HMSetupAccessoryDescription* _setupAccessoryDescription;

}

@property (nonatomic,readonly) unsigned long long popupType; 
@property (nonatomic,__weak,readonly) id<HFSetupPairingPopupDelegate> popupDelegate;                 //@synthesize popupDelegate=_popupDelegate - In the implementation block
@property (nonatomic,readonly) HMSetupAccessoryDescription * setupAccessoryDescription;              //@synthesize setupAccessoryDescription=_setupAccessoryDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(HMSetupAccessoryDescription *)setupAccessoryDescription;
-(void)_replacePressed:(id)arg1 ;
-(void)_cancelPressed:(id)arg1 ;
-(id<HFSetupPairingPopupDelegate>)popupDelegate;
-(id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2 ;
-(unsigned long long)popupType;
@end

