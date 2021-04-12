/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/


@class NSDate, NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface ICQDaemonPersisted : NSObject {

	BOOL _failedToFetchFromServer;
	NSDate* _retrievalDate;
	double _callbackInterval;
	NSString* _accountAltDSID;
	NSDictionary* _serverDictionary;
	NSDictionary* _failureDetails;

}

@property (nonatomic,readonly) NSDictionary * _persistenceDictionary; 
@property (nonatomic,retain) NSDate * retrievalDate;                                             //@synthesize retrievalDate=_retrievalDate - In the implementation block
@property (assign,nonatomic) double callbackInterval;                                            //@synthesize callbackInterval=_callbackInterval - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,retain) NSString * accountAltDSID;                                          //@synthesize accountAltDSID=_accountAltDSID - In the implementation block
@property (nonatomic,retain) NSDictionary * serverDictionary;                                    //@synthesize serverDictionary=_serverDictionary - In the implementation block
@property (assign,nonatomic) BOOL failedToFetchFromServer;                                       //@synthesize failedToFetchFromServer=_failedToFetchFromServer - In the implementation block
@property (nonatomic,retain) NSDictionary * failureDetails;                                      //@synthesize failureDetails=_failureDetails - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _mutablePersistenceDictionary; 
@property (nonatomic,readonly) NSNumber * _cachedQuotaAvailable; 
+(id)persistedObject;
+(void)clearPersistedObject;
+(id)persistenceKey;
+(id)_mutablePlaceholderPersistanceDictionary;
+(id)_placeholderPersistenceDictionary;
+(id)persistenceDomain;
+(double)defaultCallbackInterval;
+(id)_placeholderObject;
+(void)clearPersistedObjectWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)failureDetails;
-(void)setFailureDetails:(NSDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSNumber *)_cachedQuotaAvailable;
-(NSDate *)retrievalDate;
-(id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2 ;
-(NSDictionary *)serverDictionary;
-(NSDictionary *)_persistenceDictionary;
-(BOOL)isValidForAccount:(id)arg1 ;
-(void)persistWithCompletion:(/*^block*/id)arg1 ;
-(id)_initWithAccount:(id)arg1 error:(id)arg2 ;
-(void)setServerDictionary:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)_mutablePersistenceDictionary;
-(double)callbackInterval;
-(NSString *)accountAltDSID;
-(void)setRetrievalDate:(NSDate *)arg1 ;
-(double)_callbackIntervalFromServerObject:(id)arg1 ;
-(void)setCallbackInterval:(double)arg1 ;
-(void)setAccountAltDSID:(NSString *)arg1 ;
-(id)_initWithAccountAltDSID:(id)arg1 error:(id)arg2 ;
-(void)setFailedToFetchFromServer:(BOOL)arg1 ;
-(void)persistObject;
-(BOOL)failedToFetchFromServer;
@end

