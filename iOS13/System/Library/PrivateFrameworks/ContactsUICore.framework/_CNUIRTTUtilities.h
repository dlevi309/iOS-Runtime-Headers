/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIRTTUtilities.h>

@class RTTTelephonyUtilities, NSString;

@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities> {

	RTTTelephonyUtilities* _utilityProvider;

}

@property (nonatomic,retain) RTTTelephonyUtilities * utilityProvider;              //@synthesize utilityProvider=_utilityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)relayIsSupported;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(id)initWithUtilityProvider:(id)arg1 ;
-(id)nts_lazyUtilityProvider;
-(RTTTelephonyUtilities *)utilityProvider;
-(void)setUtilityProvider:(RTTTelephonyUtilities *)arg1 ;
@end

