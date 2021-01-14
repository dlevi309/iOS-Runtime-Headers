/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/SYSessionDelegate.h>

@protocol MTSyncServiceDelegate;
@class NSMutableArray, MTCompanionSyncRequest, SYSession, NSArray, NSString;

@interface MTCompanionSyncSession : NSObject <SYSessionDelegate> {

	NSMutableArray* _processedChanges;
	MTCompanionSyncRequest* _request;
	SYSession* _session;
	NSArray* _pendingChanges;
	unsigned long long _lastIndex;
	id<MTSyncServiceDelegate> _delegate;

}

@property (nonatomic,retain) SYSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MTCompanionSyncRequest * request;                       //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSArray * pendingChanges;                               //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedChanges;                      //@synthesize processedChanges=_processedChanges - In the implementation block
@property (assign,nonatomic) unsigned long long lastIndex;                           //@synthesize lastIndex=_lastIndex - In the implementation block
@property (assign,nonatomic,__weak) id<MTSyncServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequest:(MTCompanionSyncRequest *)arg1 ;
-(id<MTSyncServiceDelegate>)delegate;
-(id)sessionDescription;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(id)initWithSession:(id)arg1 request:(id)arg2 delegate:(id)arg3 ;
-(unsigned)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(NSMutableArray *)processedChanges;
-(SYSession *)session;
-(void)setProcessedChanges:(NSMutableArray *)arg1 ;
-(void)setLastIndex:(unsigned long long)arg1 ;
-(MTCompanionSyncRequest *)request;
-(void)setDelegate:(id<MTSyncServiceDelegate>)arg1 ;
-(NSString *)description;
-(void)setSession:(SYSession *)arg1 ;
-(void)setPendingChanges:(NSArray *)arg1 ;
-(NSArray *)pendingChanges;
-(unsigned long long)lastIndex;
@end

