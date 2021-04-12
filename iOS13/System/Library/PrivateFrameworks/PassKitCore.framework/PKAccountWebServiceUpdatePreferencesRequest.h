/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServicePreferencesRequest.h>

@class PKAccountPreferences;

@interface PKAccountWebServiceUpdatePreferencesRequest : PKAccountWebServicePreferencesRequest {

	PKAccountPreferences* _preferences;

}

@property (nonatomic,copy) PKAccountPreferences * preferences;              //@synthesize preferences=_preferences - In the implementation block
-(void)setPreferences:(PKAccountPreferences *)arg1 ;
-(PKAccountPreferences *)preferences;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
@end

