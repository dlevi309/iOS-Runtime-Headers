/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/

#import <libobjc.A.dylib/SLGLogClientProtocolDelegate.h>
#import <libobjc.A.dylib/SLGLogging.h>

@protocol SLGLogClientProtocol, SLGDomainWhitelisting, OS_dispatch_queue;
@class NSNumber, NSString, NSDateFormatter, NSHashTable, NSObject, NSSet;

@interface SLGLog : NSObject <SLGLogClientProtocolDelegate, SLGLogging> {

	id<SLGLogClientProtocol> _client;
	id<SLGDomainWhitelisting> _whitelist;
	NSNumber* _pid;
	NSString* _processName;
	NSDateFormatter* _dateFormatter;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observerLockQueue;
	NSObject*<OS_dispatch_queue> _observerCalloutQueue;
	BOOL _isEnabled;

}

@property (nonatomic,copy,readonly) NSSet * whitelistedDomains; 
@property (assign,nonatomic) BOOL allowUnspecifiedDomains; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)_setClient:(id)arg1 ;
-(id)initWithClient:(id)arg1 whitelist:(id)arg2 enabled:(BOOL)arg3 ;
-(void)addDomainToWhitelist:(id)arg1 ;
-(id)init;
-(id)_wrapObjectWithEntryMetadata:(id)arg1 domain:(id)arg2 tags:(id)arg3 ;
-(void)beginSession;
-(void)removeDomainFromWhitelist:(id)arg1 ;
-(NSSet *)whitelistedDomains;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)reset:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 tags:(/*^block*/id)arg2 ;
-(void)log:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 ;
-(void)client:(id)arg1 didReceiveInitialLogMessageFromDomain:(id)arg2 ;
-(id)_serializeObjectAsLogEntry:(id)arg1 domain:(id)arg2 tags:(id)arg3 error:(id*)arg4 ;
-(void)log:(id)arg1 domain:(id)arg2 tags:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)allowUnspecifiedDomains;
-(void)beginSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)setAllowUnspecifiedDomains:(BOOL)arg1 ;
-(void)_fetchProcessInfo;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(void)reset;
-(void)log:(id)arg1 tags:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)log:(id)arg1 domain:(id)arg2 ;
-(void)endSessionAndRenameFileTo:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)log:(id)arg1 domain:(id)arg2 tags:(id)arg3 ;
-(BOOL)isEnabled;
-(void)log:(id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)log:(id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)endSession;
-(void)clientDidReceiveServerReset:(id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 ;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 tags:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 ;
-(void)log:(id)arg1 tags:(id)arg2 ;
@end

