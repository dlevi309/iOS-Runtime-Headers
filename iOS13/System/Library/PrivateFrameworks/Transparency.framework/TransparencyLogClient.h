/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class TransparencyLogSession, TransparencyManagedDataStore;

@interface TransparencyLogClient : NSObject {

	TransparencyLogSession* _session;
	TransparencyManagedDataStore* _dataStore;

}

@property (retain) TransparencyLogSession * session;                      //@synthesize session=_session - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
-(TransparencyLogSession *)session;
-(void)setSession:(TransparencyLogSession *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)needsRetry:(id)arg1 ;
-(BOOL)fetch:(id)arg1 shouldRetry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)fetch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)download:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBackgroundSession:(id)arg1 dataStore:(id)arg2 ;
-(BOOL)fetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)downloadRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

