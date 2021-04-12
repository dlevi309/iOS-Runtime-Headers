/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class HMSetupAccessoryDescription;


@protocol HFSetupPairingPopup <NSObject>
@property (nonatomic,readonly) unsigned long long popupType; 
@property (nonatomic,__weak,readonly) id<HFSetupPairingPopupDelegate> popupDelegate; 
@property (nonatomic,readonly) HMSetupAccessoryDescription * setupAccessoryDescription; 
@required
-(HMSetupAccessoryDescription *)setupAccessoryDescription;
-(id<HFSetupPairingPopupDelegate>)popupDelegate;
-(id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2;
-(unsigned long long)popupType;

@end

