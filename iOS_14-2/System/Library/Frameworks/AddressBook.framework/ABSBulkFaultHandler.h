/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@protocol CNScheduler;
@class ABSAddressBookContextStorage, CNFuture, NSMutableSet;

@interface ABSBulkFaultHandler : NSObject {

	ABSAddressBookContextStorage* _storage;
	id<CNScheduler> _inlineScheduler;
	CNFuture* _contactStoreFuture;
	NSMutableSet* _keyDescriptorOfInterests;
	long long _interest;
	double _lastRequestTimeStamp;

}

@property (nonatomic,readonly) ABSAddressBookContextStorage * storage;               //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler;                      //@synthesize inlineScheduler=_inlineScheduler - In the implementation block
@property (nonatomic,readonly) CNFuture * contactStoreFuture;                        //@synthesize contactStoreFuture=_contactStoreFuture - In the implementation block
@property (nonatomic,readonly) NSMutableSet * keyDescriptorOfInterests;              //@synthesize keyDescriptorOfInterests=_keyDescriptorOfInterests - In the implementation block
@property (assign,nonatomic) long long interest;                                     //@synthesize interest=_interest - In the implementation block
@property (assign,nonatomic) double lastRequestTimeStamp;                            //@synthesize lastRequestTimeStamp=_lastRequestTimeStamp - In the implementation block
+(long long)batchSize;
+(long long)interestThreshold;
+(double)interestWindow;
-(id)store;
-(ABSAddressBookContextStorage *)storage;
-(id<CNScheduler>)inlineScheduler;
-(void)setInterest:(long long)arg1 ;
-(long long)interest;
-(void)completePerson:(id)arg1 withKeysToFetch:(id)arg2 ;
-(CNFuture *)contactStoreFuture;
-(id)initWithStorage:(id)arg1 contactStoreFuture:(id)arg2 schedulerProvider:(id)arg3 ;
-(BOOL)withinInterestWindow;
-(void)resetInterest;
-(NSMutableSet *)keyDescriptorOfInterests;
-(id)batchOfPeopleInStorageMissingKeysIncluding:(id)arg1 ;
-(void)completePeople:(id)arg1 withKeysToFetch:(id)arg2 ;
-(void)increaseInterest;
-(double)lastRequestTimeStamp;
-(void)refetchContacts:(id)arg1 keysToFetch:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setLastRequestTimeStamp:(double)arg1 ;
@end

