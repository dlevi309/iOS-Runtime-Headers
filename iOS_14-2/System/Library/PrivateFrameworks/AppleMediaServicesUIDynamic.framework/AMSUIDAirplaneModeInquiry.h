/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
*/

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol AMSUIDAirplaneModeInquiryDelegate;
@class RadiosPreferences;

@interface AMSUIDAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate> {

	id<AMSUIDAirplaneModeInquiryDelegate> _delegate;
	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;                            //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIDAirplaneModeInquiryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
+(id)settingsURL;
-(id)init;
-(id<AMSUIDAirplaneModeInquiryDelegate>)delegate;
-(void)airplaneModeChanged;
-(void)setDelegate:(id<AMSUIDAirplaneModeInquiryDelegate>)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(BOOL)isEnabled;
@end

