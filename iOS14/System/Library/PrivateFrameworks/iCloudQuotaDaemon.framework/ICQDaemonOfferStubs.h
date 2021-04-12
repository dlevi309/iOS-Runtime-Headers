/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/

#import <iCloudQuotaDaemon/ICQDaemonPersisted.h>

@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted {

	NSArray* _serverStubs;
	NSArray* _buddyStubs;
	NSArray* _defaultStubs;

}

@property (nonatomic,readonly) NSArray * serverStubs;               //@synthesize serverStubs=_serverStubs - In the implementation block
@property (nonatomic,readonly) NSArray * buddyStubs;                //@synthesize buddyStubs=_buddyStubs - In the implementation block
@property (nonatomic,readonly) NSArray * defaultStubs;              //@synthesize defaultStubs=_defaultStubs - In the implementation block
+(id)daemonOfferStubsDictionarySample;
+(id)persistenceKey;
-(id)initWithDictionary:(id)arg1 ;
-(id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2 ;
-(id)chooseFirstStub;
-(id)chooseFirstDefaultStub;
-(id)_initWithAccount:(id)arg1 error:(id)arg2 ;
-(id)chooseBuddyStub;
-(id)chooseStub;
-(id)chooseBuddyStubForOfferType:(long long)arg1 ;
-(id)chooseStubForOfferType:(long long)arg1 ;
-(NSArray *)serverStubs;
-(id)_chooseStubFromServerStubs:(id)arg1 conditions:(id)arg2 ;
-(NSArray *)buddyStubs;
-(NSArray *)defaultStubs;
-(void)_initServerStubsFromServerDictionary;
-(void)setServerDictionary:(id)arg1 ;
-(BOOL)_isValidServerStubs:(id)arg1 key:(id)arg2 ;
-(id)sortedServerStubs:(id)arg1 ;
-(id)chooseStubForConditions:(id)arg1 ;
-(id)chooseBuddyStubForConditions:(id)arg1 ;
-(id)chooseDefaultStub;
-(id)chooseDefaultStubForConditions:(id)arg1 ;
-(id)_chooseStubFromServerStubs:(id)arg1 offerType:(long long)arg2 ;
@end

