/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)reset;
-(void)log:(id)arg1 ;
-(BOOL)isEnabled;
-(void)endSession;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 ;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(void)beginSession;
-(BOOL)allowUnspecifiedDomains;
-(void)setAllowUnspecifiedDomains:(BOOL)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithClient:(id)arg1 whitelist:(id)arg2 enabled:(BOOL)arg3 ;
-(void)_setClient:(id)arg1 ;
-(void)_fetchProcessInfo;
-(void)endSessionAndRenameFileTo:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reset:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_serializeObjectAsLogEntry:(id)arg1 domain:(id)arg2 tags:(id)arg3 error:(id*)arg4 ;
-(void)log:(id)arg1 domain:(id)arg2 tags:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)_wrapObjectWithEntryMetadata:(id)arg1 domain:(id)arg2 tags:(id)arg3 ;
-(void)client:(id)arg1 didReceiveInitialLogMessageFromDomain:(id)arg2 ;
-(void)clientDidReceiveServerReset:(id)arg1 ;
-(void)log:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)log:(id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)log:(id)arg1 tags:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)log:(id)arg1 tags:(id)arg2 ;
-(void)log:(id)arg1 domain:(id)arg2 tags:(id)arg3 ;
-(void)log:(id)arg1 domain:(id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 tags:(/*^block*/id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 tags:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSSet *)whitelistedDomains;
-(void)addDomainToWhitelist:(id)arg1 ;
-(void)removeDomainFromWhitelist:(id)arg1 ;
@end

