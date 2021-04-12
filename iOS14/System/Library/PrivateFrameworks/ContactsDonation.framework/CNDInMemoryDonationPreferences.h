/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <libobjc.A.dylib/CNDDonationPreferences.h>

@class NSString;

@interface CNDInMemoryDonationPreferences : NSObject <CNDDonationPreferences> {

	BOOL _donationsEnabled;

}

@property (assign,getter=isDonationsEnabled,nonatomic) BOOL donationsEnabled;              //@synthesize donationsEnabled=_donationsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)setDonationsEnabled:(BOOL)arg1 ;
-(BOOL)isDonationsEnabled;
@end

