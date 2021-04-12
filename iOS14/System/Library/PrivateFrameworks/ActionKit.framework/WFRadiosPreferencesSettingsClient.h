/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFSettingsClient.h>

@class RadiosPreferences;

@interface WFRadiosPreferencesSettingsClient : WFSettingsClient {

	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;              //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(id)initWithRadiosPreferences:(id)arg1 ;
@end

