/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYSessionDelegate.h>

@class NSDictionary, SYStore, SYSession, NSString;

@interface SYStoreSessionOwner : NSObject <SYSessionDelegate> {

	NSDictionary* _context;
	NSDictionary* _idsOptions;
	SYStore* _store;
	/*^block*/id _errorCallback;
	/*^block*/id _onComplete;
	SYSession* _session;

}

@property (nonatomic,readonly) BOOL isResetSync; 
@property (nonatomic,copy) NSDictionary * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSDictionary * idsOptions;               //@synthesize idsOptions=_idsOptions - In the implementation block
@property (assign,nonatomic,__weak) SYStore * store;                //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id errorCallback;                        //@synthesize errorCallback=_errorCallback - In the implementation block
@property (nonatomic,copy) id onComplete;                           //@synthesize onComplete=_onComplete - In the implementation block
@property (nonatomic,retain) SYSession * session;                   //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)context;
-(SYStore *)store;
-(void)setContext:(NSDictionary *)arg1 ;
-(SYSession *)session;
-(void)setSession:(SYSession *)arg1 ;
-(void)setStore:(SYStore *)arg1 ;
-(BOOL)isResetSync;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(BOOL)syncSession:(id)arg1 rollbackChangesWithError:(id*)arg2 ;
-(void)setIdsOptions:(NSDictionary *)arg1 ;
-(void)setErrorCallback:(id)arg1 ;
-(void)setOnComplete:(id)arg1 ;
-(id)errorCallback;
-(id)onComplete;
-(NSDictionary *)idsOptions;
@end

