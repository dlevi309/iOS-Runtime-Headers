/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

