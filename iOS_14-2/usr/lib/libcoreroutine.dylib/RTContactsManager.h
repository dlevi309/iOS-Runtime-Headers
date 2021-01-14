/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDataProtectionManager, RTMapServiceManager, RTDistanceCalculator, CNContact;

@interface RTContactsManager : RTService {

	BOOL _available;
	RTDataProtectionManager* _dataProtectionManager;
	RTMapServiceManager* _mapServiceManager;
	RTDistanceCalculator* _distanceCalculator;
	CNContact* _meCard;

}

@property (nonatomic,retain) RTDataProtectionManager * dataProtectionManager;              //@synthesize dataProtectionManager=_dataProtectionManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                      //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;                    //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,retain) CNContact * meCard;                                           //@synthesize meCard=_meCard - In the implementation block
@property (assign,nonatomic) BOOL available;                                               //@synthesize available=_available - In the implementation block
+(id)addressLabelTypeToString:(unsigned long long)arg1 ;
+(unsigned long long)labelStringToAddressLabelType:(id)arg1 ;
+(id)addressDictionaryFromMapItem:(id)arg1 ;
+(id)addressLabelTypeToLabel:(unsigned long long)arg1 ;
+(id)formattedPostalAddressesForContact:(id)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setAvailable:(BOOL)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(void)_shutdown;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)_setup;
-(BOOL)available;
-(id)init;
-(void)setMeCard:(CNContact *)arg1 ;
-(CNContact *)meCard;
-(RTDataProtectionManager *)dataProtectionManager;
-(RTDistanceCalculator *)distanceCalculator;
-(void)fetchFormattedPostalAddressesFromMeCard:(/*^block*/id)arg1 ;
-(void)onDataProtectionNotification:(id)arg1 ;
-(id)initWithDataProtectionManager:(id)arg1 mapServiceManager:(id)arg2 distanceCalculator:(id)arg3 ;
-(id)addressIdentifierOfMeCardWithAddressFromMapItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateAddressOfMeCardWithAddressIdentifier:(id)arg1 toAddressFromMapItem:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateAddressLabelTypeOfMeCardWithAddressIdentifier:(id)arg1 toAddressLabelType:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)removeAddressOfMeCardWithAddressIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)addAddressToMeCardWithAddressLabelType:(unsigned long long)arg1 addressFromMapItem:(id)arg2 error:(id*)arg3 ;
-(void)fetchMeCardWithHandler:(/*^block*/id)arg1 ;
-(void)donateAddressFromMapItem:(id)arg1 addressLabelType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)onContactStoreNotification:(id)arg1 ;
-(void)_onContactStoreNotification:(id)arg1 ;
-(id)_getMeCardWithError:(id*)arg1 ;
-(void)_fetchMeCardWithHandler:(/*^block*/id)arg1 ;
-(BOOL)labelTypeValidForDonation:(unsigned long long)arg1 ;
-(void)__donateAddressFromMapItem:(id)arg1 addressLabelType:(unsigned long long)arg2 donationStore:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_donateAddressFromMapItem:(id)arg1 addressLabelType:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)removeAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)addressIdentifierOfContact:(id)arg1 withAddressFromMapItem:(id)arg2 error:(id*)arg3 ;
-(id)addAddressToContact:(id)arg1 addressLabelType:(unsigned long long)arg2 addressFromMapItem:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressFromMapItem:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateAddressLabelTypeOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressLabelType:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)setDataProtectionManager:(RTDataProtectionManager *)arg1 ;
@end

