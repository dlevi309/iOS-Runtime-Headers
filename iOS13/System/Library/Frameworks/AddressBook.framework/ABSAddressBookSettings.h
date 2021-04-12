/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@protocol CNSchedulerProvider;
@class CNFuture, NSDictionary;

@interface ABSAddressBookSettings : NSObject {

	int _policy;
	CNFuture* _contactStoreFuture;
	NSDictionary* _options;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) CNFuture * contactStoreFuture;                          //@synthesize contactStoreFuture=_contactStoreFuture - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) int policy;                                             //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
-(id)init;
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(int)policy;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithOptions:(id)arg1 policy:(int)arg2 ;
-(id)initWithOptions:(id)arg1 policy:(int)arg2 contactStoreFuture:(id)arg3 schedulerProvider:(id)arg4 ;
-(CNFuture *)contactStoreFuture;
-(id)initWithContactStoreFuture:(id)arg1 ;
-(id)newFaultHandlerWithStorage:(id)arg1 ;
@end

