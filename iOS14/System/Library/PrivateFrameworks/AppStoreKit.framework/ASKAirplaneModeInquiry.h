/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol ASKAirplaneModeInquiryDelegate;
@class RadiosPreferences;

@interface ASKAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate> {

	id<ASKAirplaneModeInquiryDelegate> _delegate;
	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;                         //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,nonatomic,__weak) id<ASKAirplaneModeInquiryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
+(id)settingsURL;
-(id)init;
-(id<ASKAirplaneModeInquiryDelegate>)delegate;
-(void)airplaneModeChanged;
-(void)setDelegate:(id<ASKAirplaneModeInquiryDelegate>)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(BOOL)isEnabled;
@end

