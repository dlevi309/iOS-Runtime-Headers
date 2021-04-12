/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<ASKAirplaneModeInquiryDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)airplaneModeChanged;
-(RadiosPreferences *)radiosPreferences;
@end

