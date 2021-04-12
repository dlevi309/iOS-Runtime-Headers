/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <libobjc.A.dylib/CNDDonationPreferences.h>

@class NSString;

@interface CNDInMemoryDonationPreferences : NSObject <CNDDonationPreferences> {

	BOOL _donationsEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDonationsEnabled,nonatomic) BOOL donationsEnabled;              //@synthesize donationsEnabled=_donationsEnabled - In the implementation block
+(id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)setDonationsEnabled:(BOOL)arg1 ;
-(BOOL)isDonationsEnabled;
@end

