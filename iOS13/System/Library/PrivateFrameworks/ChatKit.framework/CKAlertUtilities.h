/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKAlertUtilitiesProtocol;
#import <ChatKit/ChatKit-Structs.h>
@interface CKAlertUtilities : NSObject {

	id<CKAlertUtilitiesProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<CKAlertUtilitiesProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CFDictionaryRef)_copyCTPhoneNumberSetting;
+(CFStringRef)_grabCTSIMStatus;
+(long long)missingAlertTypeToNotify;
-(id<CKAlertUtilitiesProtocol>)delegate;
-(void)setDelegate:(id<CKAlertUtilitiesProtocol>)arg1 ;
-(void)_displayMissingInformationAlert:(long long)arg1 ;
-(void)_didFinishCheckingMissingCarrierSetting;
-(void)_showNetworkPrefs:(long long)arg1 ;
-(void)checkMissingCarrierSetting;
@end

