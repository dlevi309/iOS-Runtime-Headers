/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <libobjc.A.dylib/CNDDonationPreferences.h>

@protocol CNDDonationPreferences <NSObject>
@property (assign,getter=isDonationsEnabled,nonatomic) BOOL donationsEnabled; 
@required
+(id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3;
-(void)setDonationsEnabled:(BOOL)arg1;
-(BOOL)isDonationsEnabled;

@end


@protocol CNDonationPreferencesLogger;
@class NSNotificationCenter, NSString;

@interface CNDDonationPreferences : NSObject <CNDDonationPreferences> {

	NSNotificationCenter* _notificationCenter;
	id<CNDonationPreferencesLogger> _logger;
	/*^block*/id _donationPreferenceCheckingBlock;
	/*^block*/id _donationPreferenceSettingBlock;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                  //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<CNDonationPreferencesLogger> logger;                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy,readonly) id donationPreferenceCheckingBlock;                    //@synthesize donationPreferenceCheckingBlock=_donationPreferenceCheckingBlock - In the implementation block
@property (nonatomic,copy,readonly) id donationPreferenceSettingBlock;                     //@synthesize donationPreferenceSettingBlock=_donationPreferenceSettingBlock - In the implementation block
@property (assign,getter=isDonationsEnabled,nonatomic) BOOL donationsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(NSString *)description;
-(id<CNDonationPreferencesLogger>)logger;
-(void)setDonationsEnabled:(BOOL)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 logger:(id)arg2 donationPreferenceCheckingBlock:(/*^block*/id)arg3 donationPreferenceSettingBlock:(/*^block*/id)arg4 ;
-(BOOL)isDonationsEnabled;
-(id)donationPreferenceCheckingBlock;
-(id)donationPreferenceSettingBlock;
@end

