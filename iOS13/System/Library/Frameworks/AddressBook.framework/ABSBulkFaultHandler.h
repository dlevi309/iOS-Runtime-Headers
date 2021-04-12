/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(ABSAddressBookContextStorage *)storage;
-(id)store;
-(id<CNScheduler>)inlineScheduler;
-(long long)interest;
-(void)setInterest:(long long)arg1 ;
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

