/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_displayMissingInformationAlert:(long long)arg1 ;
-(void)_didFinishCheckingMissingCarrierSetting;
-(void)_showNetworkPrefs:(long long)arg1 ;
-(void)checkMissingCarrierSetting;
-(void)setDelegate:(id<CKAlertUtilitiesProtocol>)arg1 ;
@end

