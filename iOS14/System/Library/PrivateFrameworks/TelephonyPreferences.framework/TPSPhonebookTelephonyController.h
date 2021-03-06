/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSTelephonyController.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@class CTPhoneNumberInfo, CTXPCServiceSubscriptionContext, NSString;

@interface TPSPhonebookTelephonyController : TPSTelephonyController <CoreTelephonyClientSuppServicesDelegate> {

	CTPhoneNumberInfo* _phoneNumberInfo;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	long long _phoneBookEntryCount;
	NSString* _updatePhoneNumber;
	/*^block*/id _updatePhoneNumberInfoCompletion;

}

@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (assign,nonatomic) long long phoneBookEntryCount;                                        //@synthesize phoneBookEntryCount=_phoneBookEntryCount - In the implementation block
@property (nonatomic,retain) CTPhoneNumberInfo * phoneNumberInfo;                                  //@synthesize phoneNumberInfo=_phoneNumberInfo - In the implementation block
@property (nonatomic,copy) NSString * updatePhoneNumber;                                           //@synthesize updatePhoneNumber=_updatePhoneNumber - In the implementation block
@property (nonatomic,copy) id updatePhoneNumberInfoCompletion;                                     //@synthesize updatePhoneNumberInfoCompletion=_updatePhoneNumberInfoCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)phoneNumberChanged:(id)arg1 ;
-(void)phoneBookSelected:(id)arg1 ;
-(id)init;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(CTPhoneNumberInfo *)phoneNumberInfo;
-(void)updatePhoneNumberInfo:(id)arg1 label:(id)arg2 number:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchPhoneNumberInfo;
-(id)getPhoneNumberInfo;
-(id)getPhoneNumberInfoWithError:(id*)arg1 ;
-(void)setPhoneNumberInfo:(CTPhoneNumberInfo *)arg1 ;
-(void)fetchPhoneNumberInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)savePhoneBookEntryAtIndex:(int)arg1 withContactName:(id)arg2 contactNumber:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setUpdatePhoneNumber:(NSString *)arg1 ;
-(void)setUpdatePhoneNumberInfoCompletion:(id)arg1 ;
-(id)updatePhoneNumberInfoCompletion;
-(void)selectPhoneBookWithName:(int)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)updatePhoneNumber;
-(void)savePhoneBookEntryAtIndex:(int)arg1 withContactName:(id)arg2 contactNumber:(id)arg3 ;
-(long long)phoneBookEntryCount;
-(void)setPhoneBookEntryCount:(long long)arg1 ;
@end

