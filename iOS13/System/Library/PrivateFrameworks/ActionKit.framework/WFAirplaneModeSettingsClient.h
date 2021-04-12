/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class RadiosPreferences, NSString;

@interface WFAirplaneModeSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;              //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRadiosPreferences:(id)arg1 ;
@end

